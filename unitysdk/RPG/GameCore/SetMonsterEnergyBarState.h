#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_SETMONSTERENERGYBARSTATE_METHOD_3_5FEB16E4455F21EC_OFFSET UNITYSDK_OFFSET(0x18E3A440)
#define RPG_GAMECORE_SETMONSTERENERGYBARSTATE_METHOD_3_D66400D8AF37A3F8_OFFSET UNITYSDK_OFFSET(0x18E3A340)
#define RPG_GAMECORE_SETMONSTERENERGYBARSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3A3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterEnergyBarState_TypeDefinitionIndex = 22639;

	class SetMonsterEnergyBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::BoolEx Active; // 0x20
		::RPG::GameCore::BoolEx EnableSelectedState; // 0x24
		::RPG::GameCore::EnergyBarState State; // 0x28
		::System::Int32 CenterStyle; // 0x2C
		::System::Int32 OuterState; // 0x30
		::System::String* IconPath; // 0x38
		::System::String* UIEffectPath; // 0x40
		::RPG::GameCore::DynamicFloat* MaxCount; // 0x48
		::RPG::GameCore::DynamicFloat* CurrentCount; // 0x50
		::RPG::GameCore::DynamicFloat* ShowCount; // 0x58
		::RPG::GameCore::MonsterEnergyBarType EnergyBarType; // 0x60
		::System::String* CustomPrefabPath; // 0x68
		::Il2CppArray<::RPG::GameCore::UITextNode*>* UITextNodes; // 0x70
		::System::Int32 BossDotStyle; // 0x78
		::Il2CppArray<::System::String*>* EnergyDotPrefabPaths; // 0x80
		::System::String* TriggerName; // 0x88
		::System::String* SpecialEffPath; // 0x90
		::RPG::GameCore::MonsterEnergyBarNumColor NumColor; // 0x98
		::RPG::GameCore::MonsterEnergyBarCustomColor* CustomColor; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERENERGYBARSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D66400D8AF37A3F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterEnergyBarState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterEnergyBarState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERENERGYBARSTATE_METHOD_3_D66400D8AF37A3F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5FEB16E4455F21EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterEnergyBarState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERENERGYBARSTATE_METHOD_3_5FEB16E4455F21EC_OFFSET))(a1, a2);
		}
	};
}
