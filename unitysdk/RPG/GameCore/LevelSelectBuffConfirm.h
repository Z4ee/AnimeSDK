#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DF060)
#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DF010)
#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_INIT_OFFSET UNITYSDK_OFFSET(0xB6DEFC0)
#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DF0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSelectBuffConfirm_TypeDefinitionIndex = 52366;

	class LevelSelectBuffConfirm : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 MazeBuffID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTBUFFCONFIRM__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectBuffConfirm* Init(::System::UInt32 mazebuffId)
		{
			return ((::RPG::GameCore::LevelSelectBuffConfirm*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_INIT_OFFSET))(this, mazebuffId);
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
