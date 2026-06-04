#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE4D150)
#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE4D100)
#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_INIT_OFFSET UNITYSDK_OFFSET(0xCE4D0B0)
#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4D1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSelectBuffConfirm_TypeDefinitionIndex = 53063;

	class LevelSelectBuffConfirm : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 MazeBuffID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTBUFFCONFIRM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectBuffConfirm* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelSelectBuffConfirm*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
