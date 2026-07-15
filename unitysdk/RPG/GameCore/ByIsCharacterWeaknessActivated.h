#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_78A94CB7A15C9022_OFFSET UNITYSDK_OFFSET(0x1A8DA000)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_7A90B4CD151B2E74_OFFSET UNITYSDK_OFFSET(0x1A8D9E30)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_A6EE59165468C071_OFFSET UNITYSDK_OFFSET(0x1A8D9DF0)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_B694EC0BFE2C0A2C_OFFSET UNITYSDK_OFFSET(0x1A8DA030)
#define RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D9E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCharacterWeaknessActivated_TypeDefinitionIndex = 22701;

	class ByIsCharacterWeaknessActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A6EE59165468C071(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_A6EE59165468C071_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7A90B4CD151B2E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_7A90B4CD151B2E74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_78A94CB7A15C9022(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_78A94CB7A15C9022_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B694EC0BFE2C0A2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERWEAKNESSACTIVATED_METHOD_4_B694EC0BFE2C0A2C_OFFSET))(a1, a2);
		}
	};
}
