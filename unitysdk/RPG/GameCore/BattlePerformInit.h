#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class BattlePerformCreateActor; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMINIT_METHOD_3_76D3A0B465DFA0C6_OFFSET UNITYSDK_OFFSET(0x18701A00)
#define RPG_GAMECORE_BATTLEPERFORMINIT_METHOD_3_CCFBB557C76741E7_OFFSET UNITYSDK_OFFSET(0x18701A80)
#define RPG_GAMECORE_BATTLEPERFORMINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18701A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformInit_TypeDefinitionIndex = 22350;

	class BattlePerformInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaPrefabPath; // 0x18
		::System::Boolean CaptureEntity; // 0x20
		::System::Boolean AllowCaptureMember; // 0x21
		::Il2CppArray<::RPG::GameCore::BattlePerformCaptureActor*>* CaptureTeamLightList; // 0x28
		::Il2CppArray<::RPG::GameCore::BattlePerformCaptureActor*>* CaptureTeamDarkList; // 0x30
		::Il2CppArray<::RPG::GameCore::BattlePerformCreateActor*>* CreateList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMINIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76D3A0B465DFA0C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformInit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformInit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMINIT_METHOD_3_76D3A0B465DFA0C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCFBB557C76741E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformInit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMINIT_METHOD_3_CCFBB557C76741E7_OFFSET))(a1, a2);
		}
	};
}
