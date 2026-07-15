#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryHive.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace Microsoft::Win32 { class IRegistryApi; }
namespace Microsoft::Win32::SafeHandles { class SafeRegistryHandle; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class IOException; }

#define MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYNAMELENGTH_OFFSET UNITYSDK_OFFSET(0x155CBA90)
#define MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYSTILLVALID_OFFSET UNITYSDK_OFFSET(0x155CB7C0)
#define MICROSOFT_WIN32_REGISTRYKEY_CLOSE_OFFSET UNITYSDK_OFFSET(0x155CB340)
#define MICROSOFT_WIN32_REGISTRYKEY_CREATEMARKEDFORDELETIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x155CC090)
#define MICROSOFT_WIN32_REGISTRYKEY_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x155CBF80)
#define MICROSOFT_WIN32_REGISTRYKEY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155CB2A0)
#define MICROSOFT_WIN32_REGISTRYKEY_FLUSH_OFFSET UNITYSDK_OFFSET(0x155CB4B0)
#define MICROSOFT_WIN32_REGISTRYKEY_GETHIVENAME_OFFSET UNITYSDK_OFFSET(0x155CB150)
#define MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x155CBC90)
#define MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x155CBAF0)
#define MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x155CBAE0)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x155CB5F0)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_HIVE_OFFSET UNITYSDK_OFFSET(0x155C84D0)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_INTERNALHANDLE_OFFSET UNITYSDK_OFFSET(0x155CBF70)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_ISROOT_OFFSET UNITYSDK_OFFSET(0x155C84C0)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x155CB4A0)
#define MICROSOFT_WIN32_REGISTRYKEY_ISEQUALS_OFFSET UNITYSDK_OFFSET(0x155CB220)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_1_OFFSET UNITYSDK_OFFSET(0x155CB8A0)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_OFFSET UNITYSDK_OFFSET(0x155CB890)
#define MICROSOFT_WIN32_REGISTRYKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x155CBE00)
#define MICROSOFT_WIN32_REGISTRYKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x155CB060)
#define MICROSOFT_WIN32_REGISTRYKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x155CB0D0)
#define MICROSOFT_WIN32_REGISTRYKEY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x155C6610)
#define MICROSOFT_WIN32_REGISTRYKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x155CAFE0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryKey_TypeDefinitionIndex = 104;

	class RegistryKey : public ::System::MarshalByRefObject
	{
	public:
		static ::Microsoft::Win32::IRegistryApi** StaticGet_RegistryApi()
		{
			return (::Microsoft::Win32::IRegistryApi**)Il2CppClass::FromTypeDefinitionIndex(RegistryKey_TypeDefinitionIndex)->GetStaticField(0x1AC0);
		}
		::System::String* qname; // 0x18
		::System::Object* handle; // 0x20
		::System::Object* hive; // 0x28
		::Microsoft::Win32::SafeHandles::SafeRegistryHandle* safe_handle; // 0x30
		::System::Boolean isWritable; // 0x38
		::System::Boolean isRemoteRoot; // 0x39

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Microsoft::Win32::RegistryHive a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryHive))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Microsoft::Win32::RegistryHive a1, ::System::IntPtr a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryHive, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Object* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean IsEquals(::Microsoft::Win32::RegistryKey* a1, ::Microsoft::Win32::RegistryKey* a2)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::RegistryKey*, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ISEQUALS_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_DISPOSE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_NAME_OFFSET))(this);
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

		::Microsoft::Win32::RegistryKey* OpenSubKey(::System::String* a1)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_OFFSET))(this, a1);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_1_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValue(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_OFFSET))(this, a1);
		}

		::System::Object* GetValue_1(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_1_OFFSET))(this, a1, a2);
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

		::System::Object* get_InternalHandle()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_INTERNALHANDLE_OFFSET))(this);
		}

		::System::Void AssertKeyStillValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYSTILLVALID_OFFSET))(this);
		}

		::System::Void AssertKeyNameLength(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYNAMELENGTH_OFFSET))(this, a1);
		}

		static ::System::String* DecodeString(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_DECODESTRING_OFFSET))(a1);
		}

		static ::System::IO::IOException* CreateMarkedForDeletionException()
		{
			return ((::System::IO::IOException*(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CREATEMARKEDFORDELETIONEXCEPTION_OFFSET))();
		}

		static ::System::String* GetHiveName(::Microsoft::Win32::RegistryHive a1)
		{
			return ((::System::String*(*)(::Microsoft::Win32::RegistryHive))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETHIVENAME_OFFSET))(a1);
		}
	};
}
