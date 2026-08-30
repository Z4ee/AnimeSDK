#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_DB57B006CFFCF00A_1;
namespace RPG::Client { class ClockParkChapterInfo; }
namespace RPG::Client { class ClockParkInstance; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class ClockParkChapterConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEENDING_OFFSET UNITYSDK_OFFSET(0x1BC0F570)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEFAIL_OFFSET UNITYSDK_OFFSET(0x1BC0F470)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDINGNAME_OFFSET UNITYSDK_OFFSET(0x1BC0FBD0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x1BC0FAA0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x1BC0FC40)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILED_OFFSET UNITYSDK_OFFSET(0x1BC0FA00)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILINCHECK_OFFSET UNITYSDK_OFFSET(0x1BC0FA40)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISMANUALQUIT_OFFSET UNITYSDK_OFFSET(0x1BC0FA20)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWEND_OFFSET UNITYSDK_OFFSET(0x1BC0FB10)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x1BC0FA60)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISTRUEENDING_OFFSET UNITYSDK_OFFSET(0x1BC0FB70)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_LOGOPATH_OFFSET UNITYSDK_OFFSET(0x1BC0FCC0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ORIGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1BC0FA80)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_PROGRESSADDED_OFFSET UNITYSDK_OFFSET(0x1BC0F9B0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1BC0FAF0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0x1BC0FCA0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_NEEDSHOWMISSIONHINT_OFFSET UNITYSDK_OFFSET(0x1BC0F750)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILED_OFFSET UNITYSDK_OFFSET(0x1BC0FA10)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILINCHECK_OFFSET UNITYSDK_OFFSET(0x1BC0FA50)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISMANUALQUIT_OFFSET UNITYSDK_OFFSET(0x1BC0FA30)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISNEWHIGHESTENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x1BC0FA70)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_LOGOPATH_OFFSET UNITYSDK_OFFSET(0x1BC0FCD0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ORIGINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1BC0FA90)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1BC0FB00)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0x1BC0FCB0)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1BC0F650)
#define RPG_CLIENT_CLOCKPARKGAMERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0F410)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkGameResultInfo_TypeDefinitionIndex = 61585;

	class ClockParkGameResultInfo : public ::System::Object
	{
	public:
		::System::String* _LogoPath_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Rewards_k__BackingField; // 0x18
		::Class_1_DB57B006CFFCF00A_1* _RowFinishInfo; // 0x20
		::RPG::GameCore::ClockParkChapterConfigRow* _Row; // 0x28
		::System::Boolean _IsNewHighestEndlessScore_k__BackingField; // 0x30
		::System::Boolean _IsFailInCheck_k__BackingField; // 0x31
		::System::Boolean _IsFailed_k__BackingField; // 0x32
		::System::Boolean _IsManualQuit_k__BackingField; // 0x33
		::System::UInt32 _ScriptID_k__BackingField; // 0x34
		::System::UInt32 _OriginProgress_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ClockParkGameResultInfo* CreateFail(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::ClockParkInstance* a3)
		{
			return ((::RPG::Client::ClockParkGameResultInfo*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEFAIL_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ClockParkGameResultInfo* CreateEnding(::RPG::Client::ClockParkChapterInfo* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ClockParkGameResultInfo*(*)(::RPG::Client::ClockParkChapterInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_CREATEENDING_OFFSET))(a1, a2, a3);
		}

		::System::Void Sync(::Class_1_DB57B006CFFCF00A_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean NeedShowMissionHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_NEEDSHOWMISSIONHINT_OFFSET))(this);
		}

		::System::Boolean get_IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILED_OFFSET))(this);
		}

		::System::Void set_IsFailed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsManualQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISMANUALQUIT_OFFSET))(this);
		}

		::System::Void set_IsManualQuit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISMANUALQUIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFailInCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISFAILINCHECK_OFFSET))(this);
		}

		::System::Void set_IsFailInCheck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISFAILINCHECK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNewHighestEndlessScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ISNEWHIGHESTENDLESSSCORE_OFFSET))(this);
		}

		::System::Void set_IsNewHighestEndlessScore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ISNEWHIGHESTENDLESSSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_OriginProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ORIGINPROGRESS_OFFSET))(this);
		}

		::System::Void set_OriginProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_ORIGINPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_ENDLESSSCORE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_Rewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_REWARDS_OFFSET))(this);
		}

		::System::Void set_Rewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_REWARDS_OFFSET))(this, a1);
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

		::System::Void set_ScriptID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_SCRIPTID_OFFSET))(this, a1);
		}

		::System::String* get_LogoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_GET_LOGOPATH_OFFSET))(this);
		}

		::System::Void set_LogoPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKGAMERESULTINFO_SET_LOGOPATH_OFFSET))(this, a1);
		}
	};
}
