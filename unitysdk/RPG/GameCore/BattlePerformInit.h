#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class BattlePerformCreateActor; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMINIT_METHOD_3_1619D6529C7D52E5_OFFSET UNITYSDK_OFFSET(0x194D4E70)
#define RPG_GAMECORE_BATTLEPERFORMINIT_METHOD_3_BF934ACC166C189F_OFFSET UNITYSDK_OFFSET(0x194D4DF0)
#define RPG_GAMECORE_BATTLEPERFORMINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x194D4E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformInit_TypeDefinitionIndex = 22108;

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

		static ::System::Void Method_3_BF934ACC166C189F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformInit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformInit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMINIT_METHOD_3_BF934ACC166C189F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1619D6529C7D52E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformInit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMINIT_METHOD_3_1619D6529C7D52E5_OFFSET))(a1, a2);
		}
	};
}
