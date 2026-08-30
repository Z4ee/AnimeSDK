#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2A1A0)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD2A150)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_INIT_OFFSET UNITYSDK_OFFSET(0x1DD2A110)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2A1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPlayerCreateFnishAdv_TypeDefinitionIndex = 57026;

	class LevelPlayerCreateFnishAdv : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelPlayerCreateFnishAdv* Init()
		{
			return ((::RPG::GameCore::LevelPlayerCreateFnishAdv*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
