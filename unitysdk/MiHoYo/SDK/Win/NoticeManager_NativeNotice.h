#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/NativeTask.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B89F640)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_ISNATIVETASKSWITCHENABLE_OFFSET UNITYSDK_OFFSET(0x1B8A8470)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_ONSYNCDATATONATIVE_OFFSET UNITYSDK_OFFSET(0x1B8A7BB0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B8A7B70)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCCOMBOLOGINDATATONATIVE_OFFSET UNITYSDK_OFFSET(0x1B8A8260)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCCURENVCONFIGTONATIVE_OFFSET UNITYSDK_OFFSET(0x1B8A7C80)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCGAMEROLETONATIVE_OFFSET UNITYSDK_OFFSET(0x1B8A7CF0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCNOTICELANGTONATIVE_OFFSET UNITYSDK_OFFSET(0x1B8A7D40)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SYNCNOTICEURLTONATIVE_OFFSET UNITYSDK_OFFSET(0x1B8A7FB0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYCHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1B89F6F0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYMANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x1B8A16D0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYONSETSERVERID_OFFSET UNITYSDK_OFFSET(0x1B8A51C0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYREQUESTREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x1B8A0570)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYSHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x1B8A15B0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYSHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1B8A1600)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8A8530)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A7900)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager_NativeNotice_TypeDefinitionIndex = 9338;

	class NoticeManager_NativeNotice : public ::MiHoYo::SDK::NativeTask
	{
	public:
		static ::MiHoYo::SDK::Win::NoticeManager_NativeNotice** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::Win::NoticeManager_NativeNotice**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_NativeNotice_TypeDefinitionIndex)->GetStaticField(0x33F40);
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

		static ::System::Void set_Instance(::MiHoYo::SDK::Win::NoticeManager_NativeNotice* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::NoticeManager_NativeNotice*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Boolean TryCheckPopNotice(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYCHECKPOPNOTICE_OFFSET))(this, a1);
		}

		::System::Boolean TryRequestRedPointText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYREQUESTREDPOINTTEXT_OFFSET))(this);
		}

		::System::Boolean TryShowNotice(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYSHOWNOTICE_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryShowPopNotice(::System::Boolean& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE_TRYSHOWPOPNOTICE_OFFSET))(this, a1);
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
