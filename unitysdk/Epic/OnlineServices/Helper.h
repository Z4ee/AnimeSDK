#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class Handle; }
namespace Epic::OnlineServices { class Helper_Allocation; }
namespace Epic::OnlineServices { class Helper_DelegateHolder; }
namespace Epic::OnlineServices { class ISettable; }
namespace System { class Delegate; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPIC_ONLINESERVICES_HELPER_ADDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8E754D0)
#define EPIC_ONLINESERVICES_HELPER_ADDSTATICCALLBACK_OFFSET UNITYSDK_OFFSET(0x8E8E9D0)
#define EPIC_ONLINESERVICES_HELPER_GETALLOCATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x8E8D3C0)
#define EPIC_ONLINESERVICES_HELPER_TRYALLOCATE_OFFSET UNITYSDK_OFFSET(0x8E8DFB0)
#define EPIC_ONLINESERVICES_HELPER_TRYASSIGNNOTIFICATIONIDTOCALLBACK_OFFSET UNITYSDK_OFFSET(0x8E861A0)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_1_OFFSET UNITYSDK_OFFSET(0x8E8D8A0)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_2_OFFSET UNITYSDK_OFFSET(0x8E8DE20)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_3_OFFSET UNITYSDK_OFFSET(0x8E8EAD0)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_4_OFFSET UNITYSDK_OFFSET(0x8E8D440)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_5_OFFSET UNITYSDK_OFFSET(0x8E8D4B0)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_6_OFFSET UNITYSDK_OFFSET(0x8E8DCA0)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_7_OFFSET UNITYSDK_OFFSET(0x8E8D5D0)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x8E8DB50)
#define EPIC_ONLINESERVICES_HELPER_TRYFETCH_OFFSET UNITYSDK_OFFSET(0x8E8DA50)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_1_OFFSET UNITYSDK_OFFSET(0x8E8E310)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_2_OFFSET UNITYSDK_OFFSET(0x8E84560)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_3_OFFSET UNITYSDK_OFFSET(0x8E8E380)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_OFFSET UNITYSDK_OFFSET(0x8E8E1A0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALCOPY_OFFSET UNITYSDK_OFFSET(0x8E8E160)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALDISPOSE_OFFSET UNITYSDK_OFFSET(0x8E745D0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_1_OFFSET UNITYSDK_OFFSET(0x8E8D450)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_2_OFFSET UNITYSDK_OFFSET(0x8E8D4C0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_3_OFFSET UNITYSDK_OFFSET(0x8E8D690)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_4_OFFSET UNITYSDK_OFFSET(0x8E80960)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_5_OFFSET UNITYSDK_OFFSET(0x8E7AF20)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_OFFSET UNITYSDK_OFFSET(0x8E7B1B0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_1_OFFSET UNITYSDK_OFFSET(0x8E8DB70)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_2_OFFSET UNITYSDK_OFFSET(0x8E7B2C0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_3_OFFSET UNITYSDK_OFFSET(0x8E8DDB0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_4_OFFSET UNITYSDK_OFFSET(0x8E74200)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_OFFSET UNITYSDK_OFFSET(0x8E740D0)
#define EPIC_ONLINESERVICES_HELPER_TRYRELEASE_OFFSET UNITYSDK_OFFSET(0x8E8E430)
#define EPIC_ONLINESERVICES_HELPER_TRYREMOVECALLBACKBYNOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x8E86DC0)
#define EPIC_ONLINESERVICES_HELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E8EB40)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Helper_TypeDefinitionIndex = 41067;

	class Helper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Epic::OnlineServices::Helper_DelegateHolder*>** StaticGet_s_Callbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Epic::OnlineServices::Helper_DelegateHolder*>**)Il2CppClass::FromTypeDefinitionIndex(Helper_TypeDefinitionIndex)->GetStaticField(0x4D7D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Epic::OnlineServices::Helper_Allocation*>** StaticGet_s_Allocations()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Epic::OnlineServices::Helper_Allocation*>**)Il2CppClass::FromTypeDefinitionIndex(Helper_TypeDefinitionIndex)->GetStaticField(0x4D7D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Epic::OnlineServices::Helper_DelegateHolder*>** StaticGet_s_StaticCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Epic::OnlineServices::Helper_DelegateHolder*>**)Il2CppClass::FromTypeDefinitionIndex(Helper_TypeDefinitionIndex)->GetStaticField(0x4D7E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetAllocationCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_GETALLOCATIONCOUNT_OFFSET))();
		}

		static ::System::Boolean TryMarshalGet(::System::Int32 source, ::System::Boolean& target)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_OFFSET))(source, target);
		}

		static ::System::Boolean TryMarshalGet_1(::System::Boolean source, ::System::Int32& target)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_1_OFFSET))(source, target);
		}

		static ::System::Boolean TryMarshalGet_2(::System::Int64 source, ::System::Nullable_1<::System::DateTimeOffset>& target)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Nullable_1<::System::DateTimeOffset>&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_2_OFFSET))(source, target);
		}

		static ::System::Boolean TryMarshalGet_3(::Il2CppArray<::System::Byte>* source, ::System::String*& target)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_3_OFFSET))(source, target);
		}

		static ::System::Boolean TryMarshalGet_4(::System::IntPtr source, ::System::Object*& target)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Object*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_4_OFFSET))(source, target);
		}

		static ::System::Boolean TryMarshalGet_5(::System::IntPtr source, ::System::String*& target)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_5_OFFSET))(source, target);
		}

		static ::System::Boolean TryMarshalSet(::System::IntPtr& target, ::Epic::OnlineServices::Handle* source)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::Epic::OnlineServices::Handle*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_OFFSET))(target, source);
		}

		static ::System::Boolean TryMarshalSet_1(::System::Int64& target, ::System::Nullable_1<::System::DateTimeOffset> source)
		{
			return ((::System::Boolean(*)(::System::Int64&, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_1_OFFSET))(target, source);
		}

		static ::System::Boolean TryMarshalSet_2(::System::Int32& target, ::System::Boolean source)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_2_OFFSET))(target, source);
		}

		static ::System::Boolean TryMarshalSet_3(::Il2CppArray<::System::Byte>*& target, ::System::String* source, ::System::Int32 length)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*&, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_3_OFFSET))(target, source, length);
		}

		static ::System::Boolean TryMarshalSet_4(::System::IntPtr& target, ::System::String* source)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_4_OFFSET))(target, source);
		}

		static ::System::Boolean TryMarshalCopy(::System::IntPtr target, ::Il2CppArray<::System::Byte>* source)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALCOPY_OFFSET))(target, source);
		}

		static ::System::Boolean TryMarshalAllocate(::System::IntPtr& target, ::System::Int32 size, ::Epic::OnlineServices::Helper_Allocation*& allocation)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::Int32, ::Epic::OnlineServices::Helper_Allocation*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_OFFSET))(target, size, allocation);
		}

		static ::System::Boolean TryMarshalAllocate_1(::System::IntPtr& target, ::System::UInt32 size, ::Epic::OnlineServices::Helper_Allocation*& allocation)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::UInt32, ::Epic::OnlineServices::Helper_Allocation*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_1_OFFSET))(target, size, allocation);
		}

		static ::System::Boolean TryMarshalAllocate_2(::System::IntPtr& target, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_2_OFFSET))(target, size);
		}

		static ::System::Boolean TryMarshalAllocate_3(::System::IntPtr& target, ::System::UInt32 size)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_3_OFFSET))(target, size);
		}

		static ::System::Boolean TryMarshalDispose(::System::IntPtr& value)
		{
			return ((::System::Boolean(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALDISPOSE_OFFSET))(value);
		}

		static ::System::Void AddCallback(::System::IntPtr& clientDataAddress, ::System::Object* clientData, ::System::Delegate* publicDelegate, ::System::Delegate* privateDelegate, ::Il2CppArray<::System::Delegate*>* structDelegates)
		{
			return ((::System::Void(*)(::System::IntPtr&, ::System::Object*, ::System::Delegate*, ::System::Delegate*, ::Il2CppArray<::System::Delegate*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ADDCALLBACK_OFFSET))(clientDataAddress, clientData, publicDelegate, privateDelegate, structDelegates);
		}

		static ::System::Void AddStaticCallback(::System::String* key, ::System::Delegate* publicDelegate, ::System::Delegate* privateDelegate)
		{
			return ((::System::Void(*)(::System::String*, ::System::Delegate*, ::System::Delegate*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ADDSTATICCALLBACK_OFFSET))(key, publicDelegate, privateDelegate);
		}

		static ::System::Boolean TryAssignNotificationIdToCallback(::System::IntPtr clientDataAddress, ::System::UInt64 notificationId)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYASSIGNNOTIFICATIONIDTOCALLBACK_OFFSET))(clientDataAddress, notificationId);
		}

		static ::System::Boolean TryRemoveCallbackByNotificationId(::System::UInt64 notificationId)
		{
			return ((::System::Boolean(*)(::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYREMOVECALLBACKBYNOTIFICATIONID_OFFSET))(notificationId);
		}

		static ::System::Boolean TryAllocate(::System::IntPtr& target, ::System::String* source)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYALLOCATE_OFFSET))(target, source);
		}

		static ::System::Boolean TryRelease(::System::IntPtr& target)
		{
			return ((::System::Boolean(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYRELEASE_OFFSET))(target);
		}

		static ::System::Boolean TryFetch(::System::IntPtr source, ::System::String*& target)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYFETCH_OFFSET))(source, target);
		}

		static ::System::Boolean TryConvert(::Epic::OnlineServices::Handle* source, ::System::IntPtr& target)
		{
			return ((::System::Boolean(*)(::Epic::OnlineServices::Handle*, ::System::IntPtr&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_OFFSET))(source, target);
		}

		static ::System::Boolean TryConvert_1(::Il2CppArray<::System::Byte>* source, ::System::String*& target)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_1_OFFSET))(source, target);
		}

		static ::System::Boolean TryConvert_2(::System::String* source, ::Il2CppArray<::System::Byte>*& target, ::System::Int32 length)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*&, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_2_OFFSET))(source, target, length);
		}

		static ::System::Boolean TryConvert_3(::System::String* source, ::Il2CppArray<::System::Byte>*& target)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_3_OFFSET))(source, target);
		}

		static ::System::Boolean TryConvert_4(::System::Int32 source, ::System::Boolean& target)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_4_OFFSET))(source, target);
		}

		static ::System::Boolean TryConvert_5(::System::Boolean source, ::System::Int32& target)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_5_OFFSET))(source, target);
		}

		static ::System::Boolean TryConvert_6(::System::Nullable_1<::System::DateTimeOffset> source, ::System::Int64& target)
		{
			return ((::System::Boolean(*)(::System::Nullable_1<::System::DateTimeOffset>, ::System::Int64&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_6_OFFSET))(source, target);
		}

		static ::System::Boolean TryConvert_7(::System::Int64 source, ::System::Nullable_1<::System::DateTimeOffset>& target)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Nullable_1<::System::DateTimeOffset>&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_7_OFFSET))(source, target);
		}
	};
}
