#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TalkTrigger_DialogueGroupInfo.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_TALKTRIGGER_SHOWTALKBTNPARAM_RESET_OFFSET UNITYSDK_OFFSET(0xB75F410)
#define RPG_GAMECORE_TALKTRIGGER_SHOWTALKBTNPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB75CBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkTrigger_ShowTalkBtnParam_TypeDefinitionIndex = 53034;

	class TalkTrigger_ShowTalkBtnParam : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TalkTrigger_DialogueGroupInfo>* DialogueGroupInfos; // 0x10
		::System::UInt32 HostRuntimeID; // 0x18
		::System::UInt32 GuestRuntimeID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SHOWTALKBTNPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SHOWTALKBTNPARAM_RESET_OFFSET))(this);
		}
	};
}
