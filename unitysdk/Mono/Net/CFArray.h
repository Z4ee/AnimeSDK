#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

#define MONO_NET_CFARRAY_CFARRAYGETCOUNT_OFFSET UNITYSDK_OFFSET(0x18657070)
#define MONO_NET_CFARRAY_CFARRAYGETVALUEATINDEX_OFFSET UNITYSDK_OFFSET(0x186571D0)
#define MONO_NET_CFARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x186570F0)
#define MONO_NET_CFARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18657260)
#define MONO_NET_CFARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18656C80)
#define MONO_NET_CFARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18656B60)

namespace Mono::Net
{
	inline static constexpr unsigned int CFArray_TypeDefinitionIndex = 2394;

	class CFArray : public ::Mono::Net::CFObject
	{
	public:
		static ::System::IntPtr* StaticGet_kCFTypeArrayCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFArray_TypeDefinitionIndex)->GetStaticField(0x4F80);
		}

		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY__CTOR_OFFSET))(this, handle, own);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY__CCTOR_OFFSET))();
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
