#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_15;
namespace RPG::Client { class ClockParkBuffItem; }
namespace RPG::Client { class ClockParkBuffJointResult; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6D5220)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_GETJOINTBUFFITEMRESULT_OFFSET UNITYSDK_OFFSET(0xB6D4CF0)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_GET_BUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xB6D5310)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_GET_EFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xB6D5350)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_GET_ONCARDACTIONBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xB6D5330)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_HASBUFFDISPLAY_OFFSET UNITYSDK_OFFSET(0xB6D50D0)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_SET_BUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xB6D5320)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_SET_EFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xB6D5360)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_SET_ONCARDACTIONBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xB6D5340)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_SYNCONCARDBUFF_OFFSET UNITYSDK_OFFSET(0xB6D3380)
#define RPG_CLIENT_CLOCKPARKBUFFINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB6D45F0)
#define RPG_CLIENT_CLOCKPARKBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D5370)
#define RPG_CLIENT_CLOCKPARKBUFFINFO__MERGEBUFFEFFECTRESULT_OFFSET UNITYSDK_OFFSET(0xB6D4AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkBuffInfo_TypeDefinitionIndex = 57479;

	class ClockParkBuffInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* _OnCardActionBuffItemList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* _BuffItemList_k__BackingField; // 0x18
		::RPG::Client::ClockParkEffectResult* _EffectResult_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_15* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncOnCardBuff(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_SYNCONCARDBUFF_OFFSET))(this, a1);
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

		::System::Void set_BuffItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_SET_BUFFITEMLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* get_OnCardActionBuffItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_GET_ONCARDACTIONBUFFITEMLIST_OFFSET))(this);
		}

		::System::Void set_OnCardActionBuffItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_SET_ONCARDACTIONBUFFITEMLIST_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkEffectResult* get_EffectResult()
		{
			return ((::RPG::Client::ClockParkEffectResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_GET_EFFECTRESULT_OFFSET))(this);
		}

		::System::Void set_EffectResult(::RPG::Client::ClockParkEffectResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFINFO_SET_EFFECTRESULT_OFFSET))(this, a1);
		}
	};
}
