#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

namespace Mono::Net { class CFMutableDictionary; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MONO_NET_CFDICTIONARY_CFDICTIONARYCREATECOPY_OFFSET UNITYSDK_OFFSET(0x1D610150)
#define MONO_NET_CFDICTIONARY_CFDICTIONARYCREATEMUTABLECOPY_OFFSET UNITYSDK_OFFSET(0x1D610400)
#define MONO_NET_CFDICTIONARY_CFDICTIONARYCREATE_OFFSET UNITYSDK_OFFSET(0x1D60FAE0)
#define MONO_NET_CFDICTIONARY_CFDICTIONARYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1D6100D0)
#define MONO_NET_CFDICTIONARY_COPY_OFFSET UNITYSDK_OFFSET(0x1D6101D0)
#define MONO_NET_CFDICTIONARY_FROMKEYSANDOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D60FBB0)
#define MONO_NET_CFDICTIONARY_FROMOBJECTANDKEY_OFFSET UNITYSDK_OFFSET(0x1D60F960)
#define MONO_NET_CFDICTIONARY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1D610490)
#define MONO_NET_CFDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D610580)
#define MONO_NET_CFDICTIONARY_MUTABLECOPY_OFFSET UNITYSDK_OFFSET(0x1D6102C0)
#define MONO_NET_CFDICTIONARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D60F620)
#define MONO_NET_CFDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D60F8E0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFDictionary_TypeDefinitionIndex = 2591;

	class CFDictionary : public ::Mono::Net::CFObject
	{
	public:
		static ::System::IntPtr* StaticGet_KeyCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFDictionary_TypeDefinitionIndex)->GetStaticField(0x13A0);
		}
		static ::System::IntPtr* StaticGet_ValueCallbacks()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFDictionary_TypeDefinitionIndex)->GetStaticField(0x13A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY__CTOR_OFFSET))(this, handle, own);
		}

		static ::Mono::Net::CFDictionary* FromObjectAndKey(::System::IntPtr obj, ::System::IntPtr key)
		{
			return ((::Mono::Net::CFDictionary*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_FROMOBJECTANDKEY_OFFSET))(obj, key);
		}

		static ::Mono::Net::CFDictionary* FromKeysAndObjects(::System::Collections::Generic::IList_1<::System::Tuple_2<::System::IntPtr, ::System::IntPtr>*>* items)
		{
			return ((::Mono::Net::CFDictionary*(*)(::System::Collections::Generic::IList_1<::System::Tuple_2<::System::IntPtr, ::System::IntPtr>*>*))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_FROMKEYSANDOBJECTS_OFFSET))(items);
		}

		static ::System::IntPtr CFDictionaryCreate(::System::IntPtr allocator, ::Il2CppArray<::System::IntPtr>* keys, ::Il2CppArray<::System::IntPtr>* vals, ::System::IntPtr len, ::System::IntPtr keyCallbacks, ::System::IntPtr valCallbacks)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::Il2CppArray<::System::IntPtr>*, ::Il2CppArray<::System::IntPtr>*, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_CFDICTIONARYCREATE_OFFSET))(allocator, keys, vals, len, keyCallbacks, valCallbacks);
		}

		static ::System::IntPtr CFDictionaryGetValue(::System::IntPtr handle, ::System::IntPtr key)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_CFDICTIONARYGETVALUE_OFFSET))(handle, key);
		}

		static ::System::IntPtr CFDictionaryCreateCopy(::System::IntPtr allocator, ::System::IntPtr handle)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_CFDICTIONARYCREATECOPY_OFFSET))(allocator, handle);
		}

		::Mono::Net::CFDictionary* Copy()
		{
			return ((::Mono::Net::CFDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_COPY_OFFSET))(this);
		}

		::Mono::Net::CFMutableDictionary* MutableCopy()
		{
			return ((::Mono::Net::CFMutableDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_MUTABLECOPY_OFFSET))(this);
		}

		static ::System::IntPtr CFDictionaryCreateMutableCopy(::System::IntPtr allocator, ::System::IntPtr capacity, ::System::IntPtr theDict)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDICTIONARY_CFDICTIONARYCREATEMUTABLECOPY_OFFSET))(allocator, capacity, theDict);
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
