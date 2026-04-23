#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TarotBookCharacterTag.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookCharacter_IServerAgent; }
namespace RPG::GameCore { class TarotBookCharacterLevelRow; }
namespace RPG::GameCore { class TarotBookCharacterRow; }
namespace RPG::GameCore { class TarotBookRevealedCharacterRow; }
namespace RPG::GameCore { class TarotBookRevealedIconRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKCHARACTER_CREATE_OFFSET UNITYSDK_OFFSET(0xB28AD90)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GETUNLOCKEDSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xB28AF50)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_CURRENTSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xB28A8E0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB28A9E0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB288580)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xB28A250)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_ID_OFFSET UNITYSDK_OFFSET(0xB28A840)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB28A430)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB28A5B0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAINCATALOGTITLE_OFFSET UNITYSDK_OFFSET(0xB287FF0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB28A860)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAXSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xB28A880)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB289350)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB28AD50)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB28A6F0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_RECTICONPATH_OFFSET UNITYSDK_OFFSET(0xB288260)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xB28ACD0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_STARUNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xB28AB00)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_STORYCOUNT_OFFSET UNITYSDK_OFFSET(0xB28AB30)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_SUBCATALOGTITLE_OFFSET UNITYSDK_OFFSET(0xB288170)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_TABICONPATH_OFFSET UNITYSDK_OFFSET(0xB287700)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_TAG_OFFSET UNITYSDK_OFFSET(0xB28AD70)
#define RPG_CLIENT_TAROTBOOKCHARACTER_HASCODEMARKTAG_OFFSET UNITYSDK_OFFSET(0xB289160)
#define RPG_CLIENT_TAROTBOOKCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB28AED0)
#define RPG_CLIENT_TAROTBOOKCHARACTER__REFRESHLEVELMETA_OFFSET UNITYSDK_OFFSET(0xB28AB80)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookCharacter_TypeDefinitionIndex = 62739;

	class TarotBookCharacter : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookRevealedIconRow* _RevealedIconMeta; // 0x10
		::RPG::GameCore::TarotBookCharacterRow* _Meta; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _StoryIDList; // 0x20
		::RPG::Client::TarotBookCharacter_IServerAgent* _ServerAgent; // 0x28
		::RPG::GameCore::TarotBookCharacterLevelRow* _LevelMeta; // 0x30
		::RPG::GameCore::TarotBookRevealedCharacterRow* _RevealedMeta; // 0x38

		::System::Void _ctor(::RPG::GameCore::TarotBookCharacterRow* meta, ::RPG::GameCore::TarotBookRevealedCharacterRow* revealedMeta, ::RPG::GameCore::TarotBookRevealedIconRow* revealedIconMeta, ::System::Collections::Generic::List_1<::System::UInt32>* storyIDList, ::RPG::Client::TarotBookCharacter_IServerAgent* serverAgent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookCharacterRow*, ::RPG::GameCore::TarotBookRevealedCharacterRow*, ::RPG::GameCore::TarotBookRevealedIconRow*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::TarotBookCharacter_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER__CTOR_OFFSET))(this, meta, revealedMeta, revealedIconMeta, storyIDList, serverAgent);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MaxStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAXSTARCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_CURRENTSTARCOUNT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_DESC_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_PREFABPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_MainCatalogTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAINCATALOGTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SubCatalogTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_SUBCATALOGTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StarUnlockToast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_STARUNLOCKTOAST_OFFSET))(this);
		}

		::System::Int32 get_StoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_STORYCOUNT_OFFSET))(this);
		}

		::System::Boolean get_HasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_HASUNLOCKED_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_HintID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_HINTID_OFFSET))(this);
		}

		::System::String* get_TabIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_TABICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_RectIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_RECTICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Position()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_POSITION_OFFSET))(this);
		}

		::RPG::Client::TarotBookCharacterTag get_Tag()
		{
			return ((::RPG::Client::TarotBookCharacterTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_TAG_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookCharacter* Create(::RPG::GameCore::TarotBookCharacterRow* meta, ::System::Collections::Generic::List_1<::System::UInt32>* storyIDList, ::RPG::Client::TarotBookCharacter_IServerAgent* serverAgent)
		{
			return ((::RPG::Client::TarotBookCharacter*(*)(::RPG::GameCore::TarotBookCharacterRow*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::TarotBookCharacter_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_CREATE_OFFSET))(meta, storyIDList, serverAgent);
		}

		::System::Int32 GetUnlockedStoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GETUNLOCKEDSTORYCOUNT_OFFSET))(this);
		}

		::System::Boolean HasCodeMarkTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_HASCODEMARKTAG_OFFSET))(this);
		}

		::System::Void _RefreshLevelMeta()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER__REFRESHLEVELMETA_OFFSET))(this);
		}
	};
}
