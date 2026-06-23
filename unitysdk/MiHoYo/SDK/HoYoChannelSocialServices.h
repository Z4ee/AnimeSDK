#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelBlockListParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelBlockListResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelSocialUpdateResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelUserProfileParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelUserProfileResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_BLOCKLIST_OFFSET UNITYSDK_OFFSET(0x1B627E70)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1B628D30)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CLEARSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B628CC0)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_FRIENDLIST_OFFSET UNITYSDK_OFFSET(0x1B6278A0)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONBLOCKLISTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B627020)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONFRIENDLISTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B626C90)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B627740)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONUSERPROFILECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B6273B0)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B628A10)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_USERPROFILE_OFFSET UNITYSDK_OFFSET(0x1B628440)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B629DE0)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B629DD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSocialServices_TypeDefinitionIndex = 36934;

	class HoYoChannelSocialServices : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_friendListLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x28890);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_userProfileTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x28898);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>*>** StaticGet_s_friendListCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x288A0);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>** StaticGet_s_socialUpdateCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x288A8);
		}
		static ::System::Object** StaticGet_s_userProfileLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x288B0);
		}
		static ::System::Object** StaticGet_s_blockListLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x288B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_friendListTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x288C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>*>** StaticGet_s_blockListCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x288C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_blockListTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x288D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>*>** StaticGet_s_userProfileCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x288D8);
		}
		static ::System::Boolean* StaticGet_s_socialUpdateRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelSocialServices_TypeDefinitionIndex)->GetStaticField(0x8910);
		}
		// static const ::System::Double FRIEND_LIST_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double BLOCK_LIST_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double USER_PROFILE_TIMEOUT_SECONDS; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES__CCTOR_OFFSET))();
		}

		::System::Void FriendList(::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_FRIENDLIST_OFFSET))(this, param, callback);
		}

		static ::System::Void OnFriendListCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONFRIENDLISTCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		::System::Void BlockList(::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_BLOCKLIST_OFFSET))(this, param, callback);
		}

		static ::System::Void OnBlockListCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONBLOCKLISTCALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		::System::Void UserProfile(::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_USERPROFILE_OFFSET))(this, param, callback);
		}

		static ::System::Void OnUserProfileCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONUSERPROFILECALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		::System::Void RegisterSocialUpdateCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_REGISTERSOCIALUPDATECALLBACK_OFFSET))(this, callback);
		}

		static ::System::Void ClearSocialUpdateCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CLEARSOCIALUPDATECALLBACK_OFFSET))();
		}

		static ::System::Void OnSocialUpdateCallback(::System::Int32 resultCode, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONSOCIALUPDATECALLBACK_OFFSET))(resultCode, jsonResponse);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}
	};
}
