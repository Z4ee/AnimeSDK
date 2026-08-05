#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

namespace ObjCRuntimeInternal { class INativeObject; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MONO_NET_CFARRAY_CFARRAYCREATE_OFFSET UNITYSDK_OFFSET(0x1DEACAB0)
#define MONO_NET_CFARRAY_CFARRAYGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1DEAD400)
#define MONO_NET_CFARRAY_CFARRAYGETVALUEATINDEX_OFFSET UNITYSDK_OFFSET(0x1DEAD560)
#define MONO_NET_CFARRAY_CREATEARRAY_1_OFFSET UNITYSDK_OFFSET(0x1DEAD390)
#define MONO_NET_CFARRAY_CREATEARRAY_OFFSET UNITYSDK_OFFSET(0x1DEAD1E0)
#define MONO_NET_CFARRAY_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1DEACDF0)
#define MONO_NET_CFARRAY_CREATE_OFFSET UNITYSDK_OFFSET(0x1DEAD0B0)
#define MONO_NET_CFARRAY_FROMNATIVEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1DEACD80)
#define MONO_NET_CFARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DEAD480)
#define MONO_NET_CFARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DEAD5E0)
#define MONO_NET_CFARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEACB50)
#define MONO_NET_CFARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEACA30)

namespace Mono::Net
{
	inline static constexpr unsigned int CFArray_TypeDefinitionIndex = 2585;

	class CFArray : public ::Mono::Net::CFObject
	{
	public:
		static ::System::IntPtr* StaticGet_kCFTypeArrayCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFArray_TypeDefinitionIndex)->GetStaticField(0xFE0);
		}

		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY__CTOR_OFFSET))(this, handle, own);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY__CCTOR_OFFSET))();
		}

		static ::System::IntPtr CFArrayCreate(::System::IntPtr allocator, ::System::IntPtr values, ::System::IntPtr numValues, ::System::IntPtr callbacks)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_CFARRAYCREATE_OFFSET))(allocator, values, numValues, callbacks);
		}

		static ::Mono::Net::CFArray* FromNativeObjects(::Il2CppArray<::ObjCRuntimeInternal::INativeObject*>* values)
		{
			return ((::Mono::Net::CFArray*(*)(::Il2CppArray<::ObjCRuntimeInternal::INativeObject*>*))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_FROMNATIVEOBJECTS_OFFSET))(values);
		}

		static ::System::IntPtr Create(::Il2CppArray<::System::IntPtr>* values)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_CREATE_OFFSET))(values);
		}

		static ::Mono::Net::CFArray* CreateArray(::Il2CppArray<::System::IntPtr>* values)
		{
			return ((::Mono::Net::CFArray*(*)(::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_CREATEARRAY_OFFSET))(values);
		}

		static ::Mono::Net::CFArray* CreateArray_1(::Il2CppArray<::ObjCRuntimeInternal::INativeObject*>* values)
		{
			return ((::Mono::Net::CFArray*(*)(::Il2CppArray<::ObjCRuntimeInternal::INativeObject*>*))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_CREATEARRAY_1_OFFSET))(values);
		}

		static ::System::IntPtr Create_1(::Il2CppArray<::ObjCRuntimeInternal::INativeObject*>* values)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::ObjCRuntimeInternal::INativeObject*>*))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_CREATE_1_OFFSET))(values);
		}

		static ::System::IntPtr CFArrayGetCount(::System::IntPtr handle)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_CFARRAYGETCOUNT_OFFSET))(handle);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_GET_COUNT_OFFSET))(this);
		}

		static ::System::IntPtr CFArrayGetValueAtIndex(::System::IntPtr handle, ::System::IntPtr index)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_CFARRAYGETVALUEATINDEX_OFFSET))(handle, index);
		}

		::System::IntPtr get_Item(::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_GET_ITEM_OFFSET))(this, index);
		}
	};
}
