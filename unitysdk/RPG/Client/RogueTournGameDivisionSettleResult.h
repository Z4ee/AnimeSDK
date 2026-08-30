#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AF18560)
#define RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1AF18580)
#define RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1AF18570)
#define RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1AF18590)
#define RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF18550)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameDivisionSettleResult_TypeDefinitionIndex = 67841;

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

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDIVISIONSETTLERESULT_SET_PROGRESS_OFFSET))(this, a1);
		}
	};
}
