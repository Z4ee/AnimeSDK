#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryValueKind.h"
#include "unitysdk/Microsoft/Win32/RegistryValueOptions.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class RegistryKey; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MICROSOFT_WIN32_WIN32REGISTRYAPI_CLOSE_OFFSET UNITYSDK_OFFSET(0x1854B7D0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_COMBINENAME_OFFSET UNITYSDK_OFFSET(0x1854B6A0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_FLUSH_OFFSET UNITYSDK_OFFSET(0x1854B6D0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_GENERATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1854B110)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_GETBINARYVALUE_OFFSET UNITYSDK_OFFSET(0x1854B290)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x1854A610)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x1854B910)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1854A6B0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_ISHANDLEVALID_OFFSET UNITYSDK_OFFSET(0x1854A690)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_OPENSUBKEY_OFFSET UNITYSDK_OFFSET(0x1854B4E0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGCLOSEKEY_OFFSET UNITYSDK_OFFSET(0x185499D0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGENUMKEYEX_OFFSET UNITYSDK_OFFSET(0x18549B80)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGFLUSHKEY_OFFSET UNITYSDK_OFFSET(0x18549A50)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGOPENKEYEX_OFFSET UNITYSDK_OFFSET(0x18549AD0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYINFOKEY_OFFSET UNITYSDK_OFFSET(0x1854A2E0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_1_OFFSET UNITYSDK_OFFSET(0x18549F00)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_2_OFFSET UNITYSDK_OFFSET(0x1854A140)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_3_OFFSET UNITYSDK_OFFSET(0x1854A210)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_OFFSET UNITYSDK_OFFSET(0x18549E30)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_SUBKEYCOUNT_OFFSET UNITYSDK_OFFSET(0x1854B370)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1854BBB0)
#define MICROSOFT_WIN32_WIN32REGISTRYAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x185476B0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Win32RegistryApi_TypeDefinitionIndex = 111;

	class Win32RegistryApi : public ::System::Object
	{
	public:
		::System::Int32 NativeBytesPerCharacter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI__CTOR_OFFSET))(this);
		}

		static ::System::Int32 RegCloseKey(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGCLOSEKEY_OFFSET))(a1);
		}

		static ::System::Int32 RegFlushKey(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGFLUSHKEY_OFFSET))(a1);
		}

		static ::System::Int32 RegOpenKeyEx(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3, ::System::Int32 a4, ::System::IntPtr& a5)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGOPENKEYEX_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 RegEnumKeyEx(::System::IntPtr a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32& a4, ::Il2CppArray<::System::Int32>* a5, ::System::Text::StringBuilder* a6, ::Il2CppArray<::System::Int32>* a7, ::Il2CppArray<::System::Int64>* a8)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Char*, ::System::Int32&, ::Il2CppArray<::System::Int32>*, ::System::Text::StringBuilder*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGENUMKEYEX_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Int32 RegQueryValueEx(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3, ::Microsoft::Win32::RegistryValueKind& a4, ::System::IntPtr a5, ::System::Int32& a6)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::Microsoft::Win32::RegistryValueKind&, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 RegQueryValueEx_1(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3, ::Microsoft::Win32::RegistryValueKind& a4, ::Il2CppArray<::System::Byte>* a5, ::System::Int32& a6)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::Microsoft::Win32::RegistryValueKind&, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 RegQueryValueEx_2(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3, ::Microsoft::Win32::RegistryValueKind& a4, ::System::Int32& a5, ::System::Int32& a6)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::Microsoft::Win32::RegistryValueKind&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 RegQueryValueEx_3(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3, ::Microsoft::Win32::RegistryValueKind& a4, ::System::Int64& a5, ::System::Int32& a6)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::Microsoft::Win32::RegistryValueKind&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYVALUEEX_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 RegQueryInfoKey(::System::IntPtr a1, ::System::Text::StringBuilder* a2, ::Il2CppArray<::System::Int32>* a3, ::System::IntPtr a4, ::System::Int32& a5, ::Il2CppArray<::System::Int32>* a6, ::Il2CppArray<::System::Int32>* a7, ::System::Int32& a8, ::Il2CppArray<::System::Int32>* a9, ::Il2CppArray<::System::Int32>* a10, ::Il2CppArray<::System::Int32>* a11, ::Il2CppArray<::System::Int32>* a12)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Text::StringBuilder*, ::Il2CppArray<::System::Int32>*, ::System::IntPtr, ::System::Int32&, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32&, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_REGQUERYINFOKEY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::IntPtr GetHandle(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_GETHANDLE_OFFSET))(this, a1);
		}

		static ::System::Boolean IsHandleValid(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_ISHANDLEVALID_OFFSET))(a1);
		}

		::System::Object* GetValue(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2, ::System::Object* a3, ::Microsoft::Win32::RegistryValueOptions a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Object*, ::Microsoft::Win32::RegistryValueOptions))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_GETVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetBinaryValue(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2, ::Microsoft::Win32::RegistryValueKind a3, ::Il2CppArray<::System::Byte>*& a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::Microsoft::Win32::RegistryValueKind, ::Il2CppArray<::System::Byte>*&, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_GETBINARYVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 SubKeyCount(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_SUBKEYCOUNT_OFFSET))(this, a1);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_OPENSUBKEY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Flush(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_FLUSH_OFFSET))(this, a1);
		}

		::System::Void Close(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_CLOSE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetSubKeyNames(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_GETSUBKEYNAMES_OFFSET))(this, a1);
		}

		::System::Void GenerateException(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_GENERATEEXCEPTION_OFFSET))(this, a1);
		}

		::System::String* ToString(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_TOSTRING_OFFSET))(this, a1);
		}

		static ::System::String* CombineName(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::Microsoft::Win32::RegistryKey*, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32REGISTRYAPI_COMBINENAME_OFFSET))(a1, a2);
		}
	};
}
