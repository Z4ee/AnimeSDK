#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY_METHOD_3_52D8336334ACC424_OFFSET UNITYSDK_OFFSET(0x1D351C70)
#define RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY_METHOD_3_BE93F0B5939BBD51_OFFSET UNITYSDK_OFFSET(0x1D351C20)
#define RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D351C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRemoteControlOtherEntity_TypeDefinitionIndex = 20280;

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

		static ::System::Void Method_3_BE93F0B5939BBD51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerRemoteControlOtherEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerRemoteControlOtherEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY_METHOD_3_BE93F0B5939BBD51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52D8336334ACC424(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerRemoteControlOtherEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerRemoteControlOtherEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLOTHERENTITY_METHOD_3_52D8336334ACC424_OFFSET))(a1, a2);
		}
	};
}
