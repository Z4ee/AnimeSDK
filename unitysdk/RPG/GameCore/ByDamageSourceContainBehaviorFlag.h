#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_4B5C72D1644C12AD_OFFSET UNITYSDK_OFFSET(0x1A8BC8B0)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_64AFFBBC809A6D47_OFFSET UNITYSDK_OFFSET(0x1A8BCA40)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_B7DE979A62C4C050_OFFSET UNITYSDK_OFFSET(0x1A8BCA70)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_F8948E17D9FF97C8_OFFSET UNITYSDK_OFFSET(0x1A8BC870)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BC8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDamageSourceContainBehaviorFlag_TypeDefinitionIndex = 22473;

	class ByDamageSourceContainBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F8948E17D9FF97C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_F8948E17D9FF97C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B5C72D1644C12AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_4B5C72D1644C12AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_64AFFBBC809A6D47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_64AFFBBC809A6D47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B7DE979A62C4C050(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_B7DE979A62C4C050_OFFSET))(a1, a2);
		}
	};
}
