#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryValueOptions.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class RegistryKey; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Security { class SecurityElement; }

#define MICROSOFT_WIN32_KEYHANDLER_CLEANVOLATILEKEYS_OFFSET UNITYSDK_OFFSET(0x18542060)
#define MICROSOFT_WIN32_KEYHANDLER_COMBINENAME_OFFSET UNITYSDK_OFFSET(0x18543770)
#define MICROSOFT_WIN32_KEYHANDLER_DROP_OFFSET UNITYSDK_OFFSET(0x18545340)
#define MICROSOFT_WIN32_KEYHANDLER_ENSURE_OFFSET UNITYSDK_OFFSET(0x185434B0)
#define MICROSOFT_WIN32_KEYHANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x185471B0)
#define MICROSOFT_WIN32_KEYHANDLER_FLUSH_OFFSET UNITYSDK_OFFSET(0x185461F0)
#define MICROSOFT_WIN32_KEYHANDLER_GETREGISTEREDBOOTTIME_OFFSET UNITYSDK_OFFSET(0x185443D0)
#define MICROSOFT_WIN32_KEYHANDLER_GETROOTFROMDIR_OFFSET UNITYSDK_OFFSET(0x18544CC0)
#define MICROSOFT_WIN32_KEYHANDLER_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x18545BB0)
#define MICROSOFT_WIN32_KEYHANDLER_GETSYSTEMBOOTTIME_OFFSET UNITYSDK_OFFSET(0x18543FC0)
#define MICROSOFT_WIN32_KEYHANDLER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x18545900)
#define MICROSOFT_WIN32_KEYHANDLER_GETVOLATILEDIR_OFFSET UNITYSDK_OFFSET(0x18542660)
#define MICROSOFT_WIN32_KEYHANDLER_GET_ISMARKEDFORDELETION_OFFSET UNITYSDK_OFFSET(0x18545B20)
#define MICROSOFT_WIN32_KEYHANDLER_GET_MACHINESTORE_OFFSET UNITYSDK_OFFSET(0x18544A70)
#define MICROSOFT_WIN32_KEYHANDLER_GET_USERSTORE_OFFSET UNITYSDK_OFFSET(0x18544980)
#define MICROSOFT_WIN32_KEYHANDLER_LOADKEY_OFFSET UNITYSDK_OFFSET(0x18542E10)
#define MICROSOFT_WIN32_KEYHANDLER_LOAD_OFFSET UNITYSDK_OFFSET(0x185426F0)
#define MICROSOFT_WIN32_KEYHANDLER_LOOKUP_OFFSET UNITYSDK_OFFSET(0x18544E20)
#define MICROSOFT_WIN32_KEYHANDLER_PROBE_OFFSET UNITYSDK_OFFSET(0x185437F0)
#define MICROSOFT_WIN32_KEYHANDLER_SAVEREGISTEREDBOOTTIME_OFFSET UNITYSDK_OFFSET(0x185447B0)
#define MICROSOFT_WIN32_KEYHANDLER_SAVE_OFFSET UNITYSDK_OFFSET(0x185462D0)
#define MICROSOFT_WIN32_KEYHANDLER_VALUEEXISTS_OFFSET UNITYSDK_OFFSET(0x185470C0)
#define MICROSOFT_WIN32_KEYHANDLER_VOLATILEKEYEXISTS_OFFSET UNITYSDK_OFFSET(0x18543C30)
#define MICROSOFT_WIN32_KEYHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18541EE0)
#define MICROSOFT_WIN32_KEYHANDLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185422E0)
#define MICROSOFT_WIN32_KEYHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x185422D0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int KeyHandler_TypeDefinitionIndex = 109;

	class KeyHandler : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_dir_to_handler()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(KeyHandler_TypeDefinitionIndex)->GetStaticField(0x1820);
		}
		static ::System::Collections::Hashtable** StaticGet_key_to_handler()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(KeyHandler_TypeDefinitionIndex)->GetStaticField(0x1828);
		}
		static ::System::String** StaticGet_user_store()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KeyHandler_TypeDefinitionIndex)->GetStaticField(0x1830);
		}
		static ::System::String** StaticGet_machine_store()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KeyHandler_TypeDefinitionIndex)->GetStaticField(0x1838);
		}
		::System::String* Dir; // 0x10
		::System::Collections::Hashtable* values; // 0x18
		::System::String* file; // 0x20
		::System::String* ActualDir; // 0x28
		::System::Boolean dirty; // 0x30
		::System::Boolean IsVolatile; // 0x31

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_LOAD_OFFSET))(this);
		}

		::System::Void LoadKey(::System::Security::SecurityElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_LOADKEY_OFFSET))(this, a1);
		}

		::Microsoft::Win32::RegistryKey* Ensure(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_ENSURE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Microsoft::Win32::RegistryKey* Probe(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::Microsoft::Win32::RegistryKey*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_PROBE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* CombineName(::Microsoft::Win32::RegistryKey* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::Microsoft::Win32::RegistryKey*, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_COMBINENAME_OFFSET))(a1, a2);
		}

		static ::System::Int64 GetSystemBootTime()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETSYSTEMBOOTTIME_OFFSET))();
		}

		static ::System::Int64 GetRegisteredBootTime(::System::String* a1)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETREGISTEREDBOOTTIME_OFFSET))(a1);
		}

		static ::System::Void SaveRegisteredBootTime(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_SAVEREGISTEREDBOOTTIME_OFFSET))(a1, a2);
		}

		static ::System::Void CleanVolatileKeys()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_CLEANVOLATILEKEYS_OFFSET))();
		}

		static ::System::Boolean VolatileKeyExists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_VOLATILEKEYEXISTS_OFFSET))(a1);
		}

		static ::System::String* GetVolatileDir(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETVOLATILEDIR_OFFSET))(a1);
		}

		static ::Microsoft::Win32::KeyHandler* Lookup(::Microsoft::Win32::RegistryKey* a1, ::System::Boolean a2)
		{
			return ((::Microsoft::Win32::KeyHandler*(*)(::Microsoft::Win32::RegistryKey*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_LOOKUP_OFFSET))(a1, a2);
		}

		static ::System::String* GetRootFromDir(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETROOTFROMDIR_OFFSET))(a1);
		}

		static ::System::Void Drop(::Microsoft::Win32::RegistryKey* a1)
		{
			return ((::System::Void(*)(::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_DROP_OFFSET))(a1);
		}

		::System::Object* GetValue(::System::String* a1, ::Microsoft::Win32::RegistryValueOptions a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::Microsoft::Win32::RegistryValueOptions))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETVALUE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* GetSubKeyNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_GETSUBKEYNAMES_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_FLUSH_OFFSET))(this);
		}

		::System::Boolean ValueExists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_KEYHANDLER_VALUEEXISTS_OFFSET))(this, a1);
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
