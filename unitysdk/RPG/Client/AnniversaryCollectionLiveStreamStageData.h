#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LiveStreamStageState.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D2B3E0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_GET_PREVSTAGEBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D2B3C0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_GET_REVIEWTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D2B400)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_GET_STAGESTATE_OFFSET UNITYSDK_OFFSET(0x9D2B2A0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D2B3F0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_SET_PREVSTAGEBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D2B3D0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_SET_REVIEWTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9D2B410)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_UPDATETIMEINFO_OFFSET UNITYSDK_OFFSET(0x9D2B240)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA__CALCULATECURSTATE_OFFSET UNITYSDK_OFFSET(0x9D2B2B0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2B230)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionLiveStreamStageData_TypeDefinitionIndex = 57574;

	class AnniversaryCollectionLiveStreamStageData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _FinalStageIndex = 0x4; // 0x0
		::System::Boolean _TimeInfoUpdated; // 0x10
		::System::UInt32 _ReviewTimeStamp_k__BackingField; // 0x14
		::System::UInt32 _StageIndex; // 0x18
		::System::UInt32 _PrevStageBeginTimeStamp_k__BackingField; // 0x1C
		::System::UInt32 _BeginTimeStamp_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 stageIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA__CTOR_OFFSET))(this, stageIndex);
		}

		::System::Void UpdateTimeInfo(::System::UInt32 beginTimeStamp, ::System::UInt32 reviewTimeStamp, ::System::UInt32 prevStageBeginTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_UPDATETIMEINFO_OFFSET))(this, beginTimeStamp, reviewTimeStamp, prevStageBeginTimeStamp);
		}

		::RPG::Client::LiveStreamStageState get_StageState()
		{
			return ((::RPG::Client::LiveStreamStageState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_GET_STAGESTATE_OFFSET))(this);
		}

		::System::UInt32 get_PrevStageBeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_GET_PREVSTAGEBEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_PrevStageBeginTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_SET_PREVSTAGEBEGINTIMESTAMP_OFFSET))(this, value);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_SET_BEGINTIMESTAMP_OFFSET))(this, value);
		}

		::System::UInt32 get_ReviewTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_GET_REVIEWTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_ReviewTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA_SET_REVIEWTIMESTAMP_OFFSET))(this, value);
		}

		::RPG::Client::LiveStreamStageState _CalculateCurState()
		{
			return ((::RPG::Client::LiveStreamStageState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONLIVESTREAMSTAGEDATA__CALCULATECURSTATE_OFFSET))(this);
		}
	};
}
