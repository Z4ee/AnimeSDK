#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletSectionState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_10B9ACD0BDABD4D7.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore::Booklet { class BookConfig; }
namespace RPG::GameCore::Booklet { class ChapterConfig; }
namespace RPG::GameCore::Booklet { class SectionConfig; }
namespace RPG::GameCore::Booklet { class SectionSynopsis; }
namespace RPG::GameCore::Booklet { class SpreadConfig; }
namespace System { class String; }

#define RPG_CLIENT_BOOKLET_CHECKSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0x9E9F760)
#define RPG_CLIENT_BOOKLET_GETCHAPTERCONFIG_OFFSET UNITYSDK_OFFSET(0x9E9F630)
#define RPG_CLIENT_BOOKLET_GETCHAPTERIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x9EA0020)
#define RPG_CLIENT_BOOKLET_GETCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x9EA0110)
#define RPG_CLIENT_BOOKLET_GETCHAPTERTITLE_OFFSET UNITYSDK_OFFSET(0x9EA01B0)
#define RPG_CLIENT_BOOKLET_GETFIRSTSECTIONID_OFFSET UNITYSDK_OFFSET(0x9E9FF60)
#define RPG_CLIENT_BOOKLET_GETNEXTSECTIONID_OFFSET UNITYSDK_OFFSET(0x9E9FCC0)
#define RPG_CLIENT_BOOKLET_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9EA0340)
#define RPG_CLIENT_BOOKLET_GETPRESECTIONID_OFFSET UNITYSDK_OFFSET(0x9E9FC10)
#define RPG_CLIENT_BOOKLET_GETSECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x9E9FD70)
#define RPG_CLIENT_BOOKLET_GETSECTIONIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x9E9F7B0)
#define RPG_CLIENT_BOOKLET_GETSECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9E9F710)
#define RPG_CLIENT_BOOKLET_GETSECTIONTITLE_OFFSET UNITYSDK_OFFSET(0x9E9F8B0)
#define RPG_CLIENT_BOOKLET_GETSENTENCE_OFFSET UNITYSDK_OFFSET(0x9EA0580)
#define RPG_CLIENT_BOOKLET_GETSPREADCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0x9E9EE00)
#define RPG_CLIENT_BOOKLET_GET_CANTONEXTSPREAD_OFFSET UNITYSDK_OFFSET(0x9E9F050)
#define RPG_CLIENT_BOOKLET_GET_CANTOPRESPREAD_OFFSET UNITYSDK_OFFSET(0x9E9F040)
#define RPG_CLIENT_BOOKLET_GET_CHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0x9E9F240)
#define RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x9E9ED00)
#define RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0x9E9ED40)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0x9E9F400)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONID_OFFSET UNITYSDK_OFFSET(0x9E9ED20)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x9E9ED60)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0x9E9F360)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSPREADID_OFFSET UNITYSDK_OFFSET(0x9E9EDA0)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSPREADINDEX_OFFSET UNITYSDK_OFFSET(0x9E9ED80)
#define RPG_CLIENT_BOOKLET_GET_HASNEXTSECTION_OFFSET UNITYSDK_OFFSET(0x9E9F150)
#define RPG_CLIENT_BOOKLET_GET_HASNEXTSPREAD_OFFSET UNITYSDK_OFFSET(0x9E9EFA0)
#define RPG_CLIENT_BOOKLET_GET_HASPRESECTION_OFFSET UNITYSDK_OFFSET(0x9E9F060)
#define RPG_CLIENT_BOOKLET_GET_HASPRESPREAD_OFFSET UNITYSDK_OFFSET(0x9E9EE90)
#define RPG_CLIENT_BOOKLET_GET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0x9E9F470)
#define RPG_CLIENT_BOOKLET_GET_ISCANAUTOPLAY_OFFSET UNITYSDK_OFFSET(0x9E9F490)
#define RPG_CLIENT_BOOKLET_GET_ISCANFORCESKIP_OFFSET UNITYSDK_OFFSET(0x9E9F4A0)
#define RPG_CLIENT_BOOKLET_GET_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0x9E9F4B0)
#define RPG_CLIENT_BOOKLET_GET_SECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9E9F2A0)
#define RPG_CLIENT_BOOKLET_GET_SPREADCOUNT_OFFSET UNITYSDK_OFFSET(0x9E9F300)
#define RPG_CLIENT_BOOKLET_INIT_OFFSET UNITYSDK_OFFSET(0x9E9F4D0)
#define RPG_CLIENT_BOOKLET_MARKSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0x9EA0530)
#define RPG_CLIENT_BOOKLET_MARKSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0x9EA04E0)
#define RPG_CLIENT_BOOKLET_ONSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0x9EA0660)
#define RPG_CLIENT_BOOKLET_ONSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0x9EA0620)
#define RPG_CLIENT_BOOKLET_SET_CURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0x9E9ED50)
#define RPG_CLIENT_BOOKLET_SET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x9E9ED70)
#define RPG_CLIENT_BOOKLET_SET_CURRENTSPREADINDEX_OFFSET UNITYSDK_OFFSET(0x9E9ED90)
#define RPG_CLIENT_BOOKLET_SET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0x9E9F480)
#define RPG_CLIENT_BOOKLET_TRYSWITCHTONEXTSPREAD_OFFSET UNITYSDK_OFFSET(0x9EA02E0)
#define RPG_CLIENT_BOOKLET_TRYSWITCHTOPRESPREAD_OFFSET UNITYSDK_OFFSET(0x9EA0280)
#define RPG_CLIENT_BOOKLET_TRYSWITCHTOSECTION_OFFSET UNITYSDK_OFFSET(0x9E9FA10)
#define RPG_CLIENT_BOOKLET__CHECKSPREADINDEXISVALID_OFFSET UNITYSDK_OFFSET(0x9E9EF30)
#define RPG_CLIENT_BOOKLET__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9F4C0)
#define RPG_CLIENT_BOOKLET__FINDSECTIONINDEXIN_OFFSET UNITYSDK_OFFSET(0x9E9F960)
#define RPG_CLIENT_BOOKLET__GETCHAPTERCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0x9EA0080)
#define RPG_CLIENT_BOOKLET__GETFIRSTSECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x9EA06A0)
#define RPG_CLIENT_BOOKLET__GETNEXTSECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x9E9F1D0)
#define RPG_CLIENT_BOOKLET__GETPRESECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x9E9F0E0)
#define RPG_CLIENT_BOOKLET__GETSECTIONCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0x9EA06F0)
#define RPG_CLIENT_BOOKLET__GETSECTIONCONFIGIN_OFFSET UNITYSDK_OFFSET(0x9E9F6A0)
#define RPG_CLIENT_BOOKLET__GETSECTIONSYNOPSISBYINDEX_OFFSET UNITYSDK_OFFSET(0x9E9F810)
#define RPG_CLIENT_BOOKLET__LOADSECTIONCONFIGBY_OFFSET UNITYSDK_OFFSET(0x9EA0800)

