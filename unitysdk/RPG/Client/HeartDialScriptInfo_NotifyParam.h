#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HEARTDIALSCRIPTINFO_NOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1793A520)

namespace RPG::Client
{
	inline static constexpr unsigned int HeartDialScriptInfo_NotifyParam_TypeDefinitionIndex = 62740;

	class HeartDialScriptInfo_NotifyParam : public ::System::Object
	{
	public:
		::RPG::Client::TextID NpcNameTextID; // 0x10
		::RPG::GameCore::HeartDialStepType CurrentStepType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALSCRIPTINFO_NOTIFYPARAM__CTOR_OFFSET))(this);
		}
	};
}
