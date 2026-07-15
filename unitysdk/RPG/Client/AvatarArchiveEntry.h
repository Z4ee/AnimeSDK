#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

class Class_1_A1F5FB9459F860F8;
class Class_1_E12BCB4DA92581A5;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarArchiveInfoData; }
namespace RPG::Client { class AvatarStoryArchiveEntry; }
namespace RPG::Client { class AvatarVoiceArchiveEntry; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AllowedAudioLanguageRow; }
namespace RPG::GameCore { class AvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1811A030)
#define RPG_CLIENT_AVATARARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1811AC40)
#define RPG_CLIENT_AVATARARCHIVEENTRY_FETCHNEEDSHOWREDDOTVOICEENTRIES_OFFSET UNITYSDK_OFFSET(0x1811CC80)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0x1811D100)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETAVATARSKINDATA_OFFSET UNITYSDK_OFFSET(0x1811B4D0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETCOPYRIGHTAUDIOLANGUAGEROW_OFFSET UNITYSDK_OFFSET(0x1811D060)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1811D160)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETFIRSTMETTIME_OFFSET UNITYSDK_OFFSET(0x1811BB30)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETSHOWAVATARS_OFFSET UNITYSDK_OFFSET(0x1811AD30)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETSTORYENTRYLIST_OFFSET UNITYSDK_OFFSET(0x1811BDC0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETVOICEACTORAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1811B6E0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETVOICEACTORNAME_OFFSET UNITYSDK_OFFSET(0x1811B9D0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETVOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0x1811C140)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETWWISEAUDIOLANGUAGEKEY_OFFSET UNITYSDK_OFFSET(0x1811B900)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_BASICINFO_OFFSET UNITYSDK_OFFSET(0x1811D330)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0x18119F40)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_SHOULDSHOWSTORYTABREDDOT_OFFSET UNITYSDK_OFFSET(0x1811D310)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_SHOULDSHOWVOICETABREDDOT_OFFSET UNITYSDK_OFFSET(0x1811D2F0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x1811D420)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_STORYENTRYLIST_OFFSET UNITYSDK_OFFSET(0x1811A950)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_VOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0x1811A9B0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_ISSEENSWITCHCOBRAND_OFFSET UNITYSDK_OFFSET(0x1811CF60)
#define RPG_CLIENT_AVATARARCHIVEENTRY_ISUSECOPYRIGHTVOICE_OFFSET UNITYSDK_OFFSET(0x1811B830)
#define RPG_CLIENT_AVATARARCHIVEENTRY_ONSTORYTABCLICK_OFFSET UNITYSDK_OFFSET(0x1811C600)
#define RPG_CLIENT_AVATARARCHIVEENTRY_ONVOICETABCLICK_OFFSET UNITYSDK_OFFSET(0x1811C560)
#define RPG_CLIENT_AVATARARCHIVEENTRY_REFRESH_OFFSET UNITYSDK_OFFSET(0x1811A0F0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_RESET_OFFSET UNITYSDK_OFFSET(0x1811AA10)
#define RPG_CLIENT_AVATARARCHIVEENTRY_SETSEENSWITCHCOBRAND_OFFSET UNITYSDK_OFFSET(0x1811CB20)
#define RPG_CLIENT_AVATARARCHIVEENTRY_SETUSECOPYRIGHTVOICE_OFFSET UNITYSDK_OFFSET(0x1811C820)
#define RPG_CLIENT_AVATARARCHIVEENTRY_SET_SHOULDSHOWSTORYTABREDDOT_OFFSET UNITYSDK_OFFSET(0x1811D320)
#define RPG_CLIENT_AVATARARCHIVEENTRY_SET_SHOULDSHOWVOICETABREDDOT_OFFSET UNITYSDK_OFFSET(0x1811D300)
#define RPG_CLIENT_AVATARARCHIVEENTRY_SHOULDSHOWCOPYRIGHTVOICESWITCHBUTTON_OFFSET UNITYSDK_OFFSET(0x1811C6A0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1811A090)
#define RPG_CLIENT_AVATARARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1811A930)
#define RPG_CLIENT_AVATARARCHIVEENTRY__INITEXTRAENTRIES_OFFSET UNITYSDK_OFFSET(0x1811ABA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarArchiveEntry_TypeDefinitionIndex = 59663;

	class AvatarArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::RPG::Client::AvatarArchiveInfoData* _BasicInfo; // 0x20
		::Class_1_A1F5FB9459F860F8* _VoiceArchiveInfo; // 0x28
		::Class_1_E12BCB4DA92581A5* _StoryArchiveInfo; // 0x30
		::RPG::GameCore::AvatarRow* _Row; // 0x38
		::System::Boolean _ShouldShowVoiceTabRedDot_k__BackingField; // 0x40
		::System::Boolean _ShouldShowStoryTabRedDot_k__BackingField; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::System::Void Refresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_REFRESH_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_RESET_OFFSET))(this);
		}

		::System::Void Unlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_UNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_COMPARETO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetShowAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETSHOWAVATARS_OFFSET))(this);
		}

		::RPG::Client::IAvatarSkinData* GetAvatarSkinData()
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETAVATARSKINDATA_OFFSET))(this);
		}

		::System::String* GetVoiceActorAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETVOICEACTORAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::String* GetWwiseAudioLanguageKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETWWISEAUDIOLANGUAGEKEY_OFFSET))(this);
		}

		::System::String* GetVoiceActorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETVOICEACTORNAME_OFFSET))(this);
		}

		::System::String* GetFirstMetTime()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETFIRSTMETTIME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* GetStoryEntryList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETSTORYENTRYLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* GetVoiceEntryList(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETVOICEENTRYLIST_OFFSET))(this, a1, a2);
		}

		::System::Void OnVoiceTabClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_ONVOICETABCLICK_OFFSET))(this);
		}

		::System::Void OnStoryTabClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_ONSTORYTABCLICK_OFFSET))(this);
		}

		::System::Boolean ShouldShowCopyrightVoiceSwitchButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_SHOULDSHOWCOPYRIGHTVOICESWITCHBUTTON_OFFSET))(this);
		}

		::System::Boolean IsUseCopyrightVoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_ISUSECOPYRIGHTVOICE_OFFSET))(this);
		}

		::System::Void SetUseCopyrightVoice(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_SETUSECOPYRIGHTVOICE_OFFSET))(this, a1);
		}

		::System::Void SetSeenSwitchCobrand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_SETSEENSWITCHCOBRAND_OFFSET))(this);
		}

		::System::Void FetchNeedShowRedDotVoiceEntries(::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_FETCHNEEDSHOWREDDOTVOICEENTRIES_OFFSET))(this, a1);
		}

		::System::Boolean IsSeenSwitchCobrand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_ISSEENSWITCHCOBRAND_OFFSET))(this);
		}

		::RPG::GameCore::AllowedAudioLanguageRow* GetCopyrightAudioLanguageRow()
		{
			return ((::RPG::GameCore::AllowedAudioLanguageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETCOPYRIGHTAUDIOLANGUAGEROW_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType GetAvatarBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETAVATARBASETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetDamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETDAMAGETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRow* get_Row()
		{
			return ((::RPG::GameCore::AvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GET_ROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* get_StoryEntryList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GET_STORYENTRYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* get_VoiceEntryList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GET_VOICEENTRYLIST_OFFSET))(this);
		}

		::System::Boolean get_ShouldShowVoiceTabRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GET_SHOULDSHOWVOICETABREDDOT_OFFSET))(this);
		}

		::System::Void set_ShouldShowVoiceTabRedDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_SET_SHOULDSHOWVOICETABREDDOT_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldShowStoryTabRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GET_SHOULDSHOWSTORYTABREDDOT_OFFSET))(this);
		}

		::System::Void set_ShouldShowStoryTabRedDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_SET_SHOULDSHOWSTORYTABREDDOT_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarArchiveInfoData* get_BasicInfo()
		{
			return ((::RPG::Client::AvatarArchiveInfoData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GET_BASICINFO_OFFSET))(this);
		}

		::System::Int32 get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GET_SORTID_OFFSET))(this);
		}

		::System::Void _InitExtraEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY__INITEXTRAENTRIES_OFFSET))(this);
		}
	};
}
