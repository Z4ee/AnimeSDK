#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class CspParameters; }

#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_CANSECURE_OFFSET UNITYSDK_OFFSET(0x1FBC7AB0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_COPY_OFFSET UNITYSDK_OFFSET(0x1FBC5E90)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_FROMXML_OFFSET UNITYSDK_OFFSET(0x1FBC6F10)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_CANCHANGE_OFFSET UNITYSDK_OFFSET(0x1FBC6D00)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_CONTAINERNAME_OFFSET UNITYSDK_OFFSET(0x1FBC6080)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1FBC5F30)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_KEYVALUE_OFFSET UNITYSDK_OFFSET(0x1FBC6CE0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_MACHINEPATH_OFFSET UNITYSDK_OFFSET(0x1FBC62A0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1FBC6D10)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USEDEFAULTKEYCONTAINER_OFFSET UNITYSDK_OFFSET(0x1FBC7B00)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USEMACHINEKEYSTORE_OFFSET UNITYSDK_OFFSET(0x1FBC6280)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USERPATH_OFFSET UNITYSDK_OFFSET(0x1FBC67C0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISMACHINEPROTECTED_OFFSET UNITYSDK_OFFSET(0x1FBC79C0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISUSERPROTECTED_OFFSET UNITYSDK_OFFSET(0x1FBC7920)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_LOAD_OFFSET UNITYSDK_OFFSET(0x1FBC6DC0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTMACHINE_OFFSET UNITYSDK_OFFSET(0x1FBC77C0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTUSER_OFFSET UNITYSDK_OFFSET(0x1FBC7860)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1FBC7900)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SAVE_OFFSET UNITYSDK_OFFSET(0x1FBC7080)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SET_KEYVALUE_OFFSET UNITYSDK_OFFSET(0x1FBC6CF0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_TOXML_OFFSET UNITYSDK_OFFSET(0x1FBC7410)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CANSECURE_OFFSET UNITYSDK_OFFSET(0x1FBC7A60)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBC7B20)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBC5D80)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC5D70)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISMACHINEPROTECTED_OFFSET UNITYSDK_OFFSET(0x1FBC7AA0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISUSERPROTECTED_OFFSET UNITYSDK_OFFSET(0x1FBC7A90)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTMACHINE_OFFSET UNITYSDK_OFFSET(0x1FBC7A80)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTUSER_OFFSET UNITYSDK_OFFSET(0x1FBC7A70)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int KeyPairPersistence_TypeDefinitionIndex = 2455;

	class KeyPairPersistence : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__userPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x2440);
		}
		static ::System::Object** StaticGet_lockobj()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x2448);
		}
		static ::System::String** StaticGet__machinePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x2450);
		}
		static ::System::Boolean* StaticGet__machinePathExists()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0xF50);
		}
		static ::System::Boolean* StaticGet__userPathExists()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0xF51);
		}
		::System::String* _container; // 0x10
		::System::String* _keyvalue; // 0x18
		::System::Security::Cryptography::CspParameters* _params; // 0x20
		::System::String* _filename; // 0x28

		::System::Void _ctor(::System::Security::Cryptography::CspParameters* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_OFFSET))(this, parameters);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::CspParameters* parameters, ::System::String* keyPair)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_1_OFFSET))(this, parameters, keyPair);
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

		::System::Void set_KeyValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SET_KEYVALUE_OFFSET))(this, value);
		}

		::System::Security::Cryptography::CspParameters* get_Parameters()
		{
			return ((::System::Security::Cryptography::CspParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_PARAMETERS_OFFSET))(this);
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

		static ::System::Boolean _CanSecure(::System::String* root)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CANSECURE_OFFSET))(root);
		}

		static ::System::Boolean _ProtectUser(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTUSER_OFFSET))(path);
		}

		static ::System::Boolean _ProtectMachine(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTMACHINE_OFFSET))(path);
		}

		static ::System::Boolean _IsUserProtected(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISUSERPROTECTED_OFFSET))(path);
		}

		static ::System::Boolean _IsMachineProtected(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISMACHINEPROTECTED_OFFSET))(path);
		}

		static ::System::Boolean CanSecure(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_CANSECURE_OFFSET))(path);
		}

		static ::System::Boolean ProtectUser(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTUSER_OFFSET))(path);
		}

		static ::System::Boolean ProtectMachine(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTMACHINE_OFFSET))(path);
		}

		static ::System::Boolean IsUserProtected(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISUSERPROTECTED_OFFSET))(path);
		}

		static ::System::Boolean IsMachineProtected(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISMACHINEPROTECTED_OFFSET))(path);
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

		::System::Security::Cryptography::CspParameters* Copy(::System::Security::Cryptography::CspParameters* p)
		{
			return ((::System::Security::Cryptography::CspParameters*(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_COPY_OFFSET))(this, p);
		}

		::System::Void FromXml(::System::String* xml)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_FROMXML_OFFSET))(this, xml);
		}

		::System::String* ToXml()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_TOXML_OFFSET))(this);
		}
	};
}
