#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryValueOptions.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class RegistryKey; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Security { class SecurityElement; }

#define MICROSOFT_WIN32_KEYHANDLER_CLEANVOLATILEKEYS_OFFSET UNITYSDK_OFFSET(0x1A091320)
#define MICROSOFT_WIN32_KEYHANDLER_COMBINENAME_OFFSET UNITYSDK_OFFSET(0x1A0929F0)
#define MICROSOFT_WIN32_KEYHANDLER_DROP_OFFSET UNITYSDK_OFFSET(0x1A094460)
#define MICROSOFT_WIN32_KEYHANDLER_ENSURE_OFFSET UNITYSDK_OFFSET(0x1A0926F0)
#define MICROSOFT_WIN32_KEYHANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A096470)
#define MICROSOFT_WIN32_KEYHANDLER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A095360)
#define MICROSOFT_WIN32_KEYHANDLER_GETREGISTEREDBOOTTIME_OFFSET UNITYSDK_OFFSET(0x1A093670)
#define MICROSOFT_WIN32_KEYHANDLER_GETROOTFROMDIR_OFFSET UNITYSDK_OFFSET(0x1A093EE0)
#define MICROSOFT_WIN32_KEYHANDLER_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x1A094C90)
#define MICROSOFT_WIN32_KEYHANDLER_GETSYSTEMBOOTTIME_OFFSET UNITYSDK_OFFSET(0x1A0932C0)
#define MICROSOFT_WIN32_KEYHANDLER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0949E0)
#define MICROSOFT_WIN32_KEYHANDLER_GETVOLATILEDIR_OFFSET UNITYSDK_OFFSET(0x1A091960)
#define MICROSOFT_WIN32_KEYHANDLER_GET_ISMARKEDFORDELETION_OFFSET UNITYSDK_OFFSET(0x1A094C00)
#define MICROSOFT_WIN32_KEYHANDLER_GET_MACHINESTORE_OFFSET UNITYSDK_OFFSET(0x1A093C90)
#define MICROSOFT_WIN32_KEYHANDLER_GET_USERSTORE_OFFSET UNITYSDK_OFFSET(0x1A093BA0)
#define MICROSOFT_WIN32_KEYHANDLER_LOADKEY_OFFSET UNITYSDK_OFFSET(0x1A0920E0)
#define MICROSOFT_WIN32_KEYHANDLER_LOAD_OFFSET UNITYSDK_OFFSET(0x1A0919F0)
#define MICROSOFT_WIN32_KEYHANDLER_LOOKUP_OFFSET UNITYSDK_OFFSET(0x1A094040)
#define MICROSOFT_WIN32_KEYHANDLER_PROBE_OFFSET UNITYSDK_OFFSET(0x1A092A80)
#define MICROSOFT_WIN32_KEYHANDLER_SAVEREGISTEREDBOOTTIME_OFFSET UNITYSDK_OFFSET(0x1A0939C0)
#define MICROSOFT_WIN32_KEYHANDLER_SAVE_OFFSET UNITYSDK_OFFSET(0x1A095440)
#define MICROSOFT_WIN32_KEYHANDLER_VALUEEXISTS_OFFSET UNITYSDK_OFFSET(0x1A096380)
#define MICROSOFT_WIN32_KEYHANDLER_VOLATILEKEYEXISTS_OFFSET UNITYSDK_OFFSET(0x1A092F30)
#define MICROSOFT_WIN32_KEYHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A091130)
#define MICROSOFT_WIN32_KEYHANDLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0915E0)
#define MICROSOFT_WIN32_KEYHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0915D0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int KeyHandler_TypeDefinitionIndex = 97;

	class KeyHandler : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_user_store()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KeyHandler_TypeDefinitionIndex)->GetStaticField(0xCE0);
		}
		static ::System::String** StaticGet_machine_store()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KeyHandler_TypeDefinitionIndex)->GetStaticField(0xCE8);
		}
		static ::System::Collections::Hashtable** StaticGet_dir_to_handler()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(KeyHandler_TypeDefinitionIndex)->GetStaticField(0xCF0);
		}
		static ::System::Collections::Hashtable** StaticGet_key_to_handler()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(KeyHandler_TypeDefinitionIndex)->GetStaticField(0xCF8);
		}
		::System::String* ActualDir; // 0x10
		::System::String* file; // 0x18
		::System::Collections::Hashtable* values; // 0x20
		::System::String* Dir; // 0x28
		::System::Boolean IsVolatile; // 0x30
		::System::Boolean dirty; // 0x31

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Microsoft::Win32::RegistryKey* rkey, ::System::String* basedir)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER__CTOR_OFFSET))(this, rkey, basedir);
		}

		::System::Void _ctor_1(::Microsoft::Win32::RegistryKey* rkey, ::System::String* basedir, ::System::Boolean is_volatile)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER__CTOR_1_OFFSET))(this, rkey, basedir, is_volatile);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_LOAD_OFFSET))(this);
		}

		::System::Void LoadKey(::System::Security::SecurityElement* se)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_LOADKEY_OFFSET))(this, se);
		}

		::Microsoft::Win32::RegistryKey* Ensure(::Microsoft::Win32::RegistryKey* rkey, ::System::String* extra, ::System::Boolean writable, ::System::Boolean is_volatile)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_ENSURE_OFFSET))(this, rkey, extra, writable, is_volatile);
		}

		::Microsoft::Win32::RegistryKey* Probe(::Microsoft::Win32::RegistryKey* rkey, ::System::String* extra, ::System::Boolean writable)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_PROBE_OFFSET))(this, rkey, extra, writable);
		}

		static ::System::String* CombineName(::Microsoft::Win32::RegistryKey* rkey, ::System::String* extra)
		{
			return ((::System::String*(*)(::Microsoft::Win32::RegistryKey*, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_COMBINENAME_OFFSET))(rkey, extra);
		}

		static ::System::Int64 GetSystemBootTime()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETSYSTEMBOOTTIME_OFFSET))();
		}

		static ::System::Int64 GetRegisteredBootTime(::System::String* path)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETREGISTEREDBOOTTIME_OFFSET))(path);
		}

		static ::System::Void SaveRegisteredBootTime(::System::String* path, ::System::Int64 btime)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_SAVEREGISTEREDBOOTTIME_OFFSET))(path, btime);
		}

		static ::System::Void CleanVolatileKeys()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_CLEANVOLATILEKEYS_OFFSET))();
		}

		static ::System::Boolean VolatileKeyExists(::System::String* dir)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_VOLATILEKEYEXISTS_OFFSET))(dir);
		}

		static ::System::String* GetVolatileDir(::System::String* dir)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETVOLATILEDIR_OFFSET))(dir);
		}

		static ::Microsoft::Win32::KeyHandler* Lookup(::Microsoft::Win32::RegistryKey* rkey, ::System::Boolean createNonExisting)
		{
			return ((::Microsoft::Win32::KeyHandler*(*)(::Microsoft::Win32::RegistryKey*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_LOOKUP_OFFSET))(rkey, createNonExisting);
		}

		static ::System::String* GetRootFromDir(::System::String* dir)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETROOTFROMDIR_OFFSET))(dir);
		}

		static ::System::Void Drop(::Microsoft::Win32::RegistryKey* rkey)
		{
			return ((::System::Void(*)(::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_DROP_OFFSET))(rkey);
		}

		::System::Object* GetValue(::System::String* name, ::Microsoft::Win32::RegistryValueOptions options)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::Microsoft::Win32::RegistryValueOptions))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETVALUE_OFFSET))(this, name, options);
		}

		::Il2CppArray<::System::String*>* GetSubKeyNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETSUBKEYNAMES_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_FLUSH_OFFSET))(this);
		}

		::System::Boolean ValueExists(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_VALUEEXISTS_OFFSET))(this, name);
		}

		::System::Boolean get_IsMarkedForDeletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GET_ISMARKEDFORDELETION_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_FINALIZE_OFFSET))(this);
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_SAVE_OFFSET))(this);
		}

		static ::System::String* get_UserStore()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GET_USERSTORE_OFFSET))();
		}

		static ::System::String* get_MachineStore()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GET_MACHINESTORE_OFFSET))();
		}
	};
}
