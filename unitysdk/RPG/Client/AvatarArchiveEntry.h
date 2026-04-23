#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"

class Class_1_521EF473360D9AD8;
class Class_1_F4B6CBA35594DA4E;
namespace RPG::Client { class AvatarArchiveInfoData; }
namespace RPG::Client { class AvatarPathData; }
namespace RPG::Client { class AvatarStoryArchiveEntry; }
namespace RPG::Client { class AvatarVoiceArchiveEntry; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AllowedAudioLanguageRow; }
namespace RPG::GameCore { class AvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9D684D0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D69280)
#define RPG_CLIENT_AVATARARCHIVEENTRY_FETCHNEEDSHOWREDDOTVOICEENTRIES_OFFSET UNITYSDK_OFFSET(0x9D6AEF0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0x9D6B2E0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETAVATARSKINDATA_OFFSET UNITYSDK_OFFSET(0x9D69970)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETCOPYRIGHTAUDIOLANGUAGEROW_OFFSET UNITYSDK_OFFSET(0x9D6B240)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x9D6B340)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETFIRSTMETTIME_OFFSET UNITYSDK_OFFSET(0x9D69F70)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETSHOWAVATARS_OFFSET UNITYSDK_OFFSET(0x9D69490)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETSTORYENTRYLIST_OFFSET UNITYSDK_OFFSET(0x9D6A160)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETVOICEACTORAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9D69B20)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETVOICEACTORNAME_OFFSET UNITYSDK_OFFSET(0x9D69E10)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETVOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0x9D6A460)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GETWWISEAUDIOLANGUAGEKEY_OFFSET UNITYSDK_OFFSET(0x9D69D40)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_BASICINFO_OFFSET UNITYSDK_OFFSET(0x9D6B480)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9D68370)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_SHOULDSHOWSTORYTABREDDOT_OFFSET UNITYSDK_OFFSET(0x9D6B460)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_SHOULDSHOWVOICETABREDDOT_OFFSET UNITYSDK_OFFSET(0x9D6B440)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x9D6B570)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_STORYENTRYLIST_OFFSET UNITYSDK_OFFSET(0x9D68F90)
#define RPG_CLIENT_AVATARARCHIVEENTRY_GET_VOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0x9D68FF0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_ISSEENSWITCHCOBRAND_OFFSET UNITYSDK_OFFSET(0x9D6B170)
#define RPG_CLIENT_AVATARARCHIVEENTRY_ISUSECOPYRIGHTVOICE_OFFSET UNITYSDK_OFFSET(0x9D69C70)
#define RPG_CLIENT_AVATARARCHIVEENTRY_ONSTORYTABCLICK_OFFSET UNITYSDK_OFFSET(0x9D6A8B0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_ONVOICETABCLICK_OFFSET UNITYSDK_OFFSET(0x9D6A810)
#define RPG_CLIENT_AVATARARCHIVEENTRY_REFRESH_OFFSET UNITYSDK_OFFSET(0x9D685E0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_RESET_OFFSET UNITYSDK_OFFSET(0x9D69050)
#define RPG_CLIENT_AVATARARCHIVEENTRY_SETSEENSWITCHCOBRAND_OFFSET UNITYSDK_OFFSET(0x9D6ADD0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_SETUSECOPYRIGHTVOICE_OFFSET UNITYSDK_OFFSET(0x9D6AAD0)
#define RPG_CLIENT_AVATARARCHIVEENTRY_SET_SHOULDSHOWSTORYTABREDDOT_OFFSET UNITYSDK_OFFSET(0x9D6B470)
#define RPG_CLIENT_AVATARARCHIVEENTRY_SET_SHOULDSHOWVOICETABREDDOT_OFFSET UNITYSDK_OFFSET(0x9D6B450)
#define RPG_CLIENT_AVATARARCHIVEENTRY_SHOULDSHOWCOPYRIGHTVOICESWITCHBUTTON_OFFSET UNITYSDK_OFFSET(0x9D6A950)
#define RPG_CLIENT_AVATARARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9D68580)
#define RPG_CLIENT_AVATARARCHIVEENTRY__CREATEAVATAR_1_OFFSET UNITYSDK_OFFSET(0x9D696C0)
#define RPG_CLIENT_AVATARARCHIVEENTRY__CREATEAVATAR_OFFSET UNITYSDK_OFFSET(0x9D69810)
#define RPG_CLIENT_AVATARARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x9D68E90)
#define RPG_CLIENT_AVATARARCHIVEENTRY__INITEXTRAENTRIES_OFFSET UNITYSDK_OFFSET(0x9D691E0)
#define RPG_CLIENT_AVATARARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9D6B6B0)
#define RPG_CLIENT_AVATARARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D6B720)
#define RPG_CLIENT_AVATARARCHIVEENTRY___IFIXBASEPROXY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x9D6B730)
#define RPG_CLIENT_AVATARARCHIVEENTRY___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0x9D6B630)
#define RPG_CLIENT_AVATARARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9D6B6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarArchiveEntry_TypeDefinitionIndex = 57589;

	class AvatarArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::RPG::GameCore::AvatarRow* _Row; // 0x20
		::Class_1_F4B6CBA35594DA4E* _StoryArchiveInfo; // 0x28
		::RPG::Client::AvatarArchiveInfoData* _BasicInfo; // 0x30
		::Class_1_521EF473360D9AD8* _VoiceArchiveInfo; // 0x38
		::System::Boolean _ShouldShowStoryTabRedDot_k__BackingField; // 0x40
		::System::Boolean _ShouldShowVoiceTabRedDot_k__BackingField; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::System::Void Refresh(::System::Boolean fromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_REFRESH_OFFSET))(this, fromLogin);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_RESET_OFFSET))(this);
		}

		::System::Void Unlock(::System::Boolean fromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_UNLOCK_OFFSET))(this, fromLogin);
		}

		::System::Boolean CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_COMPARETO_OFFSET))(this, obj);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetShowAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETSHOWAVATARS_OFFSET))(this);
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

		::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* GetStoryEntryList(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETSTORYENTRYLIST_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* GetVoiceEntryList(::System::Boolean isBattleVoice, ::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GETVOICEENTRYLIST_OFFSET))(this, isBattleVoice, avatarID);
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

		::System::Void SetUseCopyrightVoice(::System::Boolean useCopyrightVoice)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_SETUSECOPYRIGHTVOICE_OFFSET))(this, useCopyrightVoice);
		}

		::System::Void SetSeenSwitchCobrand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_SETSEENSWITCHCOBRAND_OFFSET))(this);
		}

		::System::Void FetchNeedShowRedDotVoiceEntries(::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* voiceEntryList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_FETCHNEEDSHOWREDDOTVOICEENTRIES_OFFSET))(this, voiceEntryList);
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

		::System::Void set_ShouldShowVoiceTabRedDot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_SET_SHOULDSHOWVOICETABREDDOT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldShowStoryTabRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_GET_SHOULDSHOWSTORYTABREDDOT_OFFSET))(this);
		}

		::System::Void set_ShouldShowStoryTabRedDot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY_SET_SHOULDSHOWSTORYTABREDDOT_OFFSET))(this, value);
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

		::RPG::Client::IAvatarInfoProvider* _CreateAvatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY__CREATEAVATAR_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* _CreateAvatar_1(::RPG::Client::AvatarPathData* avatarPathData)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY__CREATEAVATAR_1_OFFSET))(this, avatarPathData);
		}

		::System::Void __iFixBaseProxy_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY___IFIXBASEPROXY_RESET_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Unlock(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Int32 __iFixBaseProxy_CompareTo(::RPG::Client::BaseArchiveEntry* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEENTRY___IFIXBASEPROXY_GET_SORTID_OFFSET))(this);
		}
	};
}
