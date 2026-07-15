#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION_METHOD_3_43B3367F905377CA_OFFSET UNITYSDK_OFFSET(0x1BEAFBF0)
#define RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION_METHOD_3_EB2961ED9BEBF32F_OFFSET UNITYSDK_OFFSET(0x1BEAFCA0)
#define RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEAFC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAudioListenerFollowTargetAction_TypeDefinitionIndex = 17988;

	class FiveDimSetAudioListenerFollowTargetAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 TargetEntityID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43B3367F905377CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION_METHOD_3_43B3367F905377CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB2961ED9BEBF32F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION_METHOD_3_EB2961ED9BEBF32F_OFFSET))(a1, a2);
		}
	};
}
