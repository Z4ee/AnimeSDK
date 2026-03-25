#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x97EE4B0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONABBR_OFFSET UNITYSDK_OFFSET(0x97EFFE0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONICON_OFFSET UNITYSDK_OFFSET(0x97EFF60)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x97EFF20)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAMEWITHNUM_OFFSET UNITYSDK_OFFSET(0x97EFFC0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAME_OFFSET UNITYSDK_OFFSET(0x97EFFA0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x97EFF40)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONSHOWPIC_OFFSET UNITYSDK_OFFSET(0x97EFF80)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_ISNEWBIEDIVISION_OFFSET UNITYSDK_OFFSET(0x97EEBE0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONABBR_OFFSET UNITYSDK_OFFSET(0x97EFFF0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONICON_OFFSET UNITYSDK_OFFSET(0x97EFF70)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x97EFF30)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAMEWITHNUM_OFFSET UNITYSDK_OFFSET(0x97EFFD0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAME_OFFSET UNITYSDK_OFFSET(0x97EFFB0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x97EFF50)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONSHOWPIC_OFFSET UNITYSDK_OFFSET(0x97EFF90)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x97EFE50)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x97EFE40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionLevelConfig_TypeDefinitionIndex = 52431;

	class GridFightDivisionLevelConfig : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightDivisionLevelConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightDivisionLevelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightDivisionLevelConfig_TypeDefinitionIndex)->GetStaticField(0x13960);
		}
		::System::String* _DivisionShowPic_k__BackingField; // 0x10
		::System::String* _DivisionIcon_k__BackingField; // 0x18
		::RPG::Client::TextID _DivisionAbbr_k__BackingField; // 0x20
		::RPG::Client::TextID _DivisionName_k__BackingField; // 0x30
		::RPG::Client::TextID _DivisionNameWithNum_k__BackingField; // 0x40
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x50
		::System::UInt32 _DivisionRewardQuest_k__BackingField; // 0x54

		::System::Void _ctor(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> tuple)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG__CTOR_OFFSET))(this, tuple);
		}

		::System::Void _ctor_1(::System::UInt32 level, ::System::UInt32 seasonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG__CTOR_1_OFFSET))(this, level, seasonID);
		}

		static ::RPG::Client::GridFightDivisionLevelConfig* GetConfig(::System::UInt32 level, ::System::UInt32 seasonID)
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GETCONFIG_OFFSET))(level, seasonID);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionRewardQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONREWARDQUEST_OFFSET))(this);
		}

		::System::Void set_DivisionRewardQuest(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONREWARDQUEST_OFFSET))(this, value);
		}

		::System::String* get_DivisionIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONICON_OFFSET))(this);
		}

		::System::Void set_DivisionIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONICON_OFFSET))(this, value);
		}

		::System::String* get_DivisionShowPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONSHOWPIC_OFFSET))(this);
		}

		::System::Void set_DivisionShowPic(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONSHOWPIC_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_DivisionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAME_OFFSET))(this);
		}

		::System::Void set_DivisionName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_DivisionNameWithNum()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAMEWITHNUM_OFFSET))(this);
		}

		::System::Void set_DivisionNameWithNum(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAMEWITHNUM_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_DivisionAbbr()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONABBR_OFFSET))(this);
		}

		::System::Void set_DivisionAbbr(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONABBR_OFFSET))(this, value);
		}

		::System::Boolean get_IsNewBieDivision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_ISNEWBIEDIVISION_OFFSET))(this);
		}
	};
}
