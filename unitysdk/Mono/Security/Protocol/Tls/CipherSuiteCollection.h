#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/CipherAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/ExchangeAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/HashAlgorithmType.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SecurityProtocolType.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace Mono::Security::Protocol::Tls { class CipherSuite; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1E6FD760)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_GETNAMES_OFFSET UNITYSDK_OFFSET(0x1E6FDA20)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1E6FD480)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E6FD190)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1E6FD5B0)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1E6FD320)
#define MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FD6A0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int CipherSuiteCollection_TypeDefinitionIndex = 2348;

	class CipherSuiteCollection : public ::System::Collections::Generic::List_1<::Mono::Security::Protocol::Tls::CipherSuite*>
	{
	public:
		::Mono::Security::Protocol::Tls::SecurityProtocolType protocol; // 0x20

		::System::Void _ctor(::Mono::Security::Protocol::Tls::SecurityProtocolType protocol)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SecurityProtocolType))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION__CTOR_OFFSET))(this, protocol);
		}

		::Mono::Security::Protocol::Tls::CipherSuite* get_Item(::System::String* name)
		{
			return ((::Mono::Security::Protocol::Tls::CipherSuite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_GET_ITEM_OFFSET))(this, name);
		}

		::Mono::Security::Protocol::Tls::CipherSuite* get_Item_1(::System::Int16 code)
		{
			return ((::Mono::Security::Protocol::Tls::CipherSuite*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_GET_ITEM_1_OFFSET))(this, code);
		}

		::System::Int32 IndexOf(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_INDEXOF_OFFSET))(this, name);
		}

		::System::Int32 IndexOf_1(::System::Int16 code)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_INDEXOF_1_OFFSET))(this, code);
		}

		::System::Void Add(::System::Int16 code, ::System::String* name, ::Mono::Security::Protocol::Tls::CipherAlgorithmType cipherType, ::Mono::Security::Protocol::Tls::HashAlgorithmType hashType, ::Mono::Security::Protocol::Tls::ExchangeAlgorithmType exchangeType, ::System::Boolean exportable, ::System::Boolean blockMode, ::System::Byte keyMaterialSize, ::System::Byte expandedKeyMaterialSize, ::System::Int16 effectiveKeyBytes, ::System::Byte ivSize, ::System::Byte blockSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::String*, ::Mono::Security::Protocol::Tls::CipherAlgorithmType, ::Mono::Security::Protocol::Tls::HashAlgorithmType, ::Mono::Security::Protocol::Tls::ExchangeAlgorithmType, ::System::Boolean, ::System::Boolean, ::System::Byte, ::System::Byte, ::System::Int16, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_ADD_OFFSET))(this, code, name, cipherType, hashType, exchangeType, exportable, blockMode, keyMaterialSize, expandedKeyMaterialSize, effectiveKeyBytes, ivSize, blockSize);
		}

		::System::Collections::Generic::IList_1<::System::String*>* GetNames()
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_CIPHERSUITECOLLECTION_GETNAMES_OFFSET))(this);
		}
	};
}
