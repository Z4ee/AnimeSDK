#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckPermissionParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckPermissionResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CHECKPERMISSION_OFFSET UNITYSDK_OFFSET(0x1C6E2C00)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CHECKPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1C6E2130)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1C6DC180)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONCHECKPERMISSIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C6E1CE0)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONCHECKPRIVILEGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C6E17E0)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONRESOLVEPRIVILEGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C6E1890)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_RESOLVEPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1C6E24B0)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6E3370)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D21E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelOnlineServices_TypeDefinitionIndex = 46998;

	class HoYoChannelOnlineServices : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_checkPermissionLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x51700);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult** StaticGet_s_checkPrivilegeResult()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x51708);
		}
		static ::System::Object** StaticGet_s_privilegeLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x51710);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>*>** StaticGet_s_privilegeCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x51718);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_privilegeTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x51720);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult*>*>** StaticGet_s_checkPermissionCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x51728);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_checkPermissionTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x51730);
		}
		// static const ::System::Double PRIVILEGE_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double CHECK_PERMISSION_TIMEOUT_SECONDS; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult* CheckPrivilege(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CHECKPRIVILEGE_OFFSET))(this, a1);
		}

		static ::System::Void OnCheckPrivilegeCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONCHECKPRIVILEGECALLBACK_OFFSET))(a1, a2);
		}

		::System::Void ResolvePrivilege(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_RESOLVEPRIVILEGE_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnResolvePrivilegeCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONRESOLVEPRIVILEGECALLBACK_OFFSET))(a1, a2);
		}

		::System::Void CheckPermission(::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CHECKPERMISSION_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnCheckPermissionCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONCHECKPERMISSIONCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}
	};
}
