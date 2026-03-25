#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterReplaceMaterialConfig; }
namespace RPG::GameCore { class CharacterReplaceMaterialOriginProperty; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A34BDDEE0FB05D86_METHOD_1_082ACCEF788ADD52_OFFSET UNITYSDK_OFFSET(0x8CE78D0)
#define CLASS_1_A34BDDEE0FB05D86_METHOD_1_2D2B0BC0C0CD7713_OFFSET UNITYSDK_OFFSET(0x8CE7BF0)
#define CLASS_1_A34BDDEE0FB05D86_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8CE77C0)
#define CLASS_1_A34BDDEE0FB05D86_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x8CE7800)
#define CLASS_1_A34BDDEE0FB05D86__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CE7DF0)

inline static constexpr unsigned int Class_1_A34BDDEE0FB05D86_TypeDefinitionIndex = 60064;

class Class_1_A34BDDEE0FB05D86 : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterReplaceMaterialConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::CharacterReplaceMaterialConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A34BDDEE0FB05D86_TypeDefinitionIndex)->GetStaticField(0xECE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialConfig*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A34BDDEE0FB05D86_TypeDefinitionIndex)->GetStaticField(0xECE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A34BDDEE0FB05D86__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A34BDDEE0FB05D86_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A34BDDEE0FB05D86_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::RPG::GameCore::CharacterReplaceMaterialRenderList* Method_1_082ACCEF788ADD52(::System::String* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::CharacterReplaceMaterialRenderList*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A34BDDEE0FB05D86_METHOD_1_082ACCEF788ADD52_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::CharacterReplaceMaterialOriginProperty* Method_1_2D2B0BC0C0CD7713(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterReplaceMaterialOriginProperty*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A34BDDEE0FB05D86_METHOD_1_2D2B0BC0C0CD7713_OFFSET))(a1);
	}
};
