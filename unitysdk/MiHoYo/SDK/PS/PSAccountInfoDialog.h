#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"

namespace MiHoYo::SDK::PS { class UserGameServerInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x175E3BA0)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x175E5BB0)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x175E5B90)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x175BF590)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x175E5B50)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x175BE660)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x175BD340)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x175E5BD0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSAccountInfoDialog_TypeDefinitionIndex = 7692;

	class PSAccountInfoDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSAccountInfoDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::PSAccountInfoDialog**)Il2CppClass::FromTypeDefinitionIndex(PSAccountInfoDialog_TypeDefinitionIndex)->GetStaticField(0x1CF20);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* FooterTextPath; // 0x0
		// static const ::System::String* PSNAccountTextPath; // 0x0
		// static const ::System::String* HoYoAccountTextPath; // 0x0
		// static const ::System::String* RoleServerPath; // 0x0
		// static const ::System::String* RoleServerLabelTextPath; // 0x0
		// static const ::System::String* RoleServerValueTextPath; // 0x0
		// static const ::System::String* RoleUIDPath; // 0x0
		// static const ::System::String* RoleUIDLabelTextPath; // 0x0
		// static const ::System::String* RoleUIDValueTextPath; // 0x0
		// static const ::System::String* RoleNamePath; // 0x0
		// static const ::System::String* RoleNameLabelTextPath; // 0x0
		// static const ::System::String* RoleNameValueTextPath; // 0x0
		// static const ::System::String* RoleLevelPath; // 0x0
		// static const ::System::String* RoleLevelLabelTextPath; // 0x0
		// static const ::System::String* RoleLevelValueTextPath; // 0x0
		// static const ::System::String* EmptyRoleTipPath; // 0x0
		::System::Action* OnContinueToBind; // 0xB0
		::System::Action* OnSwitchHoYoAccount; // 0xB8
		::System::Boolean Interactable; // 0xC0
		::System::String* PSNAccountName; // 0xC8
		::System::String* HoYoAccountName; // 0xD0
		::MiHoYo::SDK::PS::UserGameServerInfo* CurrentServerInfo; // 0xD8
		::MiHoYo::SDK::PS::UserGameServerInfo* OtherServerInfo; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* psnAccountName, ::System::String* hoyoAccountName, ::System::String* currentZone, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::UserGameServerInfo*>* userGameInfoList)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::UserGameServerInfo*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_SHOW_OFFSET))(psnAccountName, hoyoAccountName, currentZone, userGameInfoList);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_SETINTERACTABLE_OFFSET))(interactable);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_CANCELDIALOG_OFFSET))(this);
		}
	};
}
