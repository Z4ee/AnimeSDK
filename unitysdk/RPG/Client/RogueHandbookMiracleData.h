#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_75;
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::GameCore { class RogueHandBookMiracleRow; }

#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xA30A7D0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA30A520)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xA30A960)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA30A790)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA30A940)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_MIRACLEHANDBOOKID_OFFSET UNITYSDK_OFFSET(0xA30A7B0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_MIRACLETYPELIST_OFFSET UNITYSDK_OFFSET(0xA30A6F0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xA30A770)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA30A680)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SETREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA30A4E0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xA30A970)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA30A7A0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA30A950)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_MIRACLEHANDBOOKID_OFFSET UNITYSDK_OFFSET(0xA30A7C0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xA30A450)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA30A4B0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA30A3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookMiracleData_TypeDefinitionIndex = 54886;

	class RogueHandbookMiracleData : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracleLegacyDisplayRow* _DisplayRow; // 0x10
		::RPG::GameCore::RogueHandBookMiracleRow* _Row; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x20
		::System::Boolean _IsInSchedule_k__BackingField; // 0x21
		::System::Boolean _HasTakenReward_k__BackingField; // 0x22
		::System::UInt32 _MiracleHandbookID_k__BackingField; // 0x24

		::System::Void _ctor(::Class_1_4CF8088A158DCE25_75* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_75*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA__CTOR_OFFSET))(this, data);
		}

		::System::Void _ctor_1(::RPG::GameCore::RogueHandBookMiracleRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueHandBookMiracleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA__CTOR_1_OFFSET))(this, row);
		}

		::System::Void UpdateByServer(::Class_1_4CF8088A158DCE25_75* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_75*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_UPDATEBYSERVER_OFFSET))(this, data);
		}

		::System::Void SetRewardTaken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SETREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean get_HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_HASREWARDCANTAKE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MiracleTypeList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_MIRACLETYPELIST_OFFSET))(this);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Void set_IsInSchedule(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_ISINSCHEDULE_OFFSET))(this, value);
		}

		::System::UInt32 get_MiracleHandbookID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_MIRACLEHANDBOOKID_OFFSET))(this);
		}

		::System::Void set_MiracleHandbookID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_MIRACLEHANDBOOKID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueHandBookMiracleRow* get_Row()
		{
			return ((::RPG::GameCore::RogueHandBookMiracleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleLegacyDisplayRow* get_DisplayRow()
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_DISPLAYROW_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_HasTakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_HASTAKENREWARD_OFFSET))(this);
		}

		::System::Void set_HasTakenReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_HASTAKENREWARD_OFFSET))(this, value);
		}
	};
}
