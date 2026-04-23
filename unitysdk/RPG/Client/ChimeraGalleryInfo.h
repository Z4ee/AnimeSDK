#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraData; }
namespace RPG::Client { class ChimeraGalleryActData; }
namespace RPG::Client { class ChimeraGalleryGroupedTalkData; }
namespace RPG::Client { class ChimeraGalleryTalkData; }
namespace RPG::Client { class ChimeraGalleryTalkGroupEntry; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAGALLERYINFO_GETGALLERYTALKS_OFFSET UNITYSDK_OFFSET(0xA02A760)
#define RPG_CLIENT_CHIMERAGALLERYINFO_GET_ACTSDATA_OFFSET UNITYSDK_OFFSET(0xA02A280)
#define RPG_CLIENT_CHIMERAGALLERYINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA02A2A0)
#define RPG_CLIENT_CHIMERAGALLERYINFO_SET_ACTSDATA_OFFSET UNITYSDK_OFFSET(0xA02A290)
#define RPG_CLIENT_CHIMERAGALLERYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA02B4F0)
#define RPG_CLIENT_CHIMERAGALLERYINFO__GETGALLERYTALKS_B__6_0_OFFSET UNITYSDK_OFFSET(0xA02B500)
#define RPG_CLIENT_CHIMERAGALLERYINFO__TRYGETTALKTEXT_OFFSET UNITYSDK_OFFSET(0xA02B400)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGalleryInfo_TypeDefinitionIndex = 58433;

	class ChimeraGalleryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraGalleryActData*>* _ActsData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraTalkConditionType, ::RPG::Client::ChimeraGalleryTalkGroupEntry*>* _TalkGroupEntries; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraGalleryActData*>* get_ActsData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraGalleryActData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO_GET_ACTSDATA_OFFSET))(this);
		}

		::System::Void set_ActsData(::System::Collections::Generic::List_1<::RPG::Client::ChimeraGalleryActData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraGalleryActData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO_SET_ACTSDATA_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraGalleryTalkData*>* GetGalleryTalks(::RPG::Client::ChimeraData* chimeraData)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraGalleryTalkData*>*(*)(::PVOID, ::RPG::Client::ChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO_GETGALLERYTALKS_OFFSET))(this, chimeraData);
		}

		::System::Boolean _TryGetTalkText(::System::UInt32 talkID, ::RPG::Client::TextID& text)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO__TRYGETTALKTEXT_OFFSET))(this, talkID, text);
		}

		::RPG::Client::ChimeraGalleryGroupedTalkData* _GetGalleryTalks_b__6_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::ChimeraTalkConditionType, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*> p)
		{
			return ((::RPG::Client::ChimeraGalleryGroupedTalkData*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::ChimeraTalkConditionType, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGALLERYINFO__GETGALLERYTALKS_B__6_0_OFFSET))(this, p);
		}
	};
}
