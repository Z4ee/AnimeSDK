#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class CspParameters; }

#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_CANSECURE_OFFSET UNITYSDK_OFFSET(0x1856A5C0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_COPY_OFFSET UNITYSDK_OFFSET(0x18568790)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_FROMXML_OFFSET UNITYSDK_OFFSET(0x18569A00)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_CANCHANGE_OFFSET UNITYSDK_OFFSET(0x18569820)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_CONTAINERNAME_OFFSET UNITYSDK_OFFSET(0x18568980)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x18568830)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_KEYVALUE_OFFSET UNITYSDK_OFFSET(0x18569800)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_MACHINEPATH_OFFSET UNITYSDK_OFFSET(0x18568B40)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USEDEFAULTKEYCONTAINER_OFFSET UNITYSDK_OFFSET(0x1856A6A0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USEMACHINEKEYSTORE_OFFSET UNITYSDK_OFFSET(0x18568B20)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USERPATH_OFFSET UNITYSDK_OFFSET(0x185691A0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISMACHINEPROTECTED_OFFSET UNITYSDK_OFFSET(0x1856A4F0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISUSERPROTECTED_OFFSET UNITYSDK_OFFSET(0x1856A470)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_LOAD_OFFSET UNITYSDK_OFFSET(0x18569830)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTMACHINE_OFFSET UNITYSDK_OFFSET(0x1856A350)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTUSER_OFFSET UNITYSDK_OFFSET(0x1856A3D0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1856A450)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SAVE_OFFSET UNITYSDK_OFFSET(0x18569C20)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SET_KEYVALUE_OFFSET UNITYSDK_OFFSET(0x18569810)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_TOXML_OFFSET UNITYSDK_OFFSET(0x18569FA0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CANSECURE_OFFSET UNITYSDK_OFFSET(0x1856A570)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1856A7E0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18568680)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18568670)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISMACHINEPROTECTED_OFFSET UNITYSDK_OFFSET(0x1856A5B0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISUSERPROTECTED_OFFSET UNITYSDK_OFFSET(0x1856A5A0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTMACHINE_OFFSET UNITYSDK_OFFSET(0x1856A590)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTUSER_OFFSET UNITYSDK_OFFSET(0x1856A580)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int KeyPairPersistence_TypeDefinitionIndex = 66;

	class KeyPairPersistence : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__userPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x25F0);
		}
		static ::System::Object** StaticGet_lockobj()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x25F8);
		}
		static ::System::String** StaticGet__machinePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x2600);
		}
		static ::System::Boolean* StaticGet__userPathExists()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x1040);
		}
		static ::System::Boolean* StaticGet__machinePathExists()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x1041);
		}
		::System::String* _container; // 0x10
		::System::Security::Cryptography::CspParameters* _params; // 0x18
		::System::String* _filename; // 0x20
		::System::String* _keyvalue; // 0x28

		::System::Void _ctor(::System::Security::Cryptography::CspParameters* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::CspParameters* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CCTOR_OFFSET))();
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_FILENAME_OFFSET))(this);
		}

		::System::String* get_KeyValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_KEYVALUE_OFFSET))(this);
		}

		::System::Void set_KeyValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SET_KEYVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Load()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_LOAD_OFFSET))(this);
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SAVE_OFFSET))(this);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_REMOVE_OFFSET))(this);
		}

		static ::System::String* get_UserPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USERPATH_OFFSET))();
		}

		static ::System::String* get_MachinePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_MACHINEPATH_OFFSET))();
		}

		static ::System::Boolean _CanSecure(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CANSECURE_OFFSET))(a1);
		}

		static ::System::Boolean _ProtectUser(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTUSER_OFFSET))(a1);
		}

		static ::System::Boolean _ProtectMachine(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTMACHINE_OFFSET))(a1);
		}

		static ::System::Boolean _IsUserProtected(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISUSERPROTECTED_OFFSET))(a1);
		}

		static ::System::Boolean _IsMachineProtected(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISMACHINEPROTECTED_OFFSET))(a1);
		}

		static ::System::Boolean CanSecure(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_CANSECURE_OFFSET))(a1);
		}

		static ::System::Boolean ProtectUser(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTUSER_OFFSET))(a1);
		}

		static ::System::Boolean ProtectMachine(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTMACHINE_OFFSET))(a1);
		}

		static ::System::Boolean IsUserProtected(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISUSERPROTECTED_OFFSET))(a1);
		}

		static ::System::Boolean IsMachineProtected(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISMACHINEPROTECTED_OFFSET))(a1);
		}

		::System::Boolean get_CanChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_CANCHANGE_OFFSET))(this);
		}

		::System::Boolean get_UseDefaultKeyContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USEDEFAULTKEYCONTAINER_OFFSET))(this);
		}

		::System::Boolean get_UseMachineKeyStore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USEMACHINEKEYSTORE_OFFSET))(this);
		}

		::System::String* get_ContainerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_CONTAINERNAME_OFFSET))(this);
		}

		::System::Security::Cryptography::CspParameters* Copy(::System::Security::Cryptography::CspParameters* a1)
		{
			return ((::System::Security::Cryptography::CspParameters*(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_COPY_OFFSET))(this, a1);
		}

		::System::Void FromXml(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_FROMXML_OFFSET))(this, a1);
		}

		::System::String* ToXml()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_TOXML_OFFSET))(this);
		}
	};
}
