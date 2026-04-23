#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_DCE302F7FD05DE84_2;
namespace RPG::Client { class ClockParkChapterInfo; }
namespace RPG::Client { class ClockParkInstance; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class ClockParkChapterConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEENDING_OFFSET UNITYSDK_OFFSET(0xA09E180)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEFAIL_OFFSET UNITYSDK_OFFSET(0xA09E080)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDINGNAME_OFFSET UNITYSDK_OFFSET(0xA09E7F0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0xA09E6C0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0xA09E820)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILED_OFFSET UNITYSDK_OFFSET(0xA09E620)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILINCHECK_OFFSET UNITYSDK_OFFSET(0xA09E660)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISMANUALQUIT_OFFSET UNITYSDK_OFFSET(0xA09E640)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWEND_OFFSET UNITYSDK_OFFSET(0xA09E730)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0xA09E680)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISTRUEENDING_OFFSET UNITYSDK_OFFSET(0xA09E790)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_LOGOPATH_OFFSET UNITYSDK_OFFSET(0xA09E8A0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ORIGINPROGRESS_OFFSET UNITYSDK_OFFSET(0xA09E6A0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_PROGRESSADDED_OFFSET UNITYSDK_OFFSET(0xA09E5D0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xA09E710)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0xA09E880)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_NEEDSHOWMISSIONHINT_OFFSET UNITYSDK_OFFSET(0xA09E360)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILED_OFFSET UNITYSDK_OFFSET(0xA09E630)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILINCHECK_OFFSET UNITYSDK_OFFSET(0xA09E670)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISMANUALQUIT_OFFSET UNITYSDK_OFFSET(0xA09E650)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISNEWHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0xA09E690)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_LOGOPATH_OFFSET UNITYSDK_OFFSET(0xA09E8B0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ORIGINPROGRESS_OFFSET UNITYSDK_OFFSET(0xA09E6B0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0xA09E720)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0xA09E890)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA09E260)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA09E020)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkGameResultInfo_TypeDefinitionIndex = 56708;

	class ClockParkGameResultInfo : public ::System::Object
	{
	public:
		::System::String* _LogoPath_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Rewards_k__BackingField; // 0x18
		::RPG::GameCore::ClockParkChapterConfigRow* _Row; // 0x20
		::Class_1_DCE302F7FD05DE84_2* _RowFinishInfo; // 0x28
		::System::Boolean _IsFailInCheck_k__BackingField; // 0x30
		::System::Boolean _IsNewHighestEndlessScore_k__BackingField; // 0x31
		::System::Boolean _IsManualQuit_k__BackingField; // 0x32
		::System::Boolean _IsFailed_k__BackingField; // 0x33
		::System::UInt32 _OriginProgress_k__BackingField; // 0x34
		::System::UInt32 _ScriptID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 originProgress, ::System::UInt32 scriptID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO__CTOR_OFFSET))(this, originProgress, scriptID);
		}

		static ::RPG::Client::ClockParkGameResultInfo* CreateFail(::System::UInt32 originProgress, ::System::UInt32 scriptID, ::RPG::Client::ClockParkInstance* instance)
		{
			return ((::RPG::Client::ClockParkGameResultInfo*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEFAIL_OFFSET))(originProgress, scriptID, instance);
		}

		static ::RPG::Client::ClockParkGameResultInfo* CreateEnding(::RPG::Client::ClockParkChapterInfo* chapterInfo, ::System::UInt32 originProgress, ::System::UInt32 scriptID)
		{
			return ((::RPG::Client::ClockParkGameResultInfo*(*)(::RPG::Client::ClockParkChapterInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEENDING_OFFSET))(chapterInfo, originProgress, scriptID);
		}

		::System::Void Sync(::Class_1_DCE302F7FD05DE84_2* finishInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SYNC_OFFSET))(this, finishInfo);
		}

		::System::Boolean NeedShowMissionHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_NEEDSHOWMISSIONHINT_OFFSET))(this);
		}

		::System::Boolean get_IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILED_OFFSET))(this);
		}

		::System::Void set_IsFailed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILED_OFFSET))(this, value);
		}

		::System::Boolean get_IsManualQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISMANUALQUIT_OFFSET))(this);
		}

		::System::Void set_IsManualQuit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISMANUALQUIT_OFFSET))(this, value);
		}

		::System::Boolean get_IsFailInCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILINCHECK_OFFSET))(this);
		}

		::System::Void set_IsFailInCheck(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILINCHECK_OFFSET))(this, value);
		}

		::System::Boolean get_IsNewHighestEndlessScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWHIGHESTENDLESSSCORE_OFFSET))(this);
		}

		::System::Void set_IsNewHighestEndlessScore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISNEWHIGHESTENDLESSSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_OriginProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ORIGINPROGRESS_OFFSET))(this);
		}

		::System::Void set_OriginProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ORIGINPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_EndlessScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDLESSSCORE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_Rewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_REWARDS_OFFSET))(this);
		}

		::System::Void set_Rewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_REWARDS_OFFSET))(this, value);
		}

		::System::Boolean get_IsNewEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWEND_OFFSET))(this);
		}

		::System::Boolean get_IsTrueEnding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISTRUEENDING_OFFSET))(this);
		}

		::RPG::Client::TextID get_EndingName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDINGNAME_OFFSET))(this);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_HASREWARD_OFFSET))(this);
		}

		::System::UInt32 get_ProgressAdded()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_PROGRESSADDED_OFFSET))(this);
		}

		::System::UInt32 get_ScriptID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_SCRIPTID_OFFSET))(this);
		}

		::System::Void set_ScriptID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_SCRIPTID_OFFSET))(this, value);
		}

		::System::String* get_LogoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_LOGOPATH_OFFSET))(this);
		}

		::System::Void set_LogoPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_LOGOPATH_OFFSET))(this, value);
		}
	};
}
