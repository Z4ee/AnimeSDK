#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

#define MONO_NET_CFDICTIONARY_CFDICTIONARYGETVALUE_OFFSET UNITYSDK_OFFSET(0x186576A0)
#define MONO_NET_CFDICTIONARY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x18657730)
#define MONO_NET_CFDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18657820)
#define MONO_NET_CFDICTIONARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18657350)
#define MONO_NET_CFDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x18657610)

namespace Mono::Net
{
	inline static constexpr unsigned int CFDictionary_TypeDefinitionIndex = 2399;

	class CFDictionary : public ::Mono::Net::CFObject
	{
	public:
		static ::System::IntPtr* StaticGet_KeyCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFDictionary_TypeDefinitionIndex)->GetStaticField(0x4F90);
		}
		static ::System::IntPtr* StaticGet_ValueCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFDictionary_TypeDefinitionIndex)->GetStaticField(0x4F98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY__CTOR_OFFSET))(this, handle, own);
		}

		static ::System::IntPtr CFDictionaryGetValue(::System::IntPtr handle, ::System::IntPtr key)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_CFDICTIONARYGETVALUE_OFFSET))(handle, key);
		}

		::System::IntPtr GetValue(::System::IntPtr key)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_GETVALUE_OFFSET))(this, key);
		}

		::System::IntPtr get_Item(::System::IntPtr key)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}
	};
}
