#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureCharacterFloatingTemplateConfig; }
namespace RPG::GameCore { class AdventureCharacterFloatingTemplateConfigs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AB63D022BB2ED992_METHOD_1_5151C030EB44257F_OFFSET UNITYSDK_OFFSET(0x17606C20)
#define CLASS_1_AB63D022BB2ED992_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17606B80)
#define CLASS_1_AB63D022BB2ED992_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x17606960)
#define CLASS_1_AB63D022BB2ED992_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x17606BD0)

inline static constexpr unsigned int Class_1_AB63D022BB2ED992_TypeDefinitionIndex = 69949;

class Class_1_AB63D022BB2ED992 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB63D022BB2ED992_TypeDefinitionIndex)->GetStaticField(0x60EB0);
	}
	static ::RPG::GameCore::AdventureCharacterFloatingTemplateConfigs** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::AdventureCharacterFloatingTemplateConfigs**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB63D022BB2ED992_TypeDefinitionIndex)->GetStaticField(0x60EB8);
	}
	// static const ::System::String* Field_1_2; // 0x0

	static ::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB63D022BB2ED992_METHOD_1_BF5E2DCAE0BF038A_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB63D022BB2ED992_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB63D022BB2ED992_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig* Method_1_5151C030EB44257F(::System::String* a1)
	{
		return ((::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AB63D022BB2ED992_METHOD_1_5151C030EB44257F_OFFSET))(a1);
	}
};
