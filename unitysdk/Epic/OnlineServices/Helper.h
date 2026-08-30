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

#define EPIC_ONLINESERVICES_HELPER_ADDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D67BC90)
#define EPIC_ONLINESERVICES_HELPER_ADDSTATICCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D690770)
#define EPIC_ONLINESERVICES_HELPER_GETALLOCATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1D68F1A0)
#define EPIC_ONLINESERVICES_HELPER_TRYALLOCATE_OFFSET UNITYSDK_OFFSET(0x1D68FBD0)
#define EPIC_ONLINESERVICES_HELPER_TRYASSIGNNOTIFICATIONIDTOCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D68A1D0)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_1_OFFSET UNITYSDK_OFFSET(0x1D68F4D0)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_2_OFFSET UNITYSDK_OFFSET(0x1D68FA40)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_3_OFFSET UNITYSDK_OFFSET(0x1D690870)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_4_OFFSET UNITYSDK_OFFSET(0x1D68F220)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_5_OFFSET UNITYSDK_OFFSET(0x1D68F290)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_6_OFFSET UNITYSDK_OFFSET(0x1D68F8C0)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_7_OFFSET UNITYSDK_OFFSET(0x1D68F3B0)
#define EPIC_ONLINESERVICES_HELPER_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x1D68F770)
#define EPIC_ONLINESERVICES_HELPER_TRYFETCH_OFFSET UNITYSDK_OFFSET(0x1D68F670)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_1_OFFSET UNITYSDK_OFFSET(0x1D68FF30)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_2_OFFSET UNITYSDK_OFFSET(0x1D688520)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_3_OFFSET UNITYSDK_OFFSET(0x1D68FFA0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_OFFSET UNITYSDK_OFFSET(0x1D68FDC0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALCOPY_OFFSET UNITYSDK_OFFSET(0x1D68FD80)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALDISPOSE_OFFSET UNITYSDK_OFFSET(0x1D67AD20)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_1_OFFSET UNITYSDK_OFFSET(0x1D68F230)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_2_OFFSET UNITYSDK_OFFSET(0x1D68F2A0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_3_OFFSET UNITYSDK_OFFSET(0x1D68F470)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_4_OFFSET UNITYSDK_OFFSET(0x1D684890)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_5_OFFSET UNITYSDK_OFFSET(0x1D67F760)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_OFFSET UNITYSDK_OFFSET(0x1D67F9F0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_1_OFFSET UNITYSDK_OFFSET(0x1D68F790)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_2_OFFSET UNITYSDK_OFFSET(0x1D67FB00)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_3_OFFSET UNITYSDK_OFFSET(0x1D68F9D0)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_4_OFFSET UNITYSDK_OFFSET(0x1D67A940)
#define EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_OFFSET UNITYSDK_OFFSET(0x1D67A810)
#define EPIC_ONLINESERVICES_HELPER_TRYRELEASE_OFFSET UNITYSDK_OFFSET(0x1D690050)
#define EPIC_ONLINESERVICES_HELPER_TRYREMOVECALLBACKBYNOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x1D68ADB0)
#define EPIC_ONLINESERVICES_HELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6908E0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Helper_TypeDefinitionIndex = 44913;

	class Helper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Epic::OnlineServices::Helper_DelegateHolder*>** StaticGet_s_StaticCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Epic::OnlineServices::Helper_DelegateHolder*>**)Il2CppClass::FromTypeDefinitionIndex(Helper_TypeDefinitionIndex)->GetStaticField(0x29C60);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Epic::OnlineServices::Helper_Allocation*>** StaticGet_s_Allocations()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Epic::OnlineServices::Helper_Allocation*>**)Il2CppClass::FromTypeDefinitionIndex(Helper_TypeDefinitionIndex)->GetStaticField(0x29C68);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Epic::OnlineServices::Helper_DelegateHolder*>** StaticGet_s_Callbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Epic::OnlineServices::Helper_DelegateHolder*>**)Il2CppClass::FromTypeDefinitionIndex(Helper_TypeDefinitionIndex)->GetStaticField(0x29C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetAllocationCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_GETALLOCATIONCOUNT_OFFSET))();
		}

		static ::System::Boolean TryMarshalGet(::System::Int32 a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalGet_1(::System::Boolean a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalGet_2(::System::Int64 a1, ::System::Nullable_1<::System::DateTimeOffset>& a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Nullable_1<::System::DateTimeOffset>&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalGet_3(::Il2CppArray<::System::Byte>* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalGet_4(::System::IntPtr a1, ::System::Object*& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Object*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalGet_5(::System::IntPtr a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALGET_5_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalSet(::System::IntPtr& a1, ::Epic::OnlineServices::Handle* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::Epic::OnlineServices::Handle*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalSet_1(::System::Int64& a1, ::System::Nullable_1<::System::DateTimeOffset> a2)
		{
			return ((::System::Boolean(*)(::System::Int64&, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalSet_2(::System::Int32& a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalSet_3(::Il2CppArray<::System::Byte>*& a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*&, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryMarshalSet_4(::System::IntPtr& a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALSET_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalCopy(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALCOPY_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalAllocate(::System::IntPtr& a1, ::System::Int32 a2, ::Epic::OnlineServices::Helper_Allocation*& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::Int32, ::Epic::OnlineServices::Helper_Allocation*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryMarshalAllocate_1(::System::IntPtr& a1, ::System::UInt32 a2, ::Epic::OnlineServices::Helper_Allocation*& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::UInt32, ::Epic::OnlineServices::Helper_Allocation*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryMarshalAllocate_2(::System::IntPtr& a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalAllocate_3(::System::IntPtr& a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALALLOCATE_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryMarshalDispose(::System::IntPtr& a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYMARSHALDISPOSE_OFFSET))(a1);
		}

		static ::System::Void AddCallback(::System::IntPtr& a1, ::System::Object* a2, ::System::Delegate* a3, ::System::Delegate* a4, ::Il2CppArray<::System::Delegate*>* a5)
		{
			return ((::System::Void(*)(::System::IntPtr&, ::System::Object*, ::System::Delegate*, ::System::Delegate*, ::Il2CppArray<::System::Delegate*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ADDCALLBACK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AddStaticCallback(::System::String* a1, ::System::Delegate* a2, ::System::Delegate* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Delegate*, ::System::Delegate*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ADDSTATICCALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryAssignNotificationIdToCallback(::System::IntPtr a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYASSIGNNOTIFICATIONIDTOCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryRemoveCallbackByNotificationId(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYREMOVECALLBACKBYNOTIFICATIONID_OFFSET))(a1);
		}

		static ::System::Boolean TryAllocate(::System::IntPtr& a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr&, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYALLOCATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryRelease(::System::IntPtr& a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYRELEASE_OFFSET))(a1);
		}

		static ::System::Boolean TryFetch(::System::IntPtr a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYFETCH_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryConvert(::Epic::OnlineServices::Handle* a1, ::System::IntPtr& a2)
		{
			return ((::System::Boolean(*)(::Epic::OnlineServices::Handle*, ::System::IntPtr&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryConvert_1(::Il2CppArray<::System::Byte>* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryConvert_2(::System::String* a1, ::Il2CppArray<::System::Byte>*& a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*&, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryConvert_3(::System::String* a1, ::Il2CppArray<::System::Byte>*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryConvert_4(::System::Int32 a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryConvert_5(::System::Boolean a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_5_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryConvert_6(::System::Nullable_1<::System::DateTimeOffset> a1, ::System::Int64& a2)
		{
			return ((::System::Boolean(*)(::System::Nullable_1<::System::DateTimeOffset>, ::System::Int64&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_6_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryConvert_7(::System::Int64 a1, ::System::Nullable_1<::System::DateTimeOffset>& a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Nullable_1<::System::DateTimeOffset>&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_TRYCONVERT_7_OFFSET))(a1, a2);
		}
	};
}
