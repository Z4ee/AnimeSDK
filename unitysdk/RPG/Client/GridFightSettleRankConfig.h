#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightSettleRankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightSettleRankRow; }

#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xA5872B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0xA587310)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_LEFTINTERVAL_OFFSET UNITYSDK_OFFSET(0xA5872D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_RIGHTINTERVAL_OFFSET UNITYSDK_OFFSET(0xA5872F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_SETTLERANKTYPE_OFFSET UNITYSDK_OFFSET(0xA587330)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0xA5872C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANKNAME_OFFSET UNITYSDK_OFFSET(0xA587320)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_LEFTINTERVAL_OFFSET UNITYSDK_OFFSET(0xA5872E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_RIGHTINTERVAL_OFFSET UNITYSDK_OFFSET(0xA587300)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_SETTLERANKTYPE_OFFSET UNITYSDK_OFFSET(0xA587340)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA587280)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRankConfig_TypeDefinitionIndex = 60032;

	class GridFightSettleRankConfig : public ::System::Object
	{
	public:
		::RPG::Client::TextID _RankName_k__BackingField; // 0x10
		::System::UInt32 _Rank_RightInterval_k__BackingField; // 0x20
		::System::UInt32 _Rank_LeftInterval_k__BackingField; // 0x24
		::RPG::GameCore::GridFightSettleRankType _SettleRankType_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::GameCore::GridFightSettleRankRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSettleRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank_LeftInterval()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_LEFTINTERVAL_OFFSET))(this);
		}

		::System::Void set_Rank_LeftInterval(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_LEFTINTERVAL_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank_RightInterval()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_RIGHTINTERVAL_OFFSET))(this);
		}

		::System::Void set_Rank_RightInterval(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_RIGHTINTERVAL_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANKNAME_OFFSET))(this);
		}

		::System::Void set_RankName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANKNAME_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightSettleRankType get_SettleRankType()
		{
			return ((::RPG::GameCore::GridFightSettleRankType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_SETTLERANKTYPE_OFFSET))(this);
		}

		::System::Void set_SettleRankType(::RPG::GameCore::GridFightSettleRankType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSettleRankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_SETTLERANKTYPE_OFFSET))(this, value);
		}
	};
}
