#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

#define MONO_NET_CFDICTIONARY_CFDICTIONARYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1C46E390)
#define MONO_NET_CFDICTIONARY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1C46E420)
#define MONO_NET_CFDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C46E510)
#define MONO_NET_CFDICTIONARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C46E040)
#define MONO_NET_CFDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46E300)

namespace Mono::Net
{
	inline static constexpr unsigned int CFDictionary_TypeDefinitionIndex = 2411;

	class CFDictionary : public ::Mono::Net::CFObject
	{
	public:
		static ::System::IntPtr* StaticGet_KeyCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFDictionary_TypeDefinitionIndex)->GetStaticField(0xCE00);
		}
		static ::System::IntPtr* StaticGet_ValueCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFDictionary_TypeDefinitionIndex)->GetStaticField(0xCE08);
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
