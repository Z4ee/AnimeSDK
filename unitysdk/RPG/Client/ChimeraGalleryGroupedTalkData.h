#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraGalleryTalkGroupEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAGALLERYGROUPEDTALKDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x93BC240)
#define RPG_CLIENT_CHIMERAGALLERYGROUPEDTALKDATA_GET_TALKTEXTS_OFFSET UNITYSDK_OFFSET(0x93BC250)
#define RPG_CLIENT_CHIMERAGALLERYGROUPEDTALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93BC260)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGalleryGroupedTalkData_TypeDefinitionIndex = 51494;

	class ChimeraGalleryGroupedTalkData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _TalkTexts_k__BackingField; // 0x10
		::RPG::Client::ChimeraGalleryTalkGroupEntry* _Config_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::ChimeraGalleryTalkGroupEntry* config, ::System::Collections::Generic::List_1<::RPG::Client::TextID>* talkTexts)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraGalleryTalkGroupEntry*, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYGROUPEDTALKDATA__CTOR_OFFSET))(this, config, talkTexts);
		}

		::RPG::Client::ChimeraGalleryTalkGroupEntry* get_Config()
		{
			return ((::RPG::Client::ChimeraGalleryTalkGroupEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYGROUPEDTALKDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* get_TalkTexts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYGROUPEDTALKDATA_GET_TALKTEXTS_OFFSET))(this);
		}
	};
}
