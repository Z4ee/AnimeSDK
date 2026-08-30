#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE_METHOD_3_4524C848BB6BF5FC_OFFSET UNITYSDK_OFFSET(0x1CAF5710)
#define RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE_METHOD_3_A0716B1CCF2133D2_OFFSET UNITYSDK_OFFSET(0x1CAF5530)
#define RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF5630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMissionCameraTemplate_TypeDefinitionIndex = 23535;

	class StartMissionCameraTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CamDuration; // 0x18
		::RPG::GameCore::DynamicFloat* WaitSecondsBeforeCut; // 0x20
		::RPG::GameCore::DynamicString* CameraAnchor; // 0x28
		::RPG::GameCore::DynamicString* CameraTargetName; // 0x30
		::RPG::GameCore::DynamicFloat* FirstTalkListStart; // 0x38
		::RPG::GameCore::DynamicFloat* FirstTalkListEnd; // 0x40
		::RPG::GameCore::DynamicFloat* SecondTalkListStart; // 0x48
		::RPG::GameCore::DynamicFloat* SecondTalkListEnd; // 0x50
		::RPG::GameCore::DynamicFloat* FaceToCameraTarget; // 0x58
		::RPG::GameCore::DynamicString* CallBackEventName; // 0x60
		::RPG::GameCore::DynamicFloat* CutToAdventureCamera; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0716B1CCF2133D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartMissionCameraTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartMissionCameraTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE_METHOD_3_A0716B1CCF2133D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4524C848BB6BF5FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartMissionCameraTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartMissionCameraTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMISSIONCAMERATEMPLATE_METHOD_3_4524C848BB6BF5FC_OFFSET))(a1, a2);
		}
	};
}
