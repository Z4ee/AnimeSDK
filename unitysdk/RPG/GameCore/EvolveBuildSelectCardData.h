#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_40;
class Class_1_CF82246F32402DDA;
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildGearsDetail; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace RPG::GameCore { class EvolveBuildSelectCard; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATECARDS_OFFSET UNITYSDK_OFFSET(0xB685540)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0xB685860)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATESELECTCARDS_1_OFFSET UNITYSDK_OFFSET(0xB685B00)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATESELECTCARDS_OFFSET UNITYSDK_OFFSET(0xB6856A0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB67F880)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_CURRENTCARDS_OFFSET UNITYSDK_OFFSET(0xB686020)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_ENABLEREROLL_OFFSET UNITYSDK_OFFSET(0xB686230)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_GEARSDETAIL_OFFSET UNITYSDK_OFFSET(0xB686210)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_NOTEMPTYCURRENTCARDS_OFFSET UNITYSDK_OFFSET(0xB686040)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_SELECTCARDS_OFFSET UNITYSDK_OFFSET(0xB6861F0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_STAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0xB686310)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_TEAMLEVEL_OFFSET UNITYSDK_OFFSET(0xB686250)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_REFRESHCARDDATA_OFFSET UNITYSDK_OFFSET(0xB685C20)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SETPRESELECTCARDID_OFFSET UNITYSDK_OFFSET(0xB685DA0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_CURRENTCARDS_OFFSET UNITYSDK_OFFSET(0xB686030)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_ENABLEREROLL_OFFSET UNITYSDK_OFFSET(0xB686240)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_GEARSDETAIL_OFFSET UNITYSDK_OFFSET(0xB686220)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_SELECTCARDS_OFFSET UNITYSDK_OFFSET(0xB686200)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB685530)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA__SETPRESELECTCARDID_B__6_0_OFFSET UNITYSDK_OFFSET(0xB686330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildSelectCardData_TypeDefinitionIndex = 49356;

	class EvolveBuildSelectCardData : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearManager* _Manager; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>* _SelectCards_k__BackingField; // 0x18
		::RPG::Client::EvolveBuildGearsDetail* _GearsDetail_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* _NotEmptyCurrentCards; // 0x28
		::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_40*>* _SelectInfos; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* _CurrentCards_k__BackingField; // 0x38
		::System::Boolean _EnableReRoll_k__BackingField; // 0x40
		::System::UInt32 _PreSelectCardID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::EvolveBuildSelectCardData* Create(::Il2CppArray<::System::UInt32>* currentCardIDs, ::Class_1_CF82246F32402DDA* initParams, ::RPG::GameCore::EvolveBuildGearManager* manager)
		{
			return ((::RPG::GameCore::EvolveBuildSelectCardData*(*)(::Il2CppArray<::System::UInt32>*, ::Class_1_CF82246F32402DDA*, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATE_OFFSET))(currentCardIDs, initParams, manager);
		}

		static ::RPG::GameCore::EvolveBuildSelectCardData* CreateFake()
		{
			return ((::RPG::GameCore::EvolveBuildSelectCardData*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATEFAKE_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* CreateCards(::Il2CppArray<::System::UInt32>* ids)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATECARDS_OFFSET))(ids);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>* CreateSelectCards(::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_40*>* selectInfos)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>*(*)(::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_40*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATESELECTCARDS_OFFSET))(selectInfos);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>* CreateSelectCards_1(::Il2CppArray<::System::UInt32>* ids)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATESELECTCARDS_1_OFFSET))(ids);
		}

		::RPG::GameCore::EvolveBuildSelectCard* RefreshCardData(::System::Int32 index)
		{
			return ((::RPG::GameCore::EvolveBuildSelectCard*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_REFRESHCARDDATA_OFFSET))(this, index);
		}

		::System::Void SetPreSelectCardID(::System::UInt32 cardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SETPRESELECTCARDID_OFFSET))(this, cardID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_CurrentCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_CURRENTCARDS_OFFSET))(this);
		}

		::System::Void set_CurrentCards(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_CURRENTCARDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_NotEmptyCurrentCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_NOTEMPTYCURRENTCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>* get_SelectCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_SELECTCARDS_OFFSET))(this);
		}

		::System::Void set_SelectCards(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_SELECTCARDS_OFFSET))(this, value);
		}

		::RPG::Client::EvolveBuildGearsDetail* get_GearsDetail()
		{
			return ((::RPG::Client::EvolveBuildGearsDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_GEARSDETAIL_OFFSET))(this);
		}

		::System::Void set_GearsDetail(::RPG::Client::EvolveBuildGearsDetail* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearsDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_GEARSDETAIL_OFFSET))(this, value);
		}

		::System::Boolean get_EnableReRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_ENABLEREROLL_OFFSET))(this);
		}

		::System::Void set_EnableReRoll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_ENABLEREROLL_OFFSET))(this, value);
		}

		::System::Int32 get_TeamLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_TEAMLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_StageMergedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_STAGEMERGEDID_OFFSET))(this);
		}

		::System::Boolean _SetPreSelectCardID_b__6_0(::RPG::Client::EvolveBuildCard* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA__SETPRESELECTCARDID_B__6_0_OFFSET))(this, a);
		}
	};
}
