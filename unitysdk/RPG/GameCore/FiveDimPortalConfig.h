#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FIVEDIMPORTALCONFIG_METHOD_3_371D10F6B2BFBD07_OFFSET UNITYSDK_OFFSET(0x1974D960)
#define RPG_GAMECORE_FIVEDIMPORTALCONFIG_METHOD_3_38200507158CE16D_OFFSET UNITYSDK_OFFSET(0x1974D9D0)
#define RPG_GAMECORE_FIVEDIMPORTALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1974D9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPortalConfig_TypeDefinitionIndex = 17652;

	class FiveDimPortalConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPortal; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* LockValues; // 0x20
		::Il2CppArray<::System::Int16>* UnlockValues; // 0x28
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x30
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x38
		::System::Boolean HasCustomTeleport; // 0x40
		::RPG::GameCore::FiveDimPortalTarget* Target; // 0x48
		::System::Boolean SyncLoadTargetLevel; // 0x50
		::System::Boolean NoCameraBlend; // 0x51
		::System::Boolean TriggerFiveDimLoadingView; // 0x52
		::System::Boolean AvatarFacingLeft; // 0x53
		::System::Boolean SendEventOnInit; // 0x54
		::RPG::GameCore::LittleGameEvent* LockEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* UnlockEvent; // 0x60
		::RPG::GameCore::LittleGameEvent* PortalInteractEvent; // 0x68
		::RPG::GameCore::LittleGameEvent* StartTeleportEvent; // 0x70
		::RPG::GameCore::LittleGameEvent* TeleportFinishEvent; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_371D10F6B2BFBD07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPortalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPortalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALCONFIG_METHOD_3_371D10F6B2BFBD07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38200507158CE16D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPortalConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALCONFIG_METHOD_3_38200507158CE16D_OFFSET))(a1, a2);
		}
	};
}
