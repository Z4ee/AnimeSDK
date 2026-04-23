#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_83;
namespace RPG::GameCore { class RogueHandBookEventRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_EVENTTYPELIST_OFFSET UNITYSDK_OFFSET(0xB040EA0)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_HANDBOOKEVENTID_OFFSET UNITYSDK_OFFSET(0xB040E80)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_HASUNTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xB047910)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_IMAGEID_OFFSET UNITYSDK_OFFSET(0xB0477D0)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB047850)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB047950)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB047930)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xB047760)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB0478F0)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xB0477A0)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB047820)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_UNLOCKHINTDESC_OFFSET UNITYSDK_OFFSET(0xB047970)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_SET_HASUNTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xB047920)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_SET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB047960)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB047940)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xB046A30)
#define RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB046DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookRandomEventData_TypeDefinitionIndex = 62075;

	class RogueHandbookRandomEventData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueHandBookEventRow* _Row; // 0x10
		::System::Boolean _IsUnlocked_k__BackingField; // 0x18
		::System::Boolean _IsInSchedule_k__BackingField; // 0x19
		::System::Boolean _HasUntakenReward_k__BackingField; // 0x1A
		::System::UInt32 SortingOrder; // 0x1C

		::System::Void _ctor(::RPG::GameCore::RogueHandBookEventRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueHandBookEventRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA__CTOR_OFFSET))(this, row);
		}

		::System::Void UpdateByServer(::Class_1_21C7581DFE99F091_83* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_UPDATEBYSERVER_OFFSET))(this, proto);
		}

		::System::UInt32 get_HandbookEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_HANDBOOKEVENTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_TITLE_OFFSET))(this);
		}

		::System::UInt32 get_ImageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_IMAGEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Type()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Boolean get_HasUntakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_HASUNTAKENREWARD_OFFSET))(this);
		}

		::System::Void set_HasUntakenReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_SET_HASUNTAKENREWARD_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Void set_IsInSchedule(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_SET_ISINSCHEDULE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_EventTypeList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_EVENTTYPELIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockHintDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKRANDOMEVENTDATA_GET_UNLOCKHINTDESC_OFFSET))(this);
		}
	};
}
