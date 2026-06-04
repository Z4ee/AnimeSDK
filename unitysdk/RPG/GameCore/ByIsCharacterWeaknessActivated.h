#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_09CFAAAACF3A68B9_OFFSET UNITYSDK_OFFSET(0x1955CC70)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_0F47F485DFD7163A_OFFSET UNITYSDK_OFFSET(0x1955CBF0)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_7A90B4CD151B2E74_OFFSET UNITYSDK_OFFSET(0x1955CA20)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_DFDEDC9FCCE73D64_OFFSET UNITYSDK_OFFSET(0x1955C950)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1955C9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCharacterWeaknessActivated_TypeDefinitionIndex = 22260;

	class ByIsCharacterWeaknessActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DFDEDC9FCCE73D64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_DFDEDC9FCCE73D64_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7A90B4CD151B2E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_7A90B4CD151B2E74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F47F485DFD7163A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_0F47F485DFD7163A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_09CFAAAACF3A68B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_09CFAAAACF3A68B9_OFFSET))(a1, a2);
		}
	};
}
