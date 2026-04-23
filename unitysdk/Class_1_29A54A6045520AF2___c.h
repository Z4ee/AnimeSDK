#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RelicRecommendProperty; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_29A54A6045520AF2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1198B060)
#define CLASS_1_29A54A6045520AF2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1198B0A0)
#define CLASS_1_29A54A6045520AF2___C__GETRECOMMENDMAINAFFIXS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1198B0B0)

inline static constexpr unsigned int Class_1_29A54A6045520AF2___c_TypeDefinitionIndex = 61570;

class Class_1_29A54A6045520AF2___c : public ::System::Object
{
public:
	static ::Class_1_29A54A6045520AF2___c** StaticGet___9()
	{
		return (::Class_1_29A54A6045520AF2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29A54A6045520AF2___c_TypeDefinitionIndex)->GetStaticField(0x2FDB0);
	}
	static ::System::Func_2<::RPG::GameCore::RelicRecommendProperty*, ::RPG::GameCore::AvatarPropertyType>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::GameCore::RelicRecommendProperty*, ::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29A54A6045520AF2___c_TypeDefinitionIndex)->GetStaticField(0x2FDB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarPropertyType _GetRecommendMainAffixs_b__4_0(::RPG::GameCore::RelicRecommendProperty* p)
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::RelicRecommendProperty*))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2___C__GETRECOMMENDMAINAFFIXS_B__4_0_OFFSET))(this, p);
	}
};
