#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RelicRecommendProperty; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_5D2E9E194E93B02A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154AD380)
#define CLASS_1_5D2E9E194E93B02A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154AD3C0)
#define CLASS_1_5D2E9E194E93B02A___C__GETRECOMMENDMAINAFFIXS_B__4_0_OFFSET UNITYSDK_OFFSET(0x154AD3D0)

inline static constexpr unsigned int Class_1_5D2E9E194E93B02A___c_TypeDefinitionIndex = 66860;

class Class_1_5D2E9E194E93B02A___c : public ::System::Object
{
public:
	static ::Class_1_5D2E9E194E93B02A___c** StaticGet___9()
	{
		return (::Class_1_5D2E9E194E93B02A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D2E9E194E93B02A___c_TypeDefinitionIndex)->GetStaticField(0x5E3A0);
	}
	static ::System::Func_2<::RPG::GameCore::RelicRecommendProperty*, ::RPG::GameCore::AvatarPropertyType>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::GameCore::RelicRecommendProperty*, ::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D2E9E194E93B02A___c_TypeDefinitionIndex)->GetStaticField(0x5E3A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarPropertyType _GetRecommendMainAffixs_b__4_0(::RPG::GameCore::RelicRecommendProperty* a1)
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::RelicRecommendProperty*))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A___C__GETRECOMMENDMAINAFFIXS_B__4_0_OFFSET))(this, a1);
	}
};
