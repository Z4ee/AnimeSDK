#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_98;
namespace RPG::Client::TrainParty { class TrainPartyRecordGroup; }
namespace RPG::Client::TrainParty { class TrainPartyRecordInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_BEGINRECORDGROUP_OFFSET UNITYSDK_OFFSET(0xA5FCB00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA5F7D20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5F9310)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_ENDRECORDGROUP_OFFSET UNITYSDK_OFFSET(0xA5FCBE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA5F8F30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xA5FB320)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_RECORDDATABYLOGINFO_OFFSET UNITYSDK_OFFSET(0xA5FCD00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CREATERECORDGROUP_OFFSET UNITYSDK_OFFSET(0xA5FCB50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CREATERECORDINFO_OFFSET UNITYSDK_OFFSET(0xA5FD710)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F8F20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETCARDNAME_OFFSET UNITYSDK_OFFSET(0xA5FD950)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETGRIDTYPENAME_OFFSET UNITYSDK_OFFSET(0xA5FD890)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETPASSENGERNAME_OFFSET UNITYSDK_OFFSET(0xA5FD7A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__PUSHRECORD_OFFSET UNITYSDK_OFFSET(0xA5FDA10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__RECYCLEALLRECORDINFOFROMGROUP_OFFSET UNITYSDK_OFFSET(0xA5FDA70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__RECYCLERECORDINFO_OFFSET UNITYSDK_OFFSET(0xA5FDC70)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyGameRecordManager_TypeDefinitionIndex = 61138;

	class TrainPartyGameRecordManager : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyRecordGroup* _CurRecordGroup; // 0x10
		::System::Collections::Generic::Queue_1<::RPG::Client::TrainParty::TrainPartyRecordInfo*>* _ReuseRecordInfoQueue; // 0x18
		::System::Int32 _PamStaminaLowDesRatio; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_ONEXITGAME_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyRecordGroup* BeginRecordGroup()
		{
			return ((::RPG::Client::TrainParty::TrainPartyRecordGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_BEGINRECORDGROUP_OFFSET))(this);
		}

		::System::Void EndRecordGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_ENDRECORDGROUP_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void RecordDataByLogInfo(::Class_1_735612C94F558EAE_98* logInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_RECORDDATABYLOGINFO_OFFSET))(this, logInfo);
		}

		::System::Void _RecycleAllRecordInfoFromGroup(::RPG::Client::TrainParty::TrainPartyRecordGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__RECYCLEALLRECORDINFOFROMGROUP_OFFSET))(this, group);
		}

		::System::Void _RecycleRecordInfo(::RPG::Client::TrainParty::TrainPartyRecordInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__RECYCLERECORDINFO_OFFSET))(this, info);
		}

		::RPG::Client::TrainParty::TrainPartyRecordGroup* _CreateRecordGroup()
		{
			return ((::RPG::Client::TrainParty::TrainPartyRecordGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CREATERECORDGROUP_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyRecordInfo* _CreateRecordInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyRecordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CREATERECORDINFO_OFFSET))(this);
		}

		::System::Void _PushRecord(::RPG::Client::TrainParty::TrainPartyRecordInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__PUSHRECORD_OFFSET))(this, info);
		}

		::System::String* _GetPassengerName(::System::UInt32 passengerID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETPASSENGERNAME_OFFSET))(this, passengerID);
		}

		::System::String* _GetGridTypeName(::System::UInt32 gridType)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETGRIDTYPENAME_OFFSET))(this, gridType);
		}

		::System::String* _GetCardName(::System::UInt32 cardID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETCARDNAME_OFFSET))(this, cardID);
		}
	};
}
