#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FontAssetConfig; }
namespace RPG::Client { class TalkOptionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA_GET_SDFTEXTASSETPATH_OFFSET UNITYSDK_OFFSET(0xD082E30)
#define RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA_SETCONFIG_OFFSET UNITYSDK_OFFSET(0xD0830A0)
#define RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA_SETOPTIONLIST_OFFSET UNITYSDK_OFFSET(0xD082F90)
#define RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD083050)
#define RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA__GETHEROAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xD083360)
#define RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA__GETSDFFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0xD082E80)

namespace RPG::Client
{
	inline static constexpr unsigned int FullScreenOptionTalkUIData_TypeDefinitionIndex = 68023;

	class FullScreenOptionTalkUIData : public ::System::Object
	{
	public:
		::System::String* HintIconPath; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* OptionList; // 0x18
		::RPG::Client::FontAssetConfig* FontConfig; // 0x20
		::RPG::Client::TextID HintText; // 0x28
		::System::Single XAxisOffset; // 0x38
		::System::Single ZAxisOffset; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_SDFTextAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA_GET_SDFTEXTASSETPATH_OFFSET))(this);
		}

		::System::Void SetOptionList(::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA_SETOPTIONLIST_OFFSET))(this, a1);
		}

		::System::Void SetConfig(::RPG::Client::TextID a1, ::System::Boolean a2, ::System::String* a3, ::System::Single a4, ::System::Single a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Boolean, ::System::String*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA_SETCONFIG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* _GetHeroAvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA__GETHEROAVATARICONPATH_OFFSET))(this);
		}

		::System::String* _GetSDFFontAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLSCREENOPTIONTALKUIDATA__GETSDFFONTASSETPATH_OFFSET))(this);
		}
	};
}
