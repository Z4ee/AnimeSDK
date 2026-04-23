#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkChapterInfo; }
namespace RPG::Client { class ClockParkScriptData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_CHAPTERINFO_OFFSET UNITYSDK_OFFSET(0xA0A7880)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_CHAPTERPATHLIST_OFFSET UNITYSDK_OFFSET(0xA0A7A50)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_ENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0xA0A7A30)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_ISINENDLESS_OFFSET UNITYSDK_OFFSET(0xA0A7A00)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_ISSHOWSCRIPTLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xA0A78A0)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0xA0A7860)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_ISCHAPTERPASSED_OFFSET UNITYSDK_OFFSET(0xA0A7590)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_CHAPTERINFO_OFFSET UNITYSDK_OFFSET(0xA0A7890)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_CHAPTERPATHLIST_OFFSET UNITYSDK_OFFSET(0xA0A7A60)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_ENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0xA0A7A40)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0xA0A7870)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SYNCCHAPTER_OFFSET UNITYSDK_OFFSET(0xA09FEC0)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SYNCENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0xA09FF80)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA09E920)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkScriptInfo_TypeDefinitionIndex = 56710;

	class ClockParkScriptInfo : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkScriptData* DataRef; // 0x10
		::RPG::Client::ClockParkChapterInfo* _ChapterInfo_k__BackingField; // 0x18
		::System::Collections::Generic::IList_1<::System::UInt32>* _ChapterPathList_k__BackingField; // 0x20
		::System::UInt32 _ScriptID_k__BackingField; // 0x28
		::System::UInt32 _EndlessScore_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 scriptID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO__CTOR_OFFSET))(this, scriptID);
		}

		::System::Void SyncChapter(::System::UInt32 chapterID, ::System::Collections::Generic::IList_1<::System::UInt32>* chapterPathList, ::System::UInt32 roundID, ::System::UInt32 roundIndexInChapter, ::System::UInt32 checkPointID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SYNCCHAPTER_OFFSET))(this, chapterID, chapterPathList, roundID, roundIndexInChapter, checkPointID);
		}

		::System::Void SyncEndlessScore(::System::UInt32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SYNCENDLESSSCORE_OFFSET))(this, score);
		}

		::System::Boolean IsChapterPassed(::System::UInt32 chapterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_ISCHAPTERPASSED_OFFSET))(this, chapterID);
		}

		::System::UInt32 get_ScriptID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_SCRIPTID_OFFSET))(this);
		}

		::System::Void set_ScriptID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_SCRIPTID_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkChapterInfo* get_ChapterInfo()
		{
			return ((::RPG::Client::ClockParkChapterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_CHAPTERINFO_OFFSET))(this);
		}

		::System::Void set_ChapterInfo(::RPG::Client::ClockParkChapterInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkChapterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_CHAPTERINFO_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowScriptLoadingPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_ISSHOWSCRIPTLOADINGPAGE_OFFSET))(this);
		}

		::System::Boolean get_IsInEndless()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_ISINENDLESS_OFFSET))(this);
		}

		::System::UInt32 get_EndlessScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_ENDLESSSCORE_OFFSET))(this);
		}

		::System::Void set_EndlessScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_ENDLESSSCORE_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* get_ChapterPathList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_CHAPTERPATHLIST_OFFSET))(this);
		}

		::System::Void set_ChapterPathList(::System::Collections::Generic::IList_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_CHAPTERPATHLIST_OFFSET))(this, value);
		}
	};
}
