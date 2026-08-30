#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryValueOptions.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class RegistryKey; }
namespace System { class String; }

#define MICROSOFT_WIN32_UNIXREGISTRYAPI_CLOSE_OFFSET UNITYSDK_OFFSET(0x16DDDB40)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_CREATESUBKEY_1_OFFSET UNITYSDK_OFFSET(0x16DDDCD0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_CREATESUBKEY_OFFSET UNITYSDK_OFFSET(0x16DDDAB0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_FLUSH_OFFSET UNITYSDK_OFFSET(0x16DDDAD0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x16DDDE50)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x16DDDC40)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_GETVALUE_OFFSET UNITYSDK_OFFSET(0x16DDDBA0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_ISWELLKNOWNKEY_OFFSET UNITYSDK_OFFSET(0x16DDD830)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_OPENSUBKEY_OFFSET UNITYSDK_OFFSET(0x16DDD990)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16DDDCB0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI_TOUNIX_OFFSET UNITYSDK_OFFSET(0x16DDD7D0)
#define MICROSOFT_WIN32_UNIXREGISTRYAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x16DDC390)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnixRegistryApi_TypeDefinitionIndex = 110;

	class UnixRegistryApi : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI__CTOR_OFFSET))(this);
		}

		static ::System::String* ToUnix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_TOUNIX_OFFSET))(a1);
		}

		static ::System::Boolean IsWellKnownKey(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_ISWELLKNOWNKEY_OFFSET))(a1, a2);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_OPENSUBKEY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Flush(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_FLUSH_OFFSET))(this, a1);
		}

		::System::Void Close(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_CLOSE_OFFSET))(this, a1);
		}

		::System::Object* GetValue(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2, ::System::Object* a3, ::Microsoft::Win32::RegistryValueOptions a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Object*, ::Microsoft::Win32::RegistryValueOptions))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_GETVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::String*>* GetSubKeyNames(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_GETSUBKEYNAMES_OFFSET))(this, a1);
		}

		::System::String* ToString(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_TOSTRING_OFFSET))(this, a1);
		}

		::Microsoft::Win32::RegistryKey* CreateSubKey(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_CREATESUBKEY_OFFSET))(this, a1, a2, a3);
		}

		::Microsoft::Win32::RegistryKey* CreateSubKey_1(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_CREATESUBKEY_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IntPtr GetHandle(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNIXREGISTRYAPI_GETHANDLE_OFFSET))(this, a1);
		}
	};
}
