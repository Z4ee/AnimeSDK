#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/MD2.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1B64A2B0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1B64A650)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B64A250)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_MD2TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B64A390)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_PADDING_OFFSET UNITYSDK_OFFSET(0x1B64A140)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B64A7F0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B64A080)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2Managed_TypeDefinitionIndex = 2296;

	class MD2Managed : public ::Mono::Security::Cryptography::MD2
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_PI_SUBST()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MD2Managed_TypeDefinitionIndex)->GetStaticField(0x28880);
		}
		::Il2CppArray<::System::Byte>* buffer; // 0x28
		::Il2CppArray<::System::Byte>* checksum; // 0x30
		::Il2CppArray<::System::Byte>* x; // 0x38
		::Il2CppArray<::System::Byte>* state; // 0x40
		::System::Int32 count; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* Padding(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_PADDING_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHCORE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void MD2Transform(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_MD2TRANSFORM_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
