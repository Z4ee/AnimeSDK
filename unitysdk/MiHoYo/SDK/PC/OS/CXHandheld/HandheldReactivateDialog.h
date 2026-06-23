#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C574B70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1C575920)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1C575900)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1C574960)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C5758A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1C5749D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1C574880)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C575950)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C575940)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldReactivateDialog_TypeDefinitionIndex = 20558;

	class HandheldReactivateDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldReactivateDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldReactivateDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldReactivateDialog_TypeDefinitionIndex)->GetStaticField(0x90A0);
		}
		static ::System::Boolean* StaticGet_IsAccountPlatform()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HandheldReactivateDialog_TypeDefinitionIndex)->GetStaticField(0x4500);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* FooterTextPath; // 0x0
		::System::Action* OnReactivateAccount; // 0xC0
		::System::Action* OnBack; // 0xC8
		::System::Boolean Interactable; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG__CCTOR_OFFSET))();
		}

		static ::System::Void Show(::System::Boolean isAccountPlatform)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_SHOW_OFFSET))(isAccountPlatform);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_SETINTERACTABLE_OFFSET))(interactable);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG_CANCELDIALOG_OFFSET))(this);
		}
	};
}
