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

#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CHECKPERMISSION_OFFSET UNITYSDK_OFFSET(0x1CC6A5B0)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CHECKPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1CC69D30)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1CC6AB80)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONCHECKPERMISSIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC69990)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONCHECKPRIVILEGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC69520)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONRESOLVEPRIVILEGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC695F0)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES_RESOLVEPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1CC69FE0)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC6B620)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC6B610)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelOnlineServices_TypeDefinitionIndex = 36923;

	class HoYoChannelOnlineServices : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>*>** StaticGet_s_privilegeCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x286E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_checkPermissionTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x286E8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult** StaticGet_s_checkPrivilegeResult()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x286F0);
		}
		static ::System::Object** StaticGet_s_privilegeLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x286F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult*>*>** StaticGet_s_checkPermissionCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x28700);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_privilegeTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x28708);
		}
		static ::System::Object** StaticGet_s_checkPermissionLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelOnlineServices_TypeDefinitionIndex)->GetStaticField(0x28710);
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

		::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult* CheckPrivilege(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* param)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CHECKPRIVILEGE_OFFSET))(this, param);
		}

		static ::System::Void OnCheckPrivilegeCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONCHECKPRIVILEGECALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		::System::Void ResolvePrivilege(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_RESOLVEPRIVILEGE_OFFSET))(this, param, callback);
		}

		static ::System::Void OnResolvePrivilegeCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONRESOLVEPRIVILEGECALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		::System::Void CheckPermission(::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelCheckPermissionResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CHECKPERMISSION_OFFSET))(this, param, callback);
		}

		static ::System::Void OnCheckPermissionCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_ONCHECKPERMISSIONCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}
	};
}