namespace RPG::Client
{
	inline static constexpr unsigned int Booklet_TypeDefinitionIndex = 66684;

	class Booklet : public ::System::Object
	{
	public:
		::RPG::GameCore::Booklet::BookConfig* _Config; // 0x10
		::RPG::GameCore::Booklet::SectionConfig* _CurrentSection_k__BackingField; // 0x18
		::RPG::GameCore::Booklet::ChapterConfig* _CurrentChapter_k__BackingField; // 0x20
		::System::Boolean _IsCanReplay_k__BackingField; // 0x28
		::System::Boolean _IsCanForceSkip_k__BackingField; // 0x29
		::System::Boolean _IsCanAutoPlay_k__BackingField; // 0x2A
		::System::Boolean _IsAutoPlay_k__BackingField; // 0x2B
		::System::Int32 _CurrentSpreadIndex_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::GameCore::Booklet::BookConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Booklet::BookConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__CTOR_OFFSET))(this, config);
		}

		::System::UInt32 get_CurrentChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONID_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::ChapterConfig* get_CurrentChapter()
		{
			return ((::RPG::GameCore::Booklet::ChapterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTER_OFFSET))(this);
		}

		::System::Void set_CurrentChapter(::RPG::GameCore::Booklet::ChapterConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_CURRENTCHAPTER_OFFSET))(this, value);
		}

		::RPG::GameCore::Booklet::SectionConfig* get_CurrentSection()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSECTION_OFFSET))(this);
		}

		::System::Void set_CurrentSection(::RPG::GameCore::Booklet::SectionConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Booklet::SectionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_CURRENTSECTION_OFFSET))(this, value);
		}

		::System::Int32 get_CurrentSpreadIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSPREADINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentSpreadIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_CURRENTSPREADINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentSpreadID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSPREADID_OFFSET))(this);
		}

		::System::Boolean get_HasPreSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASPRESPREAD_OFFSET))(this);
		}

		::System::Boolean get_HasNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASNEXTSPREAD_OFFSET))(this);
		}

		::System::Boolean get_CanToPreSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CANTOPRESPREAD_OFFSET))(this);
		}

		::System::Boolean get_CanToNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CANTONEXTSPREAD_OFFSET))(this);
		}

		::System::Boolean get_HasPreSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASPRESECTION_OFFSET))(this);
		}

		::System::Boolean get_HasNextSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASNEXTSECTION_OFFSET))(this);
		}

		::System::Int32 get_ChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CHAPTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_SECTIONCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SpreadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_SPREADCOUNT_OFFSET))(this);
		}

		::System::Boolean get_CurrentSpreadHasRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSPREADHASREAD_OFFSET))(this);
		}

		::System::Boolean get_CurrentSectionHasRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONHASREAD_OFFSET))(this);
		}

		::System::Boolean get_IsAutoPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISAUTOPLAY_OFFSET))(this);
		}

		::System::Void set_IsAutoPlay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_ISAUTOPLAY_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanAutoPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISCANAUTOPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsCanForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISCANFORCESKIP_OFFSET))(this);
		}

		::System::Boolean get_IsCanReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISCANREPLAY_OFFSET))(this);
		}

		::System::Void Init(::System::UInt32 sectionID, ::System::Int32 spreadIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_INIT_OFFSET))(this, sectionID, spreadIndex);
		}

		::RPG::Client::BookletSectionState GetSectionState(::System::UInt32 sectionID)
		{
			return ((::RPG::Client::BookletSectionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONSTATE_OFFSET))(this, sectionID);
		}

		::System::Boolean CheckSpreadHasRead(::System::UInt32 spreadID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_CHECKSPREADHASREAD_OFFSET))(this, spreadID);
		}

		::System::UInt32 GetSectionIDByIndex(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONIDBYINDEX_OFFSET))(this, index);
		}

		::RPG::Client::TextID GetSectionTitle(::System::UInt32 sectionID)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONTITLE_OFFSET))(this, sectionID);
		}

		::System::Boolean TrySwitchToSection(::System::UInt32 sectionID, ::System::Int32 spreadIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_TRYSWITCHTOSECTION_OFFSET))(this, sectionID, spreadIndex);
		}

		::System::UInt32 GetPreSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETPRESECTIONID_OFFSET))(this);
		}

		::System::UInt32 GetNextSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETNEXTSECTIONID_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* GetSectionConfig(::System::UInt32 sectionID)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONCONFIG_OFFSET))(this, sectionID);
		}

		::System::UInt32 GetFirstSectionID(::System::UInt32 chapterID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETFIRSTSECTIONID_OFFSET))(this, chapterID);
		}

		::System::UInt32 GetChapterIDByIndex(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERIDBYINDEX_OFFSET))(this, index);
		}

		::RPG::GameCore::Booklet::ChapterConfig* GetChapterConfig(::System::UInt32 chapterID)
		{
			return ((::RPG::GameCore::Booklet::ChapterConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERCONFIG_OFFSET))(this, chapterID);
		}

		::System::Int32 GetChapterIndex(::System::UInt32 chapterID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERINDEX_OFFSET))(this, chapterID);
		}

		::RPG::Client::TextID GetChapterTitle(::System::UInt32 chapterID)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERTITLE_OFFSET))(this, chapterID);
		}

		::System::Boolean TrySwitchToPreSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_TRYSWITCHTOPRESPREAD_OFFSET))(this);
		}

		::System::Boolean TrySwitchToNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_TRYSWITCHTONEXTSPREAD_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SpreadConfig* GetSpreadConfigByIndex(::System::Int32 index)
		{
			return ((::RPG::GameCore::Booklet::SpreadConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSPREADCONFIGBYINDEX_OFFSET))(this, index);
		}

		::System::String* GetPrefabPath(::System::UInt32 prefabID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETPREFABPATH_OFFSET))(this, prefabID);
		}

		::System::Void MarkSpreadHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_MARKSPREADHASREAD_OFFSET))(this);
		}

		::System::Void MarkSectionHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_MARKSECTIONHASREAD_OFFSET))(this);
		}

		::Struct_2_10B9ACD0BDABD4D7 GetSentence(::System::UInt32 sentenceID)
		{
			return ((::Struct_2_10B9ACD0BDABD4D7(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSENTENCE_OFFSET))(this, sentenceID);
		}

		::System::Void OnSpreadHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_ONSPREADHASREAD_OFFSET))(this);
		}

		::System::Void OnSectionHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_ONSECTIONHASREAD_OFFSET))(this);
		}

		::System::Boolean _CheckSpreadIndexIsValid(::System::Int32 spreadIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__CHECKSPREADINDEXISVALID_OFFSET))(this, spreadIndex);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetFirstSectionConfig()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETFIRSTSECTIONCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetPreSectionConfig()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETPRESECTIONCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetNextSectionConfig()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETNEXTSECTIONCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetSectionConfigIn(::RPG::GameCore::Booklet::ChapterConfig* chapterConfig, ::System::UInt32 sectionID)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETSECTIONCONFIGIN_OFFSET))(this, chapterConfig, sectionID);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetSectionConfigByIndex(::RPG::GameCore::Booklet::ChapterConfig* chapterConfig, ::System::Int32 index)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETSECTIONCONFIGBYINDEX_OFFSET))(this, chapterConfig, index);
		}

		::RPG::GameCore::Booklet::SectionSynopsis* _GetSectionSynopsisByIndex(::RPG::GameCore::Booklet::ChapterConfig* chapterConfig, ::System::Int32 index)
		{
			return ((::RPG::GameCore::Booklet::SectionSynopsis*(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETSECTIONSYNOPSISBYINDEX_OFFSET))(this, chapterConfig, index);
		}

		::RPG::GameCore::Booklet::SectionConfig* _LoadSectionConfigBy(::RPG::GameCore::Booklet::SectionSynopsis* sectionSynopsis)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::RPG::GameCore::Booklet::SectionSynopsis*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__LOADSECTIONCONFIGBY_OFFSET))(this, sectionSynopsis);
		}

		::System::Int32 _FindSectionIndexIn(::RPG::GameCore::Booklet::ChapterConfig* chapterConfig, ::System::UInt32 sectionID)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__FINDSECTIONINDEXIN_OFFSET))(this, chapterConfig, sectionID);
		}

		::RPG::GameCore::Booklet::ChapterConfig* _GetChapterConfigByIndex(::System::Int32 index)
		{
			return ((::RPG::GameCore::Booklet::ChapterConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETCHAPTERCONFIGBYINDEX_OFFSET))(this, index);
		}
	};
}
