#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace Mono::Security::X509 { class X509Crl; }
namespace Mono::Security::X509 { class X509ExtensionCollection; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define MONO_SECURITY_X509_X509STORE_BUILDCERTIFICATESCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1F3F6AB0)
#define MONO_SECURITY_X509_X509STORE_BUILDCRLSCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1F3F6EE0)
#define MONO_SECURITY_X509_X509STORE_CHECKSTORE_OFFSET UNITYSDK_OFFSET(0x1F3F7AC0)
#define MONO_SECURITY_X509_X509STORE_CLEARCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1F3F7270)
#define MONO_SECURITY_X509_X509STORE_CLEARCRLS_OFFSET UNITYSDK_OFFSET(0x1F3F72A0)
#define MONO_SECURITY_X509_X509STORE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F3F7230)
#define MONO_SECURITY_X509_X509STORE_GETUNIQUENAMEWITHSERIAL_OFFSET UNITYSDK_OFFSET(0x1F3F7DC0)
#define MONO_SECURITY_X509_X509STORE_GETUNIQUENAME_1_OFFSET UNITYSDK_OFFSET(0x1F3F82B0)
#define MONO_SECURITY_X509_X509STORE_GETUNIQUENAME_2_OFFSET UNITYSDK_OFFSET(0x1F3F87B0)
#define MONO_SECURITY_X509_X509STORE_GETUNIQUENAME_3_OFFSET UNITYSDK_OFFSET(0x1F3F8900)
#define MONO_SECURITY_X509_X509STORE_GETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1F3F7D40)
#define MONO_SECURITY_X509_X509STORE_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1F3F6A80)
#define MONO_SECURITY_X509_X509STORE_GET_CRLS_OFFSET UNITYSDK_OFFSET(0x1F3F6E20)
#define MONO_SECURITY_X509_X509STORE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F3F71C0)
#define MONO_SECURITY_X509_X509STORE_IMPORTNEWFORMAT_OFFSET UNITYSDK_OFFSET(0x1F3F7C40)
#define MONO_SECURITY_X509_X509STORE_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x1F3F7EB0)
#define MONO_SECURITY_X509_X509STORE_IMPORT_OFFSET UNITYSDK_OFFSET(0x1F3F72D0)
#define MONO_SECURITY_X509_X509STORE_LOADCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1F3F7E50)
#define MONO_SECURITY_X509_X509STORE_LOADCRL_OFFSET UNITYSDK_OFFSET(0x1F3F8C00)
#define MONO_SECURITY_X509_X509STORE_LOAD_OFFSET UNITYSDK_OFFSET(0x1F3F8A50)
#define MONO_SECURITY_X509_X509STORE_REMOVENEWFORMAT_OFFSET UNITYSDK_OFFSET(0x1F3F8540)
#define MONO_SECURITY_X509_X509STORE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1F3F8640)
#define MONO_SECURITY_X509_X509STORE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1F3F8330)
#define MONO_SECURITY_X509_X509STORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3F6A70)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Store_TypeDefinitionIndex = 2304;

	class X509Store : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* _crls; // 0x10
		::Mono::Security::X509::X509CertificateCollection* _certificates; // 0x18
		::System::String* _storePath; // 0x20
		::System::String* _name; // 0x28
		::System::Boolean _newFormat; // 0x30
		::System::Boolean _crl; // 0x31

		::System::Void _ctor(::System::String* path, ::System::Boolean crl, ::System::Boolean newFormat)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE__CTOR_OFFSET))(this, path, crl, newFormat);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Certificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_GET_CERTIFICATES_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_Crls()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_GET_CRLS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_GET_NAME_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_CLEAR_OFFSET))(this);
		}

		::System::Void ClearCertificates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_CLEARCERTIFICATES_OFFSET))(this);
		}

		::System::Void ClearCrls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_CLEARCRLS_OFFSET))(this);
		}

		::System::Void Import(::Mono::Security::X509::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_IMPORT_OFFSET))(this, certificate);
		}

		::System::Void Import_1(::Mono::Security::X509::X509Crl* crl)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Crl*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_IMPORT_1_OFFSET))(this, crl);
		}

		::System::Void Remove(::Mono::Security::X509::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_REMOVE_OFFSET))(this, certificate);
		}

		::System::Void Remove_1(::Mono::Security::X509::X509Crl* crl)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Crl*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_REMOVE_1_OFFSET))(this, crl);
		}

		::System::Void ImportNewFormat(::Mono::Security::X509::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_IMPORTNEWFORMAT_OFFSET))(this, certificate);
		}

		::System::Void RemoveNewFormat(::Mono::Security::X509::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_REMOVENEWFORMAT_OFFSET))(this, certificate);
		}

		::System::String* GetUniqueNameWithSerial(::Mono::Security::X509::X509Certificate* certificate)
		{
			return ((::System::String*(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_GETUNIQUENAMEWITHSERIAL_OFFSET))(this, certificate);
		}

		::System::String* GetUniqueName(::Mono::Security::X509::X509Certificate* certificate, ::Il2CppArray<::System::Byte>* serial)
		{
			return ((::System::String*(*)(::PVOID, ::Mono::Security::X509::X509Certificate*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_GETUNIQUENAME_OFFSET))(this, certificate, serial);
		}

		::System::String* GetUniqueName_1(::Mono::Security::X509::X509Crl* crl)
		{
			return ((::System::String*(*)(::PVOID, ::Mono::Security::X509::X509Crl*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_GETUNIQUENAME_1_OFFSET))(this, crl);
		}

		::Il2CppArray<::System::Byte>* GetUniqueName_2(::Mono::Security::X509::X509ExtensionCollection* extensions, ::Il2CppArray<::System::Byte>* serial)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Security::X509::X509ExtensionCollection*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_GETUNIQUENAME_2_OFFSET))(this, extensions, serial);
		}

		::System::String* GetUniqueName_3(::System::String* method, ::Il2CppArray<::System::Byte>* name, ::System::String* fileExtension)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_GETUNIQUENAME_3_OFFSET))(this, method, name, fileExtension);
		}

		::Il2CppArray<::System::Byte>* Load(::System::String* filename)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_LOAD_OFFSET))(this, filename);
		}

		::Mono::Security::X509::X509Certificate* LoadCertificate(::System::String* filename)
		{
			return ((::Mono::Security::X509::X509Certificate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_LOADCERTIFICATE_OFFSET))(this, filename);
		}

		::Mono::Security::X509::X509Crl* LoadCrl(::System::String* filename)
		{
			return ((::Mono::Security::X509::X509Crl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_LOADCRL_OFFSET))(this, filename);
		}

		::System::Boolean CheckStore(::System::String* path, ::System::Boolean throwException)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_CHECKSTORE_OFFSET))(this, path, throwException);
		}

		::Mono::Security::X509::X509CertificateCollection* BuildCertificatesCollection(::System::String* storeName)
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_BUILDCERTIFICATESCOLLECTION_OFFSET))(this, storeName);
		}

		::System::Collections::ArrayList* BuildCrlsCollection(::System::String* storeName)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_BUILDCRLSCOLLECTION_OFFSET))(this, storeName);
		}
	};
}
