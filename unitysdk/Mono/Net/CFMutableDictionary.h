#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFDictionary.h"

#define MONO_NET_CFMUTABLEDICTIONARY_CFDICTIONARYCREATEMUTABLE_OFFSET UNITYSDK_OFFSET(0x1E27BB30)
#define MONO_NET_CFMUTABLEDICTIONARY_CFDICTIONARYSETVALUE_OFFSET UNITYSDK_OFFSET(0x1E27B960)
#define MONO_NET_CFMUTABLEDICTIONARY_CREATE_OFFSET UNITYSDK_OFFSET(0x1E27B9F0)
#define MONO_NET_CFMUTABLEDICTIONARY_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1E27B8D0)
#define MONO_NET_CFMUTABLEDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E27B7E0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFMutableDictionary_TypeDefinitionIndex = 2592;

	class CFMutableDictionary : public ::Mono::Net::CFDictionary
	{
	public:
		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFMUTABLEDICTIONARY__CTOR_OFFSET))(this, handle, own);
		}

		::System::Void SetValue(::System::IntPtr key, ::System::IntPtr val)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFMUTABLEDICTIONARY_SETVALUE_OFFSET))(this, key, val);
		}

		static ::Mono::Net::CFMutableDictionary* Create()
		{
			return ((::Mono::Net::CFMutableDictionary*(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFMUTABLEDICTIONARY_CREATE_OFFSET))();
		}

		static ::System::Void CFDictionarySetValue(::System::IntPtr handle, ::System::IntPtr key, ::System::IntPtr val)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFMUTABLEDICTIONARY_CFDICTIONARYSETVALUE_OFFSET))(handle, key, val);
		}

		static ::System::IntPtr CFDictionaryCreateMutable(::System::IntPtr allocator, ::System::IntPtr capacity, ::System::IntPtr keyCallback, ::System::IntPtr valueCallbacks)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFMUTABLEDICTIONARY_CFDICTIONARYCREATEMUTABLE_OFFSET))(allocator, capacity, keyCallback, valueCallbacks);
		}
	};
}
