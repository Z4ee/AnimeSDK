#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FIVEDIMCHESTCONFIG_METHOD_3_92011626DCD17226_OFFSET UNITYSDK_OFFSET(0x171EB9D0)
#define RPG_GAMECORE_FIVEDIMCHESTCONFIG_METHOD_3_CB6AF8F00DEC6993_OFFSET UNITYSDK_OFFSET(0x171EB960)
#define RPG_GAMECORE_FIVEDIMCHESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171EB9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChestConfig_TypeDefinitionIndex = 17028;

	class FiveDimChestConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsChest; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::RPG::GameCore::FiveDimChestState DefaultState; // 0x20
		::System::Boolean IsSidePuzzleChest; // 0x24
		::System::Int16 LockValue; // 0x26
		::System::Int16 CloseValue; // 0x28
		::System::Int16 OpenValue; // 0x2A
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x30
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x38
		::RPG::GameCore::LittleGameEvent* InitAsLockEvent; // 0x40
		::RPG::GameCore::LittleGameEvent* InitAsCloseEvent; // 0x48
		::RPG::GameCore::LittleGameEvent* InitAsOpenEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* LockEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* CloseEvent; // 0x60
		::RPG::GameCore::LittleGameEvent* OpenEvent; // 0x68
		::RPG::GameCore::LittleGameEvent* InteractLockEvent; // 0x70
		::RPG::GameCore::LittleGameEvent* InteractCloseEvent; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB6AF8F00DEC6993(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHESTCONFIG_METHOD_3_CB6AF8F00DEC6993_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_92011626DCD17226(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHESTCONFIG_METHOD_3_92011626DCD17226_OFFSET))(a1, a2);
		}
	};
}
