#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELPLAYERCREATEFNISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2A0B0)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD2A060)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISH_INIT_OFFSET UNITYSDK_OFFSET(0x1DD2A020)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2A100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPlayerCreateFnish_TypeDefinitionIndex = 57027;

	class LevelPlayerCreateFnish : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISH__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelPlayerCreateFnish* Init()
		{
			return ((::RPG::GameCore::LevelPlayerCreateFnish*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISH_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISH_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
