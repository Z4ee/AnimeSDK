#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WalkStyleFlag.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_WALKSTYLETRANINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17415B10)

namespace RPG::Client
{
	inline static constexpr unsigned int WalkStyleTranInfo_TypeDefinitionIndex = 65778;

	class WalkStyleTranInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::WalkStyleFlag WalkStyle; // 0x10
		::System::Boolean ExitToDefault; // 0x14
		::System::Single ExitToDefaultDuration; // 0x18
		::System::Boolean EnterFromDefault; // 0x1C
		::System::Single EnterFromDefaultDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WALKSTYLETRANINFO__CTOR_OFFSET))(this);
		}
	};
}
