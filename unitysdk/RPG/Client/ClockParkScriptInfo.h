#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkChapterInfo; }
namespace RPG::Client { class ClockParkScriptData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_CHAPTERINFO_OFFSET UNITYSDK_OFFSET(0x1AE0ED70)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_CHAPTERPATHLIST_OFFSET UNITYSDK_OFFSET(0x1AE0EF70)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_ENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x1AE0EF50)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_ISINENDLESS_OFFSET UNITYSDK_OFFSET(0x1AE0EEF0)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_ISSHOWSCRIPTLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x1AE0ED90)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0x1AE0ED50)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_ISCHAPTERPASSED_OFFSET UNITYSDK_OFFSET(0x1AE0E9F0)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_CHAPTERINFO_OFFSET UNITYSDK_OFFSET(0x1AE0ED80)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_CHAPTERPATHLIST_OFFSET UNITYSDK_OFFSET(0x1AE0EF80)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_ENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x1AE0EF60)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_SCRIPTID_OFFSET UNITYSDK_OFFSET(0x1AE0ED60)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SYNCCHAPTER_OFFSET UNITYSDK_OFFSET(0x1AE071F0)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO_SYNCENDLESSSCORE_OFFSET UNITYSDK_OFFSET(0x1AE072B0)
#define RPG_CLIENT_CLOCKPARKSCRIPTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE05EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkScriptInfo_TypeDefinitionIndex = 58756;

	class ClockParkScriptInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _ChapterPathList_k__BackingField; // 0x10
		::RPG::Client::ClockParkChapterInfo* _ChapterInfo_k__BackingField; // 0x18
		::RPG::Client::ClockParkScriptData* DataRef; // 0x20
		::System::UInt32 _ScriptID_k__BackingField; // 0x28
		::System::UInt32 _EndlessScore_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncChapter(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SYNCCHAPTER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SyncEndlessScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SYNCENDLESSSCORE_OFFSET))(this, a1);
		}

		::System::Boolean IsChapterPassed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_ISCHAPTERPASSED_OFFSET))(this, a1);
		}

		::System::UInt32 get_ScriptID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_SCRIPTID_OFFSET))(this);
		}

		::System::Void set_ScriptID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_SCRIPTID_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkChapterInfo* get_ChapterInfo()
		{
			return ((::RPG::Client::ClockParkChapterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_CHAPTERINFO_OFFSET))(this);
		}

		::System::Void set_ChapterInfo(::RPG::Client::ClockParkChapterInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkChapterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_CHAPTERINFO_OFFSET))(this, a1);
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

		::System::Void set_EndlessScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_ENDLESSSCORE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* get_ChapterPathList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_GET_CHAPTERPATHLIST_OFFSET))(this);
		}

		::System::Void set_ChapterPathList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKSCRIPTINFO_SET_CHAPTERPATHLIST_OFFSET))(this, a1);
		}
	};
}
