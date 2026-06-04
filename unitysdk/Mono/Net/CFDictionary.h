#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

#define MONO_NET_CFDICTIONARY_CFDICTIONARYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1AF031C0)
#define MONO_NET_CFDICTIONARY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1AF03250)
#define MONO_NET_CFDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AF03340)
#define MONO_NET_CFDICTIONARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF02E70)
#define MONO_NET_CFDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF03130)

namespace Mono::Net
{
	inline static constexpr unsigned int CFDictionary_TypeDefinitionIndex = 2400;

	class CFDictionary : public ::Mono::Net::CFObject
	{
	public:
		static ::System::IntPtr* StaticGet_ValueCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFDictionary_TypeDefinitionIndex)->GetStaticField(0x8AF0);
		}
		static ::System::IntPtr* StaticGet_KeyCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFDictionary_TypeDefinitionIndex)->GetStaticField(0x8AF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::IntPtr CFDictionaryGetValue(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_CFDICTIONARYGETVALUE_OFFSET))(a1, a2);
		}

		::System::IntPtr GetValue(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_GETVALUE_OFFSET))(this, a1);
		}

		::System::IntPtr get_Item(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_GET_ITEM_OFFSET))(this, a1);
		}
	};
}
