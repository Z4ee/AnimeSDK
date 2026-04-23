#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB0C6F90)
#define RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xB0C6FB0)
#define RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB0C6FA0)
#define RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xB0C6FC0)
#define RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C6F80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameDivisionSettleResult_TypeDefinitionIndex = 62534;

	class RogueTournGameDivisionSettleResult : public ::System::Object
	{
	public:
		::System::UInt32 _Progress_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_SET_PROGRESS_OFFSET))(this, value);
		}
	};
}
