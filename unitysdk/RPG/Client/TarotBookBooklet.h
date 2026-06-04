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

#define RPG_CLIENT_TAROTBOOKBOOKLET_CHECKCHAPTERHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC9D6690)
#define RPG_CLIENT_TAROTBOOKBOOKLET_CHECKISCATALOGSECTION_OFFSET UNITYSDK_OFFSET(0xC9D5DD0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_CHECKISSHOWCODEMARK_OFFSET UNITYSDK_OFFSET(0xC9D7040)
#define RPG_CLIENT_TAROTBOOKBOOKLET_CHECKSECTIONCANENTER_OFFSET UNITYSDK_OFFSET(0xC9D6820)
#define RPG_CLIENT_TAROTBOOKBOOKLET_CHECKSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xC9D6DD0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_CREATE_OFFSET UNITYSDK_OFFSET(0xC9D5EA0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERCATALOGICONPATH_OFFSET UNITYSDK_OFFSET(0xC9D63C0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERINDEXICONPATH_OFFSET UNITYSDK_OFFSET(0xC9D6500)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERMAINCATALOGTITLE_OFFSET UNITYSDK_OFFSET(0xC9D6120)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERSUBCATALOGTITLE_OFFSET UNITYSDK_OFFSET(0xC9D62A0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERTITLE_OFFSET UNITYSDK_OFFSET(0xC9D71D0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHARACTERBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xC9D6080)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETCHARACTERIDBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xC9D6000)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETSECTIONINDEXICONPATH_OFFSET UNITYSDK_OFFSET(0xC9D65E0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETSECTIONSTATE_OFFSET UNITYSDK_OFFSET(0xC9D6880)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETSENTENCE_OFFSET UNITYSDK_OFFSET(0xC9D7C10)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETSHOWNSECTIONIDSINCURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0xC9D69E0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GETSTORYIDBYSECTIONID_OFFSET UNITYSDK_OFFSET(0xC9D6FC0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_CANTONEXTSPREAD_OFFSET UNITYSDK_OFFSET(0xC9D5940)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_CURRENTCHAPTERICONPATH_OFFSET UNITYSDK_OFFSET(0xC9D57D0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_CURRENTCHARACTERID_OFFSET UNITYSDK_OFFSET(0xC9D56F0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_HASNEXTSECTION_OFFSET UNITYSDK_OFFSET(0xC9D5450)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_HASPRESECTION_OFFSET UNITYSDK_OFFSET(0xC9D52F0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xC9D5550)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISCANAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xC9D55D0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISCANFORCESKIP_OFFSET UNITYSDK_OFFSET(0xC9D5630)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0xC9D5690)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISEPILOGUE_OFFSET UNITYSDK_OFFSET(0xC9D59C0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISINCATALOG_OFFSET UNITYSDK_OFFSET(0xC9D5170)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_ISINMAINCATALOG_OFFSET UNITYSDK_OFFSET(0xC9D5130)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_MAINCATALOGCHAPTERID_OFFSET UNITYSDK_OFFSET(0xC9D5160)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_MAINCATALOGSECTIONID_OFFSET UNITYSDK_OFFSET(0xC9D52D0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_GET_MAINCATALOGSPREADINDEX_OFFSET UNITYSDK_OFFSET(0xC9D52E0)
#define RPG_CLIENT_TAROTBOOKBOOKLET_INITFORCHARACTER_OFFSET UNITYSDK_OFFSET(0xC9D5C90)
#define RPG_CLIENT_TAROTBOOKBOOKLET_INITFORMAINCATALOG_OFFSET UNITYSDK_OFFSET(0xC9D5C30)
#define RPG_CLIENT_TAROTBOOKBOOKLET_INITFORSTORY_OFFSET UNITYSDK_OFFSET(0xC9D5B70)
#define RPG_CLIENT_TAROTBOOKBOOKLET_ONSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0xC9D7780)
#define RPG_CLIENT_TAROTBOOKBOOKLET_ONSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xC9D7500)
#define RPG_CLIENT_TAROTBOOKBOOKLET_SET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xC9D5560)
#define RPG_CLIENT_TAROTBOOKBOOKLET_TRYCONSUMEUNLOCKHINTFLAG_OFFSET UNITYSDK_OFFSET(0xC9D73D0)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CHECKSECTIONCANREAD_OFFSET UNITYSDK_OFFSET(0xC9D53F0)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CHECKSECTIONISCATALOG_OFFSET UNITYSDK_OFFSET(0xC9D5240)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTCHAPTERIDTOCHARACTERID_OFFSET UNITYSDK_OFFSET(0xC9D5780)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTCHARACTERIDTOCHAPTERID_OFFSET UNITYSDK_OFFSET(0xC9D5D90)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTSECTIONIDTOSTORYID_OFFSET UNITYSDK_OFFSET(0xC9D6B20)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTSTORYIDTOSECTIONID_OFFSET UNITYSDK_OFFSET(0xC9D5BF0)
#define RPG_CLIENT_TAROTBOOKBOOKLET__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D5FC0)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_CHECKSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xC9D7DC0)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETCHAPTERTITLE_OFFSET UNITYSDK_OFFSET(0xC9D7E20)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETSECTIONSTATE_OFFSET UNITYSDK_OFFSET(0xC9D7D60)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETSENTENCE_OFFSET UNITYSDK_OFFSET(0xC9D7F10)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_CANTONEXTSPREAD_OFFSET UNITYSDK_OFFSET(0xC9D7D50)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_HASNEXTSECTION_OFFSET UNITYSDK_OFFSET(0xC9D7D00)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_HASPRESECTION_OFFSET UNITYSDK_OFFSET(0xC9D7CF0)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_ISCANAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xC9D7D20)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_ISCANFORCESKIP_OFFSET UNITYSDK_OFFSET(0xC9D7D30)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0xC9D7D40)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_ONSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0xC9D7EB0)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_ONSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xC9D7E50)
#define RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_SET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xC9D7D10)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookBooklet_TypeDefinitionIndex = 63668;

	class TarotBookBooklet : public ::RPG::Client::Booklet
	{
	public:
		// static const ::System::UInt32 CatalogSectionSegment = 0x63; // 0x0
		// static const ::System::UInt32 CatalogMinIndex = 0x1; // 0x0
		// static const ::System::UInt32 CatalogMaxIndex = 0xC; // 0x0
		::RPG::Client::TarotBookModule* _Module; // 0x30
		::System::Boolean _IsAutoPlay; // 0x38

		::System::Void _ctor(::RPG::Client::TarotBookModule* a1, ::RPG::GameCore::Booklet::BookConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookModule*, ::RPG::GameCore::Booklet::BookConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void set_IsAutoPlay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_SET_ISAUTOPLAY_OFFSET))(this, a1);
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

		::System::Void InitForStory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_INITFORSTORY_OFFSET))(this, a1);
		}

		::System::Void InitForMainCatalog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_INITFORMAINCATALOG_OFFSET))(this, a1);
		}

		::System::Void InitForCharacter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_INITFORCHARACTER_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsCatalogSection(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CHECKISCATALOGSECTION_OFFSET))(this, a1);
		}

		static ::RPG::Client::TarotBookBooklet* Create(::RPG::Client::TarotBookModule* a1, ::System::String* a2)
		{
			return ((::RPG::Client::TarotBookBooklet*(*)(::RPG::Client::TarotBookModule*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 GetCharacterIDByChapterID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHARACTERIDBYCHAPTERID_OFFSET))(this, a1);
		}

		::RPG::Client::TarotBookCharacter* GetCharacterByChapterID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TarotBookCharacter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHARACTERBYCHAPTERID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetChapterMainCatalogTitle(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERMAINCATALOGTITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetChapterSubCatalogTitle(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERSUBCATALOGTITLE_OFFSET))(this, a1);
		}

		::System::String* GetChapterCatalogIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERCATALOGICONPATH_OFFSET))(this, a1);
		}

		::System::String* GetChapterIndexIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERINDEXICONPATH_OFFSET))(this, a1);
		}

		::System::String* GetSectionIndexIconPath(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETSECTIONINDEXICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean CheckChapterHasUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CHECKCHAPTERHASUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean CheckSectionCanEnter(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CHECKSECTIONCANENTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShownSectionIDsInCurrentChapter()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETSHOWNSECTIONIDSINCURRENTCHAPTER_OFFSET))(this);
		}

		::RPG::Client::BookletSectionState GetSectionState(::System::UInt32 a1)
		{
			return ((::RPG::Client::BookletSectionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETSECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Boolean CheckSpreadHasRead(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CHECKSPREADHASREAD_OFFSET))(this, a1);
		}

		::System::UInt32 GetStoryIDBySectionID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETSTORYIDBYSECTIONID_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsShowCodeMark(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_CHECKISSHOWCODEMARK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetChapterTitle(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETCHAPTERTITLE_OFFSET))(this, a1);
		}

		::System::Boolean TryConsumeUnlockHintFlag(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_TRYCONSUMEUNLOCKHINTFLAG_OFFSET))(this, a1);
		}

		::System::Void OnSpreadHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_ONSPREADHASREAD_OFFSET))(this);
		}

		::System::Void OnSectionHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_ONSECTIONHASREAD_OFFSET))(this);
		}

		::Struct_2_10B9ACD0BDABD4D7 GetSentence(::System::UInt32 a1)
		{
			return ((::Struct_2_10B9ACD0BDABD4D7(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET_GETSENTENCE_OFFSET))(this, a1);
		}

		::System::Boolean _CheckSectionCanRead(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CHECKSECTIONCANREAD_OFFSET))(this, a1);
		}

		static ::System::UInt32 _ConvertSectionIDToStoryID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTSECTIONIDTOSTORYID_OFFSET))(a1);
		}

		static ::System::UInt32 _ConvertCharacterIDToChapterID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTCHARACTERIDTOCHAPTERID_OFFSET))(a1);
		}

		static ::System::UInt32 _ConvertChapterIDToCharacterID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTCHAPTERIDTOCHARACTERID_OFFSET))(a1);
		}

		static ::System::UInt32 _ConvertStoryIDToSectionID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CONVERTSTORYIDTOSECTIONID_OFFSET))(a1);
		}

		static ::System::Boolean _CheckSectionIsCatalog(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET__CHECKSECTIONISCATALOG_OFFSET))(a1);
		}

		::System::Boolean __iFixBaseProxy_get_HasPreSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_HASPRESECTION_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_get_HasNextSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GET_HASNEXTSECTION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_set_IsAutoPlay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_SET_ISAUTOPLAY_OFFSET))(this, a1);
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

		::RPG::Client::BookletSectionState __iFixBaseProxy_GetSectionState(::System::UInt32 a1)
		{
			return ((::RPG::Client::BookletSectionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETSECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_CheckSpreadHasRead(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_CHECKSPREADHASREAD_OFFSET))(this, a1);
		}

		::RPG::Client::TextID __iFixBaseProxy_GetChapterTitle(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETCHAPTERTITLE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnSpreadHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_ONSPREADHASREAD_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSectionHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_ONSECTIONHASREAD_OFFSET))(this);
		}

		::Struct_2_10B9ACD0BDABD4D7 __iFixBaseProxy_GetSentence(::System::UInt32 a1)
		{
			return ((::Struct_2_10B9ACD0BDABD4D7(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKBOOKLET___IFIXBASEPROXY_GETSENTENCE_OFFSET))(this, a1);
		}
	};
}
