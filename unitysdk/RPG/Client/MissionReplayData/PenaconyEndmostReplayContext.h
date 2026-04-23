#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChronicleContext; }
namespace RPG::Client::MissionReplayData { class IMissionReplayData; }

#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_AUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA8E98C0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xA8E9600)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETCHAPTERID_OFFSET UNITYSDK_OFFSET(0xA8E9720)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8E97A0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETRECORDPAGEID_OFFSET UNITYSDK_OFFSET(0xA8E9B80)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GET_CURINDEX_OFFSET UNITYSDK_OFFSET(0xA8E9C90)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GET_REPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA8E9CB0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SETPENACONYENDMOSTCHRONICLECONTEXT_OFFSET UNITYSDK_OFFSET(0xA8E9B30)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SETREPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA8E9870)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SET_CURINDEX_OFFSET UNITYSDK_OFFSET(0xA8E9CA0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SET_REPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA8E9CC0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA8E9710)

namespace RPG::Client::MissionReplayData
{
	inline static constexpr unsigned int PenaconyEndmostReplayContext_TypeDefinitionIndex = 68919;

	class PenaconyEndmostReplayContext : public ::System::Object
	{
	public:
		::RPG::Client::PenaconyEndmostChronicleContext* _EndmostChronicleContext; // 0x10
		::RPG::Client::MissionReplayData::IMissionReplayData* _ReplayData_k__BackingField; // 0x18
		::System::Boolean _IsFromMissionChronicle; // 0x20
		::System::Int32 _CurIndex_k__BackingField; // 0x24
		::System::UInt32 _PathID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MissionReplayData::PenaconyEndmostReplayContext* Create()
		{
			return ((::RPG::Client::MissionReplayData::PenaconyEndmostReplayContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_CREATE_OFFSET))();
		}

		::System::UInt32 GetChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETCHAPTERID_OFFSET))(this);
		}

		::System::UInt32 GetMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETMISSIONID_OFFSET))(this);
		}

		::System::Void SetReplayData(::RPG::Client::MissionReplayData::IMissionReplayData* replayData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SETREPLAYDATA_OFFSET))(this, replayData);
		}

		::System::Void AutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_AUTOSHOW_OFFSET))(this);
		}

		::System::Void SetPenaconyEndmostChronicleContext(::RPG::Client::PenaconyEndmostChronicleContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SETPENACONYENDMOSTCHRONICLECONTEXT_OFFSET))(this, context);
		}

		::System::UInt32 GetRecordPageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GETRECORDPAGEID_OFFSET))(this);
		}

		::System::Int32 get_CurIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GET_CURINDEX_OFFSET))(this);
		}

		::System::Void set_CurIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SET_CURINDEX_OFFSET))(this, value);
		}

		::RPG::Client::MissionReplayData::IMissionReplayData* get_ReplayData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_GET_REPLAYDATA_OFFSET))(this);
		}

		::System::Void set_ReplayData(::RPG::Client::MissionReplayData::IMissionReplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYCONTEXT_SET_REPLAYDATA_OFFSET))(this, value);
		}
	};
}
