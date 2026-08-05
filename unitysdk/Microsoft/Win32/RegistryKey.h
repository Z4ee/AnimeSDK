#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryHive.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace Microsoft::Win32 { class IRegistryApi; }
namespace Microsoft::Win32::SafeHandles { class SafeRegistryHandle; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class IOException; }

#define MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYNAMELENGTH_OFFSET UNITYSDK_OFFSET(0x1E10F310)
#define MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYSTILLVALID_OFFSET UNITYSDK_OFFSET(0x1E10EF90)
#define MICROSOFT_WIN32_REGISTRYKEY_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E10EB20)
#define MICROSOFT_WIN32_REGISTRYKEY_CREATEMARKEDFORDELETIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E10FA70)
#define MICROSOFT_WIN32_REGISTRYKEY_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x1E10F8F0)
#define MICROSOFT_WIN32_REGISTRYKEY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E10EAC0)
#define MICROSOFT_WIN32_REGISTRYKEY_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E10EC70)
#define MICROSOFT_WIN32_REGISTRYKEY_GETHIVENAME_OFFSET UNITYSDK_OFFSET(0x1E10E960)
#define MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x1E10F530)
#define MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1E10F390)
#define MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1E10F380)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1E10EDB0)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_HIVE_OFFSET UNITYSDK_OFFSET(0x1E10F830)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_ISROOT_OFFSET UNITYSDK_OFFSET(0x1E10EDA0)
#define MICROSOFT_WIN32_REGISTRYKEY_ISEQUALS_OFFSET UNITYSDK_OFFSET(0x1E10EA40)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_1_OFFSET UNITYSDK_OFFSET(0x1E10F010)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_OFFSET UNITYSDK_OFFSET(0x1E10F000)
#define MICROSOFT_WIN32_REGISTRYKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E10F6B0)
#define MICROSOFT_WIN32_REGISTRYKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10E7B0)
#define MICROSOFT_WIN32_REGISTRYKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E10E8C0)
#define MICROSOFT_WIN32_REGISTRYKEY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E10EA30)
#define MICROSOFT_WIN32_REGISTRYKEY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E10FB50)
#define MICROSOFT_WIN32_REGISTRYKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E10E830)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryKey_TypeDefinitionIndex = 92;

	class RegistryKey : public ::System::MarshalByRefObject
	{
	public:
		static ::Microsoft::Win32::IRegistryApi** StaticGet_RegistryApi()
		{
			return (::Microsoft::Win32::IRegistryApi**)Il2CppClass::FromTypeDefinitionIndex(RegistryKey_TypeDefinitionIndex)->GetStaticField(0x12D0);
		}
		::System::String* qname; // 0x18
		::Microsoft::Win32::SafeHandles::SafeRegistryHandle* safe_handle; // 0x20
		::System::Object* hive; // 0x28
		::System::Object* handle; // 0x30
		::System::Boolean isWritable; // 0x38
		::System::Boolean isRemoteRoot; // 0x39

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Microsoft::Win32::RegistryHive hiveId)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryHive))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CTOR_OFFSET))(this, hiveId);
		}

		::System::Void _ctor_1(::Microsoft::Win32::RegistryHive hiveId, ::System::IntPtr keyHandle, ::System::Boolean remoteRoot)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryHive, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CTOR_1_OFFSET))(this, hiveId, keyHandle, remoteRoot);
		}

		::System::Void _ctor_2(::System::Object* data, ::System::String* keyName, ::System::Boolean writable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CTOR_2_OFFSET))(this, data, keyName, writable);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CTOR_3_OFFSET))(this);
		}

		static ::System::Boolean IsEquals(::Microsoft::Win32::RegistryKey* a, ::Microsoft::Win32::RegistryKey* b)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::RegistryKey*, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ISEQUALS_OFFSET))(a, b);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_DISPOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_FLUSH_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CLOSE_OFFSET))(this);
		}

		::Microsoft::Win32::SafeHandles::SafeRegistryHandle* get_Handle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeRegistryHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_HANDLE_OFFSET))(this);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey(::System::String* name)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_OFFSET))(this, name);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey_1(::System::String* name, ::System::Boolean writable)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_1_OFFSET))(this, name, writable);
		}

		::System::Object* GetValue(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_OFFSET))(this, name);
		}

		::System::Object* GetValue_1(::System::String* name, ::System::Object* defaultValue)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_1_OFFSET))(this, name, defaultValue);
		}

		::Il2CppArray<::System::String*>* GetSubKeyNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYNAMES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_ISROOT_OFFSET))(this);
		}

		::Microsoft::Win32::RegistryHive get_Hive()
		{
			return ((::Microsoft::Win32::RegistryHive(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_HIVE_OFFSET))(this);
		}

		::System::Void AssertKeyStillValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYSTILLVALID_OFFSET))(this);
		}

		::System::Void AssertKeyNameLength(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYNAMELENGTH_OFFSET))(this, name);
		}

		static ::System::String* DecodeString(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_DECODESTRING_OFFSET))(data);
		}

		static ::System::IO::IOException* CreateMarkedForDeletionException()
		{
			return ((::System::IO::IOException*(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CREATEMARKEDFORDELETIONEXCEPTION_OFFSET))();
		}

		static ::System::String* GetHiveName(::Microsoft::Win32::RegistryHive hive)
		{
			return ((::System::String*(*)(::Microsoft::Win32::RegistryHive))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETHIVENAME_OFFSET))(hive);
		}
	};
}
