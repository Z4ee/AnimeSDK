#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryValueKind.h"
#include "unitysdk/Microsoft/Win32/RegistryValueOptions.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class RegistryKey; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MICROSOFT_WIN32_WIN32REGISTRYAPI_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E111880)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_COMBINENAME_OFFSET UNITYSDK_OFFSET(0x1E111730)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E111780)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_GENERATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E111140)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_GETBINARYVALUE_OFFSET UNITYSDK_OFFSET(0x1E1112C0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x1E1108B0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x1E1119C0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1E110950)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_ISHANDLEVALID_OFFSET UNITYSDK_OFFSET(0x1E110930)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_OPENSUBKEY_OFFSET UNITYSDK_OFFSET(0x1E111530)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGCLOSEKEY_OFFSET UNITYSDK_OFFSET(0x1E10FC50)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGENUMKEYEX_OFFSET UNITYSDK_OFFSET(0x1E10FE00)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGFLUSHKEY_OFFSET UNITYSDK_OFFSET(0x1E10FCD0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGOPENKEYEX_OFFSET UNITYSDK_OFFSET(0x1E10FD50)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYINFOKEY_OFFSET UNITYSDK_OFFSET(0x1E110560)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_1_OFFSET UNITYSDK_OFFSET(0x1E110190)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_2_OFFSET UNITYSDK_OFFSET(0x1E1103E0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_3_OFFSET UNITYSDK_OFFSET(0x1E1104A0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_OFFSET UNITYSDK_OFFSET(0x1E1100D0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_SUBKEYCOUNT_OFFSET UNITYSDK_OFFSET(0x1E1113C0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E111C90)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E10E820)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Win32RegistryApi_TypeDefinitionIndex = 99;

	class Win32RegistryApi : public ::System::Object
	{
	public:
		::System::Int32 NativeBytesPerCharacter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI__CTOR_OFFSET))(this);
		}

		static ::System::Int32 RegCloseKey(::System::IntPtr keyHandle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGCLOSEKEY_OFFSET))(keyHandle);
		}

		static ::System::Int32 RegFlushKey(::System::IntPtr keyHandle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGFLUSHKEY_OFFSET))(keyHandle);
		}

		static ::System::Int32 RegOpenKeyEx(::System::IntPtr keyBase, ::System::String* keyName, ::System::IntPtr reserved, ::System::Int32 access, ::System::IntPtr& keyHandle)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGOPENKEYEX_OFFSET))(keyBase, keyName, reserved, access, keyHandle);
		}

		static ::System::Int32 RegEnumKeyEx(::System::IntPtr keyHandle, ::System::Int32 dwIndex, ::System::Char* lpName, ::System::Int32& lpcbName, ::Il2CppArray<::System::Int32>* lpReserved, ::System::Text::StringBuilder* lpClass, ::Il2CppArray<::System::Int32>* lpcbClass, ::Il2CppArray<::System::Int64>* lpftLastWriteTime)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Char*, ::System::Int32&, ::Il2CppArray<::System::Int32>*, ::System::Text::StringBuilder*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGENUMKEYEX_OFFSET))(keyHandle, dwIndex, lpName, lpcbName, lpReserved, lpClass, lpcbClass, lpftLastWriteTime);
		}

		static ::System::Int32 RegQueryValueEx(::System::IntPtr keyBase, ::System::String* valueName, ::System::IntPtr reserved, ::Microsoft::Win32::RegistryValueKind& type, ::System::IntPtr zero, ::System::Int32& dataSize)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::Microsoft::Win32::RegistryValueKind&, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_OFFSET))(keyBase, valueName, reserved, type, zero, dataSize);
		}

		static ::System::Int32 RegQueryValueEx_1(::System::IntPtr keyBase, ::System::String* valueName, ::System::IntPtr reserved, ::Microsoft::Win32::RegistryValueKind& type, ::Il2CppArray<::System::Byte>* data, ::System::Int32& dataSize)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::Microsoft::Win32::RegistryValueKind&, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_1_OFFSET))(keyBase, valueName, reserved, type, data, dataSize);
		}

		static ::System::Int32 RegQueryValueEx_2(::System::IntPtr keyBase, ::System::String* valueName, ::System::IntPtr reserved, ::Microsoft::Win32::RegistryValueKind& type, ::System::Int32& data, ::System::Int32& dataSize)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::Microsoft::Win32::RegistryValueKind&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_2_OFFSET))(keyBase, valueName, reserved, type, data, dataSize);
		}

		static ::System::Int32 RegQueryValueEx_3(::System::IntPtr keyBase, ::System::String* valueName, ::System::IntPtr reserved, ::Microsoft::Win32::RegistryValueKind& type, ::System::Int64& data, ::System::Int32& dataSize)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::Microsoft::Win32::RegistryValueKind&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_3_OFFSET))(keyBase, valueName, reserved, type, data, dataSize);
		}

		static ::System::Int32 RegQueryInfoKey(::System::IntPtr hKey, ::System::Text::StringBuilder* lpClass, ::Il2CppArray<::System::Int32>* lpcbClass, ::System::IntPtr lpReserved_MustBeZero, ::System::Int32& lpcSubKeys, ::Il2CppArray<::System::Int32>* lpcbMaxSubKeyLen, ::Il2CppArray<::System::Int32>* lpcbMaxClassLen, ::System::Int32& lpcValues, ::Il2CppArray<::System::Int32>* lpcbMaxValueNameLen, ::Il2CppArray<::System::Int32>* lpcbMaxValueLen, ::Il2CppArray<::System::Int32>* lpcbSecurityDescriptor, ::Il2CppArray<::System::Int32>* lpftLastWriteTime)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Text::StringBuilder*, ::Il2CppArray<::System::Int32>*, ::System::IntPtr, ::System::Int32&, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32&, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYINFOKEY_OFFSET))(hKey, lpClass, lpcbClass, lpReserved_MustBeZero, lpcSubKeys, lpcbMaxSubKeyLen, lpcbMaxClassLen, lpcValues, lpcbMaxValueNameLen, lpcbMaxValueLen, lpcbSecurityDescriptor, lpftLastWriteTime);
		}

		::System::IntPtr GetHandle(::Microsoft::Win32::RegistryKey* key)
		{
			return ((::System::IntPtr(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_GETHANDLE_OFFSET))(this, key);
		}

		static ::System::Boolean IsHandleValid(::Microsoft::Win32::RegistryKey* key)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_ISHANDLEVALID_OFFSET))(key);
		}

		::System::Object* GetValue(::Microsoft::Win32::RegistryKey* rkey, ::System::String* name, ::System::Object* defaultValue, ::Microsoft::Win32::RegistryValueOptions options)
		{
			return ((::System::Object*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Object*, ::Microsoft::Win32::RegistryValueOptions))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_GETVALUE_OFFSET))(this, rkey, name, defaultValue, options);
		}

		::System::Int32 GetBinaryValue(::Microsoft::Win32::RegistryKey* rkey, ::System::String* name, ::Microsoft::Win32::RegistryValueKind type, ::Il2CppArray<::System::Byte>*& data, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::Microsoft::Win32::RegistryValueKind, ::Il2CppArray<::System::Byte>*&, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_GETBINARYVALUE_OFFSET))(this, rkey, name, type, data, size);
		}

		::System::Int32 SubKeyCount(::Microsoft::Win32::RegistryKey* rkey)
		{
			return ((::System::Int32(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_SUBKEYCOUNT_OFFSET))(this, rkey);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey(::Microsoft::Win32::RegistryKey* rkey, ::System::String* keyName, ::System::Boolean writable)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_OPENSUBKEY_OFFSET))(this, rkey, keyName, writable);
		}

		::System::Void Flush(::Microsoft::Win32::RegistryKey* rkey)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_FLUSH_OFFSET))(this, rkey);
		}

		::System::Void Close(::Microsoft::Win32::RegistryKey* rkey)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_CLOSE_OFFSET))(this, rkey);
		}

		::Il2CppArray<::System::String*>* GetSubKeyNames(::Microsoft::Win32::RegistryKey* rkey)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_GETSUBKEYNAMES_OFFSET))(this, rkey);
		}

		::System::Void GenerateException(::System::Int32 errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_GENERATEEXCEPTION_OFFSET))(this, errorCode);
		}

		::System::String* ToString(::Microsoft::Win32::RegistryKey* rkey)
		{
			return ((::System::String*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_TOSTRING_OFFSET))(this, rkey);
		}

		static ::System::String* CombineName(::Microsoft::Win32::RegistryKey* rkey, ::System::String* localName)
		{
			return ((::System::String*(*)(::Microsoft::Win32::RegistryKey*, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_COMBINENAME_OFFSET))(rkey, localName);
		}
	};
}
