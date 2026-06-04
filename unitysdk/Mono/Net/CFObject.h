#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_NET_CFOBJECT_CFRELEASE_OFFSET UNITYSDK_OFFSET(0x1AF07B90)
#define MONO_NET_CFOBJECT_CFRETAIN_OFFSET UNITYSDK_OFFSET(0x1AF07B10)
#define MONO_NET_CFOBJECT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AF04730)
#define MONO_NET_CFOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF07C90)
#define MONO_NET_CFOBJECT_DLCLOSE_OFFSET UNITYSDK_OFFSET(0x1AF02B10)
#define MONO_NET_CFOBJECT_DLOPEN_OFFSET UNITYSDK_OFFSET(0x1AF029D0)
#define MONO_NET_CFOBJECT_DLSYM_OFFSET UNITYSDK_OFFSET(0x1AF078B0)
#define MONO_NET_CFOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AF07A80)
#define MONO_NET_CFOBJECT_GETCFOBJECTHANDLE_OFFSET UNITYSDK_OFFSET(0x1AF07950)
#define MONO_NET_CFOBJECT_GETINDIRECT_OFFSET UNITYSDK_OFFSET(0x1AF02A70)
#define MONO_NET_CFOBJECT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1AF07AF0)
#define MONO_NET_CFOBJECT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AF07C10)
#define MONO_NET_CFOBJECT_RETAIN_OFFSET UNITYSDK_OFFSET(0x1AF07A00)
#define MONO_NET_CFOBJECT_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1AF07B00)
#define MONO_NET_CFOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF02710)

namespace Mono::Net
{
	inline static constexpr unsigned int CFObject_TypeDefinitionIndex = 2394;

	class CFObject : public ::System::Object
	{
	public:
		::System::IntPtr _Handle_k__BackingField; // 0x10

		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::IntPtr dlopen(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_DLOPEN_OFFSET))(a1, a2);
		}

		static ::System::IntPtr dlsym(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_DLSYM_OFFSET))(a1, a2);
		}

		static ::System::Void dlclose(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_DLCLOSE_OFFSET))(a1);
		}

		static ::System::IntPtr GetIndirect(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_GETINDIRECT_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetCFObjectHandle(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_GETCFOBJECTHANDLE_OFFSET))(a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_FINALIZE_OFFSET))(this);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_SET_HANDLE_OFFSET))(this, a1);
		}

		static ::System::IntPtr CFRetain(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_CFRETAIN_OFFSET))(a1);
		}

		::System::Void Retain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_RETAIN_OFFSET))(this);
		}

		static ::System::Void CFRelease(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_CFRELEASE_OFFSET))(a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_RELEASE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFOBJECT_DISPOSE_1_OFFSET))(this);
		}
	};
}
