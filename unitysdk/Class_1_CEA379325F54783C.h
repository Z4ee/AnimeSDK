#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureCharacterFloatingTemplateConfig; }
namespace RPG::GameCore { class AdventureCharacterFloatingTemplateConfigs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CEA379325F54783C_METHOD_1_5371FB60ABB69F96_OFFSET UNITYSDK_OFFSET(0xCBD5440)
#define CLASS_1_CEA379325F54783C_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCBD53A0)
#define CLASS_1_CEA379325F54783C_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0xCBD5180)
#define CLASS_1_CEA379325F54783C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xCBD53F0)

inline static constexpr unsigned int Class_1_CEA379325F54783C_TypeDefinitionIndex = 68455;

class Class_1_CEA379325F54783C : public ::System::Object
{
public:
	static ::RPG::GameCore::AdventureCharacterFloatingTemplateConfigs** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::AdventureCharacterFloatingTemplateConfigs**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEA379325F54783C_TypeDefinitionIndex)->GetStaticField(0x68BD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEA379325F54783C_TypeDefinitionIndex)->GetStaticField(0x68BD8);
	}
	// static const ::System::String* Field_1_2; // 0x0

	static ::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEA379325F54783C_METHOD_1_BF5E2DCAE0BF038A_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEA379325F54783C_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEA379325F54783C_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig* Method_1_5371FB60ABB69F96(::System::String* a1)
	{
		return ((::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CEA379325F54783C_METHOD_1_5371FB60ABB69F96_OFFSET))(a1);
	}
};
