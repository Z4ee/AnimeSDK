#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/CipherSuiteCode.h"
#include "unitysdk/Mono/Security/Interface/TlsProtocols.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::Interface { class ICertificateValidator; }
namespace Mono::Security::Interface { class MonoLocalCertificateSelectionCallback; }
namespace Mono::Security::Interface { class MonoRemoteCertificateValidationCallback; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_CLONEWITHVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1E0E93D0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E9370)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_COPYDEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E0E92A0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CALLBACKNEEDSCERTIFICATECHAIN_OFFSET UNITYSDK_OFFSET(0x1E0E90A0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATESEARCHPATHS_OFFSET UNITYSDK_OFFSET(0x1E0E9120)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATEVALIDATIONTIME_OFFSET UNITYSDK_OFFSET(0x1E0E90C0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1E0E93C0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CHECKCERTIFICATENAME_OFFSET UNITYSDK_OFFSET(0x1E0E9020)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CHECKCERTIFICATEREVOCATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1E0E9040)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CLIENTCERTIFICATESELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E0E9000)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E0E91B0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_ENABLEDCIPHERS_OFFSET UNITYSDK_OFFSET(0x1E0E9180)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_ENABLEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x1E0E9160)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_REMOTECERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E0E8FE0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_SENDCLOSENOTIFY_OFFSET UNITYSDK_OFFSET(0x1E0E9140)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_SKIPSYSTEMVALIDATORS_OFFSET UNITYSDK_OFFSET(0x1E0E9080)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x1E0E90E0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_USERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E0E9100)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_USESERVICEPOINTMANAGERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E0E9060)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CALLBACKNEEDSCERTIFICATECHAIN_OFFSET UNITYSDK_OFFSET(0x1E0E90B0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CERTIFICATESEARCHPATHS_OFFSET UNITYSDK_OFFSET(0x1E0E9130)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CERTIFICATEVALIDATIONTIME_OFFSET UNITYSDK_OFFSET(0x1E0E90D0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CHECKCERTIFICATENAME_OFFSET UNITYSDK_OFFSET(0x1E0E9030)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CHECKCERTIFICATEREVOCATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1E0E9050)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CLIENTCERTIFICATESELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E0E9010)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E0E9240)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_ENABLEDCIPHERS_OFFSET UNITYSDK_OFFSET(0x1E0E9190)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_ENABLEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x1E0E9170)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_REMOTECERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E0E8FF0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_SENDCLOSENOTIFY_OFFSET UNITYSDK_OFFSET(0x1E0E9150)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_SKIPSYSTEMVALIDATORS_OFFSET UNITYSDK_OFFSET(0x1E0E9090)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x1E0E90F0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_USERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E0E9110)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_USESERVICEPOINTMANAGERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E0E9070)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E9440)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E91A0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsSettings_TypeDefinitionIndex = 2443;

	class MonoTlsSettings : public ::System::Object
	{
	public:
		static ::Mono::Security::Interface::MonoTlsSettings** StaticGet_defaultSettings()
		{
			return (::Mono::Security::Interface::MonoTlsSettings**)Il2CppClass::FromTypeDefinitionIndex(MonoTlsSettings_TypeDefinitionIndex)->GetStaticField(0x24A0);
		}
		::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* _ClientCertificateSelectionCallback_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _CertificateSearchPaths_k__BackingField; // 0x18
		::System::Object* _UserSettings_k__BackingField; // 0x20
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _TrustAnchors_k__BackingField; // 0x28
		::Il2CppArray<::Mono::Security::Interface::CipherSuiteCode>* _EnabledCiphers_k__BackingField; // 0x30
		::Mono::Security::Interface::ICertificateValidator* certificateValidator; // 0x38
		::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* _RemoteCertificateValidationCallback_k__BackingField; // 0x40
		::System::Nullable_1<::System::DateTime> _CertificateValidationTime_k__BackingField; // 0x48
		::System::Boolean checkCertRevocationStatus; // 0x58
		::System::Nullable_1<::System::Boolean> useServicePointManagerCallback; // 0x59
		::System::Boolean cloned; // 0x5B
		::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> _EnabledProtocols_k__BackingField; // 0x5C
		::System::Boolean checkCertName; // 0x64
		::System::Boolean callbackNeedsChain; // 0x65
		::System::Boolean _SendCloseNotify_k__BackingField; // 0x66
		::System::Boolean skipSystemValidators; // 0x67

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::Interface::MonoTlsSettings* other)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS__CTOR_1_OFFSET))(this, other);
		}

		::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback()
		{
			return ((::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_REMOTECERTIFICATEVALIDATIONCALLBACK_OFFSET))(this);
		}

		::System::Void set_RemoteCertificateValidationCallback(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_REMOTECERTIFICATEVALIDATIONCALLBACK_OFFSET))(this, value);
		}

		::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* get_ClientCertificateSelectionCallback()
		{
			return ((::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CLIENTCERTIFICATESELECTIONCALLBACK_OFFSET))(this);
		}

		::System::Void set_ClientCertificateSelectionCallback(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CLIENTCERTIFICATESELECTIONCALLBACK_OFFSET))(this, value);
		}

		::System::Boolean get_CheckCertificateName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CHECKCERTIFICATENAME_OFFSET))(this);
		}

		::System::Void set_CheckCertificateName(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CHECKCERTIFICATENAME_OFFSET))(this, value);
		}

		::System::Boolean get_CheckCertificateRevocationStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CHECKCERTIFICATEREVOCATIONSTATUS_OFFSET))(this);
		}

		::System::Void set_CheckCertificateRevocationStatus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CHECKCERTIFICATEREVOCATIONSTATUS_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_UseServicePointManagerCallback()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_USESERVICEPOINTMANAGERCALLBACK_OFFSET))(this);
		}

		::System::Void set_UseServicePointManagerCallback(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_USESERVICEPOINTMANAGERCALLBACK_OFFSET))(this, value);
		}

		::System::Boolean get_SkipSystemValidators()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_SKIPSYSTEMVALIDATORS_OFFSET))(this);
		}

		::System::Void set_SkipSystemValidators(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_SKIPSYSTEMVALIDATORS_OFFSET))(this, value);
		}

		::System::Boolean get_CallbackNeedsCertificateChain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CALLBACKNEEDSCERTIFICATECHAIN_OFFSET))(this);
		}

		::System::Void set_CallbackNeedsCertificateChain(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CALLBACKNEEDSCERTIFICATECHAIN_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::DateTime> get_CertificateValidationTime()
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATEVALIDATIONTIME_OFFSET))(this);
		}

		::System::Void set_CertificateValidationTime(::System::Nullable_1<::System::DateTime> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CERTIFICATEVALIDATIONTIME_OFFSET))(this, value);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_TrustAnchors()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_TRUSTANCHORS_OFFSET))(this);
		}

		::System::Void set_TrustAnchors(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_TRUSTANCHORS_OFFSET))(this, value);
		}

		::System::Object* get_UserSettings()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_USERSETTINGS_OFFSET))(this);
		}

		::System::Void set_UserSettings(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_USERSETTINGS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_CertificateSearchPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATESEARCHPATHS_OFFSET))(this);
		}

		::System::Void set_CertificateSearchPaths(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CERTIFICATESEARCHPATHS_OFFSET))(this, value);
		}

		::System::Boolean get_SendCloseNotify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_SENDCLOSENOTIFY_OFFSET))(this);
		}

		::System::Void set_SendCloseNotify(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_SENDCLOSENOTIFY_OFFSET))(this, value);
		}

		::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> get_EnabledProtocols()
		{
			return ((::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_ENABLEDPROTOCOLS_OFFSET))(this);
		}

		::System::Void set_EnabledProtocols(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_ENABLEDPROTOCOLS_OFFSET))(this, value);
		}

		::Il2CppArray<::Mono::Security::Interface::CipherSuiteCode>* get_EnabledCiphers()
		{
			return ((::Il2CppArray<::Mono::Security::Interface::CipherSuiteCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_ENABLEDCIPHERS_OFFSET))(this);
		}

		::System::Void set_EnabledCiphers(::Il2CppArray<::Mono::Security::Interface::CipherSuiteCode>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Mono::Security::Interface::CipherSuiteCode>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_ENABLEDCIPHERS_OFFSET))(this, value);
		}

		static ::Mono::Security::Interface::MonoTlsSettings* get_DefaultSettings()
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_DEFAULTSETTINGS_OFFSET))();
		}

		static ::System::Void set_DefaultSettings(::Mono::Security::Interface::MonoTlsSettings* value)
		{
			return ((::System::Void(*)(::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_DEFAULTSETTINGS_OFFSET))(value);
		}

		static ::Mono::Security::Interface::MonoTlsSettings* CopyDefaultSettings()
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_COPYDEFAULTSETTINGS_OFFSET))();
		}

		::Mono::Security::Interface::ICertificateValidator* get_CertificateValidator()
		{
			return ((::Mono::Security::Interface::ICertificateValidator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATEVALIDATOR_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsSettings* CloneWithValidator(::Mono::Security::Interface::ICertificateValidator* validator)
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID, ::Mono::Security::Interface::ICertificateValidator*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_CLONEWITHVALIDATOR_OFFSET))(this, validator);
		}

		::Mono::Security::Interface::MonoTlsSettings* Clone()
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_CLONE_OFFSET))(this);
		}
	};
}
