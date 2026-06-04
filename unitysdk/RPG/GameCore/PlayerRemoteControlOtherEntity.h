#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY_METHOD_3_52D8336334ACC424_OFFSET UNITYSDK_OFFSET(0x19A3DAE0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY_METHOD_3_82620A8445A11AE6_OFFSET UNITYSDK_OFFSET(0x19A3DA60)
#define RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3DAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRemoteControlOtherEntity_TypeDefinitionIndex = 19378;

	class PlayerRemoteControlOtherEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x18
		::System::UInt32 SpecialNPCID; // 0x20
		::System::Boolean IsCancel; // 0x24
		::System::Boolean UseLocalPlayerPosition; // 0x25
		::System::Boolean RecoverControlEntityPosition; // 0x26
		::System::Boolean LeavePlayerStubInplace; // 0x27
		::RPG::GameCore::DynamicString* PlayerStubAnimation; // 0x28
		::RPG::GameCore::DynamicString* PlayerStubLevelAreaKey; // 0x30
		::System::Boolean ForcePositionAndRotation; // 0x38
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x40
		::System::Boolean ShowReleaseButton; // 0x48
		::System::Boolean SupportRush; // 0x49
		::System::Boolean SyncPositionToServer; // 0x4A
		::System::Boolean CanUseSameMapTeleport; // 0x4B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82620A8445A11AE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerRemoteControlOtherEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerRemoteControlOtherEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY_METHOD_3_82620A8445A11AE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52D8336334ACC424(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerRemoteControlOtherEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerRemoteControlOtherEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY_METHOD_3_52D8336334ACC424_OFFSET))(a1, a2);
		}
	};
}
