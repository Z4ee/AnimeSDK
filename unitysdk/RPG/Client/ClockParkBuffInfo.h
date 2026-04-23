#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_13;
namespace RPG::Client { class ClockParkBuffItem; }
namespace RPG::Client { class ClockParkBuffJointResult; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA096C80)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_GETJOINTBUFFITEMRESULT_OFFSET UNITYSDK_OFFSET(0xA0965B0)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_GET_BUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xA096D40)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_GET_EFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xA096D80)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_GET_ONCARDACTIONBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xA096D60)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_HASBUFFDISPLAY_OFFSET UNITYSDK_OFFSET(0xA096B00)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_SET_BUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xA096D50)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_SET_EFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xA096D90)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_SET_ONCARDACTIONBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xA096D70)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_SYNCONCARDBUFF_OFFSET UNITYSDK_OFFSET(0xA094A00)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA095EF0)
#define RPG_CLIENT_CLOCKPARKBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA096DA0)
#define RPG_CLIENT_CLOCKPARKBUFFINFO__MERGEBUFFEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xA096360)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkBuffInfo_TypeDefinitionIndex = 56695;

	class ClockParkBuffInfo : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkEffectResult* _EffectResult_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* _BuffItemList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* _OnCardActionBuffItemList_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_13* buffInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_SYNC_OFFSET))(this, buffInfo);
		}

		::System::Void SyncOnCardBuff(::System::Collections::Generic::List_1<::System::UInt32>* buffIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_SYNCONCARDBUFF_OFFSET))(this, buffIDList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffJointResult*>* GetJointBuffItemResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffJointResult*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_GETJOINTBUFFITEMRESULT_OFFSET))(this);
		}

		::System::Boolean HasBuffDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_HASBUFFDISPLAY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _MergeBuffEffectResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO__MERGEBUFFEFFECTRESULT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* get_BuffItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_GET_BUFFITEMLIST_OFFSET))(this);
		}

		::System::Void set_BuffItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_SET_BUFFITEMLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* get_OnCardActionBuffItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_GET_ONCARDACTIONBUFFITEMLIST_OFFSET))(this);
		}

		::System::Void set_OnCardActionBuffItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_SET_ONCARDACTIONBUFFITEMLIST_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkEffectResult* get_EffectResult()
		{
			return ((::RPG::Client::ClockParkEffectResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_GET_EFFECTRESULT_OFFSET))(this);
		}

		::System::Void set_EffectResult(::RPG::Client::ClockParkEffectResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_SET_EFFECTRESULT_OFFSET))(this, value);
		}
	};
}
