#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

#define MONO_NET_CFARRAY_CFARRAYGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1C46DD60)
#define MONO_NET_CFARRAY_CFARRAYGETVALUEATINDEX_OFFSET UNITYSDK_OFFSET(0x1C46DEC0)
#define MONO_NET_CFARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C46DDE0)
#define MONO_NET_CFARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C46DF50)
#define MONO_NET_CFARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C46D970)
#define MONO_NET_CFARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46D850)

namespace Mono::Net
{
	inline static constexpr unsigned int CFArray_TypeDefinitionIndex = 2406;

	class CFArray : public ::Mono::Net::CFObject
	{
	public:
		static ::System::IntPtr* StaticGet_kCFTypeArrayCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFArray_TypeDefinitionIndex)->GetStaticField(0xCDE0);
		}

		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY__CCTOR_OFFSET))();
		}

		static ::System::IntPtr CFArrayGetCount(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_CFARRAYGETCOUNT_OFFSET))(a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_GET_COUNT_OFFSET))(this);
		}

		static ::System::IntPtr CFArrayGetValueAtIndex(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_CFARRAYGETVALUEATINDEX_OFFSET))(a1, a2);
		}

		::System::IntPtr get_Item(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_CFARRAY_GET_ITEM_OFFSET))(this, a1);
		}
	};
}
