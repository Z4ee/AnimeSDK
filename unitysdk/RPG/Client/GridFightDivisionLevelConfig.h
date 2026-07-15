#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1A633040)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONABBR_OFFSET UNITYSDK_OFFSET(0x1A6350B0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONEXTRAQUEST_OFFSET UNITYSDK_OFFSET(0x1A635010)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONICON_OFFSET UNITYSDK_OFFSET(0x1A635030)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1A634FD0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAMEWITHNUM_OFFSET UNITYSDK_OFFSET(0x1A635090)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAME_OFFSET UNITYSDK_OFFSET(0x1A635070)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x1A634FF0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONSHOWPIC_OFFSET UNITYSDK_OFFSET(0x1A635050)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_ISNEWBIEDIVISION_OFFSET UNITYSDK_OFFSET(0x1A633850)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONABBR_OFFSET UNITYSDK_OFFSET(0x1A6350C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONEXTRAQUEST_OFFSET UNITYSDK_OFFSET(0x1A635020)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONICON_OFFSET UNITYSDK_OFFSET(0x1A635040)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1A634FE0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAMEWITHNUM_OFFSET UNITYSDK_OFFSET(0x1A6350A0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAME_OFFSET UNITYSDK_OFFSET(0x1A635080)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x1A635000)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONSHOWPIC_OFFSET UNITYSDK_OFFSET(0x1A635060)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A634F00)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A634EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionLevelConfig_TypeDefinitionIndex = 61614;

	class GridFightDivisionLevelConfig : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightDivisionLevelConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightDivisionLevelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightDivisionLevelConfig_TypeDefinitionIndex)->GetStaticField(0x22400);
		}
		::System::String* _DivisionShowPic_k__BackingField; // 0x10
		::System::String* _DivisionIcon_k__BackingField; // 0x18
		::RPG::Client::TextID _DivisionAbbr_k__BackingField; // 0x20
		::System::UInt32 _DivisionRewardQuest_k__BackingField; // 0x30
		::System::UInt32 _DivisionExtraQuest_k__BackingField; // 0x34
		::RPG::Client::TextID _DivisionName_k__BackingField; // 0x38
		::RPG::Client::TextID _DivisionNameWithNum_k__BackingField; // 0x48
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x58

		::System::Void _ctor(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightDivisionLevelConfig* GetConfig(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GETCONFIG_OFFSET))(a1, a2);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionRewardQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONREWARDQUEST_OFFSET))(this);
		}

		::System::Void set_DivisionRewardQuest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONREWARDQUEST_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionExtraQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONEXTRAQUEST_OFFSET))(this);
		}

		::System::Void set_DivisionExtraQuest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONEXTRAQUEST_OFFSET))(this, a1);
		}

		::System::String* get_DivisionIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONICON_OFFSET))(this);
		}

		::System::Void set_DivisionIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONICON_OFFSET))(this, a1);
		}

		::System::String* get_DivisionShowPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONSHOWPIC_OFFSET))(this);
		}

		::System::Void set_DivisionShowPic(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONSHOWPIC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DivisionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAME_OFFSET))(this);
		}

		::System::Void set_DivisionName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DivisionNameWithNum()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONNAMEWITHNUM_OFFSET))(this);
		}

		::System::Void set_DivisionNameWithNum(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONNAMEWITHNUM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DivisionAbbr()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_DIVISIONABBR_OFFSET))(this);
		}

		::System::Void set_DivisionAbbr(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_SET_DIVISIONABBR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNewBieDivision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLEVELCONFIG_GET_ISNEWBIEDIVISION_OFFSET))(this);
		}
	};
}
