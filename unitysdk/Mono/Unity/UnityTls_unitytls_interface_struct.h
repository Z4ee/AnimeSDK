#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx_protocolrange.h"
#include "unitysdk/System/Object.h"

namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_key_free_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_x509list_append_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_x509list_create_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_x509list_free_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t; }
namespace Mono::Unity { class UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1866B040)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_TypeDefinitionIndex = 2358;

	class UnityTls_unitytls_interface_struct : public ::System::Object
	{
	public:
		::System::UInt64 UNITYTLS_INVALID_HANDLE; // 0x10
		::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT; // 0x18
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t* unitytls_errorstate_create; // 0x20
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t* unitytls_errorstate_raise_error; // 0x28
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t* unitytls_key_get_ref; // 0x30
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t* unitytls_key_parse_der; // 0x38
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t* unitytls_key_parse_pem; // 0x40
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_free_t* unitytls_key_free; // 0x48
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t* unitytls_x509_export_der; // 0x50
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t* unitytls_x509list_get_ref; // 0x58
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t* unitytls_x509list_get_x509; // 0x60
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_create_t* unitytls_x509list_create; // 0x68
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_append_t* unitytls_x509list_append; // 0x70
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t* unitytls_x509list_append_der; // 0x78
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t* unitytls_x509list_append_pem; // 0x80
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_free_t* unitytls_x509list_free; // 0x88
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t* unitytls_x509verify_default_ca; // 0x90
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t* unitytls_x509verify_explicit_ca; // 0x98
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t* unitytls_tlsctx_create_server; // 0xA0
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t* unitytls_tlsctx_create_client; // 0xA8
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t* unitytls_tlsctx_server_require_client_authentication; // 0xB0
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t* unitytls_tlsctx_set_certificate_callback; // 0xB8
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t* unitytls_tlsctx_set_trace_callback; // 0xC0
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t* unitytls_tlsctx_set_x509verify_callback; // 0xC8
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t* unitytls_tlsctx_set_supported_ciphersuites; // 0xD0
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t* unitytls_tlsctx_get_ciphersuite; // 0xD8
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t* unitytls_tlsctx_get_protocol; // 0xE0
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t* unitytls_tlsctx_process_handshake; // 0xE8
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t* unitytls_tlsctx_read; // 0xF0
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t* unitytls_tlsctx_write; // 0xF8
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t* unitytls_tlsctx_notify_close; // 0x100
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t* unitytls_tlsctx_free; // 0x108
		::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t* unitytls_random_generate_bytes; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT__CTOR_OFFSET))(this);
		}
	};
}
