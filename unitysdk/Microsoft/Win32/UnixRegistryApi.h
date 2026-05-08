#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryValueOptions.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class RegistryKey; }
namespace System { class String; }

#define MICROSOFT_WIN32_UNIXREGISTRYAPI_CLOSE_OFFSET UNITYSDK_OFFSET(0x18C4C6B0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_CREATESUBKEY_1_OFFSET UNITYSDK_OFFSET(0x18C4C840)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_CREATESUBKEY_OFFSET UNITYSDK_OFFSET(0x18C4C620)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_FLUSH_OFFSET UNITYSDK_OFFSET(0x18C4C640)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x18C4C9C0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x18C4C7B0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_GETVALUE_OFFSET UNITYSDK_OFFSET(0x18C4C710)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_ISWELLKNOWNKEY_OFFSET UNITYSDK_OFFSET(0x18C4C150)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_OPENSUBKEY_OFFSET UNITYSDK_OFFSET(0x18C4C4F0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18C4C820)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_TOUNIX_OFFSET UNITYSDK_OFFSET(0x18C4C0B0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4CA10)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnixRegistryApi_TypeDefinitionIndex = 98;

	class UnixRegistryApi : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI__CTOR_OFFSET))(this);
		}

		static ::System::String* ToUnix(::System::String* keyname)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_TOUNIX_OFFSET))(keyname);
		}

		static ::System::Boolean IsWellKnownKey(::System::String* parentKeyName, ::System::String* keyname)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_ISWELLKNOWNKEY_OFFSET))(parentKeyName, keyname);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey(::Microsoft::Win32::RegistryKey* rkey, ::System::String* keyname, ::System::Boolean writable)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_OPENSUBKEY_OFFSET))(this, rkey, keyname, writable);
		}

		::System::Void Flush(::Microsoft::Win32::RegistryKey* rkey)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_FLUSH_OFFSET))(this, rkey);
		}

		::System::Void Close(::Microsoft::Win32::RegistryKey* rkey)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_CLOSE_OFFSET))(this, rkey);
		}

		::System::Object* GetValue(::Microsoft::Win32::RegistryKey* rkey, ::System::String* name, ::System::Object* default_value, ::Microsoft::Win32::RegistryValueOptions options)
		{
			return ((::System::Object*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Object*, ::Microsoft::Win32::RegistryValueOptions))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_GETVALUE_OFFSET))(this, rkey, name, default_value, options);
		}

		::Il2CppArray<::System::String*>* GetSubKeyNames(::Microsoft::Win32::RegistryKey* rkey)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_GETSUBKEYNAMES_OFFSET))(this, rkey);
		}

		::System::String* ToString(::Microsoft::Win32::RegistryKey* rkey)
		{
			return ((::System::String*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_TOSTRING_OFFSET))(this, rkey);
		}

		::Microsoft::Win32::RegistryKey* CreateSubKey(::Microsoft::Win32::RegistryKey* rkey, ::System::String* keyname, ::System::Boolean writable)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_CREATESUBKEY_OFFSET))(this, rkey, keyname, writable);
		}

		::Microsoft::Win32::RegistryKey* CreateSubKey_1(::Microsoft::Win32::RegistryKey* rkey, ::System::String* keyname, ::System::Boolean writable, ::System::Boolean is_volatile)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_CREATESUBKEY_1_OFFSET))(this, rkey, keyname, writable, is_volatile);
		}

		::System::IntPtr GetHandle(::Microsoft::Win32::RegistryKey* key)
		{
			return ((::System::IntPtr(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_GETHANDLE_OFFSET))(this, key);
		}
	};
}
