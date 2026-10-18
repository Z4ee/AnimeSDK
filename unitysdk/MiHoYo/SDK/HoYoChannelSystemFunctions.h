#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowMessageDialogParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowMessageDialogResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowProfileCardParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowProfileCardResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowTextEntryParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowTextEntryResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0xAF94C00)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_ONSHOWERRORDIALOGCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF9F4D0)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_ONSHOWMESSAGEDIALOGCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF9F080)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_ONSHOWPROFILECARDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF9EC30)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_ONSHOWTEXTENTRYCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF9E7E0)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_SHOWERRORDIALOG_OFFSET UNITYSDK_OFFSET(0xAFA0D30)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_SHOWMESSAGEDIALOG_OFFSET UNITYSDK_OFFSET(0xAFA0680)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_SHOWPROFILECARD_OFFSET UNITYSDK_OFFSET(0xAF9FFD0)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_SHOWTEXTENTRY_OFFSET UNITYSDK_OFFSET(0xAF9F920)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0xAFA1420)
#define MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xAF8AAC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSystemFunctions_TypeDefinitionIndex = 46558;

	class HoYoChannelSystemFunctions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*>*>** StaticGet_s_showMessageDialogCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x21660);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult*>*>** StaticGet_s_showProfileCardCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x21668);
		}
		static ::System::Object** StaticGet_s_showMessageDialogLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x21670);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryResult*>*>** StaticGet_s_showTextEntryCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x21678);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_showMessageDialogTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x21680);
		}
		static ::System::Object** StaticGet_s_showTextEntryLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x21688);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_showProfileCardTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x21690);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_showErrorDialogTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x21698);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_showTextEntryTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x216A0);
		}
		static ::System::Object** StaticGet_s_showProfileCardLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x216A8);
		}
		static ::System::Object** StaticGet_s_showErrorDialogLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x216B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>*>** StaticGet_s_showErrorDialogCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSystemFunctions_TypeDefinitionIndex)->GetStaticField(0x216B8);
		}
		// static const ::System::Double SHOW_TEXT_ENTRY_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double SHOW_PROFILE_CARD_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double SHOW_MESSAGE_DIALOG_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double SHOW_ERROR_DIALOG_TIMEOUT_SECONDS; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS__CCTOR_OFFSET))();
		}

		::System::Void ShowTextEntry(::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_SHOWTEXTENTRY_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnShowTextEntryCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_ONSHOWTEXTENTRYCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void ShowProfileCard(::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowProfileCardResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_SHOWPROFILECARD_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnShowProfileCardCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_ONSHOWPROFILECARDCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void ShowMessageDialog(::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_SHOWMESSAGEDIALOG_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnShowMessageDialogCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_ONSHOWMESSAGEDIALOGCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void ShowErrorDialog(::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_SHOWERRORDIALOG_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnShowErrorDialogCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_ONSHOWERRORDIALOGCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSYSTEMFUNCTIONS_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}
	};
}
