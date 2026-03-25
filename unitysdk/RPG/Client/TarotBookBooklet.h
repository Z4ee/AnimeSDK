#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Booklet.h"
#include "unitysdk/RPG/Client/BookletSectionState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_10B9ACD0BDABD4D7.h"

namespace RPG::Client { class TarotBookCharacter; }
namespace RPG::Client { class TarotBookModule; }
namespace RPG::GameCore::Booklet { class BookConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKBOOKLET_CHECKCHAPTERHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA54B420)
#define RPG_CLIENT_TAROTBOOKBOOKLET_CHECKISCATALOGSECTION_OFFSET UNITYSDK_OFFSET(0xA54AB60)
#define RPG_CLIENT_TAROTBOOKBOOKLET_CHECKISSHOWCODEMARK_OFFSET UNITYSDK_OFFSET(0xA54BFE0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_CHECKSECTIONCANENTER_OFFSET UNITYSDK_OFFSET(0xA54B5A0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_CHECKSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xA54BCD0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_CREATE_OFFSET UNITYSDK_OFFSET(0xA54AC30)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERCATALOGICONPATH_OFFSET UNITYSDK_OFFSET(0xA54B150)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERINDEXICONPATH_OFFSET UNITYSDK_OFFSET(0xA54B290)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERMAINCATALOGTITLE_OFFSET UNITYSDK_OFFSET(0xA54AEB0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERSUBCATALOGTITLE_OFFSET UNITYSDK_OFFSET(0xA54B030)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERTITLE_OFFSET UNITYSDK_OFFSET(0xA54C170)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHARACTERBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xA54AE10)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHARACTERIDBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xA54AD90)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETSECTIONINDEXICONPATH_OFFSET UNITYSDK_OFFSET(0xA54B370)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETSECTIONSTATE_OFFSET UNITYSDK_OFFSET(0xA54B600)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETSENTENCE_OFFSET UNITYSDK_OFFSET(0xA54CC50)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETSHOWNSECTIONIDSINCURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0xA54B8A0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETSTORYIDBYSECTIONID_OFFSET UNITYSDK_OFFSET(0xA54BF60)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_CANTONEXTSPREAD_OFFSET UNITYSDK_OFFSET(0xA54A6D0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_CURRENTCHAPTERICONPATH_OFFSET UNITYSDK_OFFSET(0xA54A560)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_CURRENTCHARACTERID_OFFSET UNITYSDK_OFFSET(0xA54A480)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_HASNEXTSECTION_OFFSET UNITYSDK_OFFSET(0xA54A1D0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_HASPRESECTION_OFFSET UNITYSDK_OFFSET(0xA54A070)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xA54A2D0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISCANAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xA54A360)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISCANFORCESKIP_OFFSET UNITYSDK_OFFSET(0xA54A3C0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0xA54A420)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISEPILOGUE_OFFSET UNITYSDK_OFFSET(0xA54A750)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISINCATALOG_OFFSET UNITYSDK_OFFSET(0xA549EF0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISINMAINCATALOG_OFFSET UNITYSDK_OFFSET(0xA549EB0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_MAINCATALOGCHAPTERID_OFFSET UNITYSDK_OFFSET(0xA549EE0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_MAINCATALOGSECTIONID_OFFSET UNITYSDK_OFFSET(0xA54A050)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_MAINCATALOGSPREADINDEX_OFFSET UNITYSDK_OFFSET(0xA54A060)
#define RPG_CLIENT_TAROTBOOKBOOKLET_INITFORCHARACTER_OFFSET UNITYSDK_OFFSET(0xA54AA20)
#define RPG_CLIENT_TAROTBOOKBOOKLET_INITFORMAINCATALOG_OFFSET UNITYSDK_OFFSET(0xA54A9C0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_INITFORSTORY_OFFSET UNITYSDK_OFFSET(0xA54A900)
#define RPG_CLIENT_TAROTBOOKBOOKLET_ONSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0xA54C720)
#define RPG_CLIENT_TAROTBOOKBOOKLET_ONSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xA54C4A0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_SET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xA54A2E0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_TRYCONSUMEUNLOCKHINTFLAG_OFFSET UNITYSDK_OFFSET(0xA54C370)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CHECKSECTIONCANREAD_OFFSET UNITYSDK_OFFSET(0xA54A170)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CHECKSECTIONISCATALOG_OFFSET UNITYSDK_OFFSET(0xA549FC0)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTCHAPTERIDTOCHARACTERID_OFFSET UNITYSDK_OFFSET(0xA54A510)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTCHARACTERIDTOCHAPTERID_OFFSET UNITYSDK_OFFSET(0xA54AB20)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTSECTIONIDTOSTORYID_OFFSET UNITYSDK_OFFSET(0xA54B9C0)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTSTORYIDTOSECTIONID_OFFSET UNITYSDK_OFFSET(0xA54A980)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CTOR_OFFSET UNITYSDK_OFFSET(0xA54AD50)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_CHECKSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xA54CE10)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETCHAPTERTITLE_OFFSET UNITYSDK_OFFSET(0xA54CE80)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETSECTIONSTATE_OFFSET UNITYSDK_OFFSET(0xA54CDA0)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETSENTENCE_OFFSET UNITYSDK_OFFSET(0xA54CF70)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_CANTONEXTSPREAD_OFFSET UNITYSDK_OFFSET(0xA54CD90)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_HASNEXTSECTION_OFFSET UNITYSDK_OFFSET(0xA54CD40)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_HASPRESECTION_OFFSET UNITYSDK_OFFSET(0xA54CD30)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_ISCANAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xA54CD60)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_ISCANFORCESKIP_OFFSET UNITYSDK_OFFSET(0xA54CD70)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0xA54CD80)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_ONSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0xA54CF10)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_ONSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xA54CEB0)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_SET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xA54CD50)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookBooklet_TypeDefinitionIndex = 55541;

	class TarotBookBooklet : public ::RPG::Client::Booklet
	{
	public:
		// static const ::System::UInt32 CatalogSectionSegment = 0x63; // 0x0
		// static const ::System::UInt32 CatalogMinIndex = 0x1; // 0x0
		// static const ::System::UInt32 CatalogMaxIndex = 0xC; // 0x0
		::RPG::Client::TarotBookModule* _Module; // 0x30
		::System::Boolean _IsAutoPlay; // 0x38

		::System::Void _ctor(::RPG::Client::TarotBookModule* module, ::RPG::GameCore::Booklet::BookConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookModule*, ::RPG::GameCore::Booklet::BookConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CTOR_OFFSET))(this, module, config);
		}

		::System::Boolean get_IsInMainCatalog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISINMAINCATALOG_OFFSET))(this);
		}

		::System::Boolean get_IsInCatalog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISINCATALOG_OFFSET))(this);
		}

		::System::UInt32 get_MainCatalogChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_MAINCATALOGCHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_MainCatalogSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_MAINCATALOGSECTIONID_OFFSET))(this);
		}

		::System::Int32 get_MainCatalogSpreadIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_MAINCATALOGSPREADINDEX_OFFSET))(this);
		}

		::System::Boolean get_HasPreSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_HASPRESECTION_OFFSET))(this);
		}

		::System::Boolean get_HasNextSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_HASNEXTSECTION_OFFSET))(this);
		}

		::System::Boolean get_IsAutoPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISAUTOPLAY_OFFSET))(this);
		}

		::System::Void set_IsAutoPlay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_SET_ISAUTOPLAY_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanAutoPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISCANAUTOPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsCanForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISCANFORCESKIP_OFFSET))(this);
		}

		::System::Boolean get_IsCanReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISCANREPLAY_OFFSET))(this);
		}

		::System::UInt32 get_CurrentCharacterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_CURRENTCHARACTERID_OFFSET))(this);
		}

		::System::String* get_CurrentChapterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_CURRENTCHAPTERICONPATH_OFFSET))(this);
		}

		::System::Boolean get_CanToNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_CANTONEXTSPREAD_OFFSET))(this);
		}

		::System::Boolean get_IsEpilogue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISEPILOGUE_OFFSET))(this);
		}

		::System::Void InitForStory(::System::UInt32 storyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_INITFORSTORY_OFFSET))(this, storyID);
		}

		::System::Void InitForMainCatalog(::System::Boolean isShowCover)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_INITFORMAINCATALOG_OFFSET))(this, isShowCover);
		}

		::System::Void InitForCharacter(::System::UInt32 characterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_INITFORCHARACTER_OFFSET))(this, characterID);
		}

		::System::Boolean CheckIsCatalogSection(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CHECKISCATALOGSECTION_OFFSET))(this, sectionID);
		}

		static ::RPG::Client::TarotBookBooklet* Create(::RPG::Client::TarotBookModule* module, ::System::String* configPath)
		{
			return ((::RPG::Client::TarotBookBooklet*(*)(::RPG::Client::TarotBookModule*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CREATE_OFFSET))(module, configPath);
		}

		::System::UInt32 GetCharacterIDByChapterID(::System::UInt32 chapterID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHARACTERIDBYCHAPTERID_OFFSET))(this, chapterID);
		}

		::RPG::Client::TarotBookCharacter* GetCharacterByChapterID(::System::UInt32 chapterID)
		{
			return ((::RPG::Client::TarotBookCharacter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHARACTERBYCHAPTERID_OFFSET))(this, chapterID);
		}

		::RPG::Client::TextID GetChapterMainCatalogTitle(::System::UInt32 chapterID)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERMAINCATALOGTITLE_OFFSET))(this, chapterID);
		}

		::RPG::Client::TextID GetChapterSubCatalogTitle(::System::UInt32 chapterID)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERSUBCATALOGTITLE_OFFSET))(this, chapterID);
		}

		::System::String* GetChapterCatalogIconPath(::System::UInt32 chapterID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERCATALOGICONPATH_OFFSET))(this, chapterID);
		}

		::System::String* GetChapterIndexIconPath(::System::UInt32 chapterID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERINDEXICONPATH_OFFSET))(this, chapterID);
		}

		::System::String* GetSectionIndexIconPath(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETSECTIONINDEXICONPATH_OFFSET))(this, index);
		}

		::System::Boolean CheckChapterHasUnlocked(::System::UInt32 chapterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CHECKCHAPTERHASUNLOCKED_OFFSET))(this, chapterID);
		}

		::System::Boolean CheckSectionCanEnter(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CHECKSECTIONCANENTER_OFFSET))(this, sectionID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShownSectionIDsInCurrentChapter()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETSHOWNSECTIONIDSINCURRENTCHAPTER_OFFSET))(this);
		}

		::RPG::Client::BookletSectionState GetSectionState(::System::UInt32 sectionID)
		{
			return ((::RPG::Client::BookletSectionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETSECTIONSTATE_OFFSET))(this, sectionID);
		}

		::System::Boolean CheckSpreadHasRead(::System::UInt32 spreadID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CHECKSPREADHASREAD_OFFSET))(this, spreadID);
		}

		::System::UInt32 GetStoryIDBySectionID(::System::UInt32 sectionID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETSTORYIDBYSECTIONID_OFFSET))(this, sectionID);
		}

		::System::Boolean CheckIsShowCodeMark(::System::UInt32 chapterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CHECKISSHOWCODEMARK_OFFSET))(this, chapterID);
		}

		::RPG::Client::TextID GetChapterTitle(::System::UInt32 chapterID)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERTITLE_OFFSET))(this, chapterID);
		}

		::System::Boolean TryConsumeUnlockHintFlag(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_TRYCONSUMEUNLOCKHINTFLAG_OFFSET))(this, sectionID);
		}

		::System::Void OnSpreadHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_ONSPREADHASREAD_OFFSET))(this);
		}

		::System::Void OnSectionHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_ONSECTIONHASREAD_OFFSET))(this);
		}

		::Struct_2_10B9ACD0BDABD4D7 GetSentence(::System::UInt32 sentenceID)
		{
			return ((::Struct_2_10B9ACD0BDABD4D7(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETSENTENCE_OFFSET))(this, sentenceID);
		}

		::System::Boolean _CheckSectionCanRead(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CHECKSECTIONCANREAD_OFFSET))(this, sectionID);
		}

		static ::System::UInt32 _ConvertSectionIDToStoryID(::System::UInt32 sectionID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTSECTIONIDTOSTORYID_OFFSET))(sectionID);
		}

		static ::System::UInt32 _ConvertCharacterIDToChapterID(::System::UInt32 characterID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTCHARACTERIDTOCHAPTERID_OFFSET))(characterID);
		}

		static ::System::UInt32 _ConvertChapterIDToCharacterID(::System::UInt32 chapterID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTCHAPTERIDTOCHARACTERID_OFFSET))(chapterID);
		}

		static ::System::UInt32 _ConvertStoryIDToSectionID(::System::UInt32 storyID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTSTORYIDTOSECTIONID_OFFSET))(storyID);
		}

		static ::System::Boolean _CheckSectionIsCatalog(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CHECKSECTIONISCATALOG_OFFSET))(sectionID);
		}

		::System::Boolean __iFixBaseProxy_get_HasPreSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_HASPRESECTION_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_get_HasNextSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_HASNEXTSECTION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_set_IsAutoPlay(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_SET_ISAUTOPLAY_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_get_IsCanAutoPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_ISCANAUTOPLAY_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_get_IsCanForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_ISCANFORCESKIP_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_get_IsCanReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_ISCANREPLAY_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_get_CanToNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_CANTONEXTSPREAD_OFFSET))(this);
		}

		::RPG::Client::BookletSectionState __iFixBaseProxy_GetSectionState(::System::UInt32 P0)
		{
			return ((::RPG::Client::BookletSectionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETSECTIONSTATE_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_CheckSpreadHasRead(::System::UInt32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_CHECKSPREADHASREAD_OFFSET))(this, P0);
		}

		::RPG::Client::TextID __iFixBaseProxy_GetChapterTitle(::System::UInt32 P0)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETCHAPTERTITLE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSpreadHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_ONSPREADHASREAD_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSectionHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_ONSECTIONHASREAD_OFFSET))(this);
		}

		::Struct_2_10B9ACD0BDABD4D7 __iFixBaseProxy_GetSentence(::System::UInt32 P0)
		{
			return ((::Struct_2_10B9ACD0BDABD4D7(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETSENTENCE_OFFSET))(this, P0);
		}
	};
}
