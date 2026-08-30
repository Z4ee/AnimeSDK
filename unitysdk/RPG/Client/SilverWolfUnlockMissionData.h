#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SILVERWOLFUNLOCKMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE08C7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfUnlockMissionData_TypeDefinitionIndex = 67951;

	class SilverWolfUnlockMissionData : public ::System::Object
	{
	public:
		::System::Object* Param; // 0x10
		::RPG::GameCore::MainMissionType MissionType; // 0x18
		::RPG::Client::TextID MissionName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUNLOCKMISSIONDATA__CTOR_OFFSET))(this);
		}
	};
}
