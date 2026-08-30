#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightSettleRankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightSettleRankRow; }

#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C5A6240)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0x1C5A62A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_LEFTINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C5A6260)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_RIGHTINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C5A6280)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_SETTLERANKTYPE_OFFSET UNITYSDK_OFFSET(0x1C5A62C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C5A6250)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANKNAME_OFFSET UNITYSDK_OFFSET(0x1C5A62B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_LEFTINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C5A6270)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_RIGHTINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C5A6290)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_SETTLERANKTYPE_OFFSET UNITYSDK_OFFSET(0x1C5A62D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A6200)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRankConfig_TypeDefinitionIndex = 65267;

	class GridFightSettleRankConfig : public ::System::Object
	{
	public:
		::System::UInt32 _Rank_LeftInterval_k__BackingField; // 0x10
		::RPG::GameCore::GridFightSettleRankType _SettleRankType_k__BackingField; // 0x14
		::RPG::Client::TextID _RankName_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::UInt32 _Rank_RightInterval_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::GameCore::GridFightSettleRankRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSettleRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank_LeftInterval()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_LEFTINTERVAL_OFFSET))(this);
		}

		::System::Void set_Rank_LeftInterval(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_LEFTINTERVAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank_RightInterval()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_RIGHTINTERVAL_OFFSET))(this);
		}

		::System::Void set_Rank_RightInterval(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_RIGHTINTERVAL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANKNAME_OFFSET))(this);
		}

		::System::Void set_RankName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANKNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightSettleRankType get_SettleRankType()
		{
			return ((::RPG::GameCore::GridFightSettleRankType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_SETTLERANKTYPE_OFFSET))(this);
		}

		::System::Void set_SettleRankType(::RPG::GameCore::GridFightSettleRankType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSettleRankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_SETTLERANKTYPE_OFFSET))(this, a1);
		}
	};
}
