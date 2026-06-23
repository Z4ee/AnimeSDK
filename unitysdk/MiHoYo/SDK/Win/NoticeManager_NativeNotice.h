#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/NativeTask.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B356F20)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_ISNATIVETASKSWITCHENABLE_OFFSET UNITYSDK_OFFSET(0x1B358080)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_ONSYNCDATATONATIVE_OFFSET UNITYSDK_OFFSET(0x1B3577F0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B357290)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCCOMBOLOGINDATATONATIVE_OFFSET UNITYSDK_OFFSET(0x1B357EE0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCCURENVCONFIGTONATIVE_OFFSET UNITYSDK_OFFSET(0x1B357880)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCGAMEROLETONATIVE_OFFSET UNITYSDK_OFFSET(0x1B357920)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCNOTICELANGTONATIVE_OFFSET UNITYSDK_OFFSET(0x1B3579A0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCNOTICEURLTONATIVE_OFFSET UNITYSDK_OFFSET(0x1B357C10)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYCHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1B3572F0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYMANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x1B3574D0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYONSETSERVERID_OFFSET UNITYSDK_OFFSET(0x1B357530)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYREQUESTREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x1B357380)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYSHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x1B3573E0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYSHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1B357450)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B358170)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B357000)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager_NativeNotice_TypeDefinitionIndex = 21143;

	class NoticeManager_NativeNotice : public ::MiHoYo::SDK::NativeTask
	{
	public:
		static ::MiHoYo::SDK::Win::NoticeManager_NativeNotice** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::Win::NoticeManager_NativeNotice**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_NativeNotice_TypeDefinitionIndex)->GetStaticField(0xB470);
		}
		// static const ::System::String* SHOW_POP_NOTICE_TASK; // 0x0
		// static const ::System::String* CHECK_POP_NOTICE_TASK; // 0x0
		// static const ::System::String* CLOSE_NOTICE_TASK; // 0x0
		// static const ::System::String* REQUEST_RED_POINT_TEXT_TASK; // 0x0
		// static const ::System::String* SHOW_LOGOUT_NOTICE_TASK; // 0x0
		// static const ::System::String* SHOW_NOTICE_TASK; // 0x0
		// static const ::System::String* ANNOUNCE_URL_FIELD; // 0x0
		// static const ::System::String* LANG_CODE_FIELD; // 0x0
		// static const ::System::String* NOTICE_ITEMS_FIELD; // 0x0
		// static const ::System::String* NOTICE_CONFIG_FIELD; // 0x0
		// static const ::System::String* COMBO_LOGIN_CONFIG_FIELD; // 0x0
		// static const ::System::String* UPDATE_NOTICE_CONFIG_MSG; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Win::NoticeManager_NativeNotice* get_Instance()
		{
			return ((::MiHoYo::SDK::Win::NoticeManager_NativeNotice*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::Win::NoticeManager_NativeNotice* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::NoticeManager_NativeNotice*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SET_INSTANCE_OFFSET))(value);
		}

		::System::Boolean TryCheckPopNotice(::System::Boolean isParseTextOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYCHECKPOPNOTICE_OFFSET))(this, isParseTextOnly);
		}

		::System::Boolean TryRequestRedPointText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYREQUESTREDPOINTTEXT_OFFSET))(this);
		}

		::System::Boolean TryShowNotice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYSHOWNOTICE_OFFSET))(this, jsonString, callback);
		}

		::System::Boolean TryShowPopNotice(::System::Boolean& bIsShow)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYSHOWPOPNOTICE_OFFSET))(this, bIsShow);
		}

		::System::Boolean TryManuallyClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYMANUALLYCLOSE_OFFSET))(this);
		}

		::System::Boolean TryOnSetServerID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYONSETSERVERID_OFFSET))(this);
		}

		::System::Void OnSyncDataToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_ONSYNCDATATONATIVE_OFFSET))(this);
		}

		::System::Void SyncGameRoleToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCGAMEROLETONATIVE_OFFSET))(this);
		}

		::System::Void SyncCurEnvConfigToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCCURENVCONFIGTONATIVE_OFFSET))(this);
		}

		::System::Void SyncNoticeLangToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCNOTICELANGTONATIVE_OFFSET))(this);
		}

		::System::Void SyncNoticeUrlToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCNOTICEURLTONATIVE_OFFSET))(this);
		}

		::System::Void SyncComboLoginDataToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCCOMBOLOGINDATATONATIVE_OFFSET))(this);
		}

		::System::Boolean IsNativeTaskSwitchEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_ISNATIVETASKSWITCHENABLE_OFFSET))(this);
		}
	};
}
