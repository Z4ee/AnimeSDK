#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightDivisionLevelConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97EED20)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x97EE340)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONABBR_OFFSET UNITYSDK_OFFSET(0x97EEAB0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONICON_OFFSET UNITYSDK_OFFSET(0x97EE600)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x97EE5C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x97EE540)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONNAMEFORSTAGE_OFFSET UNITYSDK_OFFSET(0x97EE640)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONNAME_OFFSET UNITYSDK_OFFSET(0x97EEA60)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x97EE5E0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONSHOWPIC_OFFSET UNITYSDK_OFFSET(0x97EE620)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x97EE520)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ISNEWBIEDIVISION_OFFSET UNITYSDK_OFFSET(0x97EEB40)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x97EE580)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_PREVDIVISIONID_OFFSET UNITYSDK_OFFSET(0x97EEC40)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x97EE560)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x97EE5A0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_DIVISIONLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x97EE5D0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x97EE550)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x97EE530)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x97EE590)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x97EE570)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x97EE5B0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x97EE3A0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG__GETDIVISIONNAME_OFFSET UNITYSDK_OFFSET(0x97EE690)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionConfig_TypeDefinitionIndex = 52429;

	class GridFightDivisionConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightDivisionConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightDivisionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightDivisionConfig_TypeDefinitionIndex)->GetStaticField(0x138F0);
		}
		::RPG::Client::GridFightDivisionLevelConfig* _DivisionLevelConfig_k__BackingField; // 0x10
		::System::Boolean _IsPromotion_k__BackingField; // 0x18
		::System::UInt32 _SeasonID_k__BackingField; // 0x1C
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::UInt32 _Progress_k__BackingField; // 0x24
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x28
		::System::Nullable_1<::System::UInt32> _PrevDivisionID; // 0x2C

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::GridFightDivisionConfig* GetConfig(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightDivisionConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GETCONFIG_OFFSET))(id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_DIVISIONLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_PROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::Void set_IsPromotion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_ISPROMOTION_OFFSET))(this, value);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_SEASONID_OFFSET))(this);
		}

		::System::Void set_SeasonID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_SEASONID_OFFSET))(this, value);
		}

		::RPG::Client::GridFightDivisionLevelConfig* get_DivisionLevelConfig()
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONLEVELCONFIG_OFFSET))(this);
		}

		::System::Void set_DivisionLevelConfig(::RPG::Client::GridFightDivisionLevelConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_SET_DIVISIONLEVELCONFIG_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionRewardQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONREWARDQUEST_OFFSET))(this);
		}

		::System::String* get_DivisionIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONICON_OFFSET))(this);
		}

		::System::String* get_DivisionShowPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONSHOWPIC_OFFSET))(this);
		}

		::System::String* get_DivisionNameForStage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONNAMEFORSTAGE_OFFSET))(this);
		}

		::System::String* get_DivisionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONNAME_OFFSET))(this);
		}

		::System::String* get_DivisionAbbr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_DIVISIONABBR_OFFSET))(this);
		}

		::System::Boolean get_IsNewBieDivision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_ISNEWBIEDIVISION_OFFSET))(this);
		}

		::System::UInt32 get_PrevDivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_GET_PREVDIVISIONID_OFFSET))(this);
		}

		::System::String* _GetDivisionName(::System::Boolean isForStage)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG__GETDIVISIONNAME_OFFSET))(this, isForStage);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightDivisionConfig* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDivisionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONCONFIG_COMPARETO_OFFSET))(this, other);
		}
	};
}
