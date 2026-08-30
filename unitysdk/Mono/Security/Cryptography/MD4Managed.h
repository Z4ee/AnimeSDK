#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/MD4.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_DECODE_OFFSET UNITYSDK_OFFSET(0x1D23FAD0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ENCODE_OFFSET UNITYSDK_OFFSET(0x1D23F8D0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_FF_OFFSET UNITYSDK_OFFSET(0x1D23FA40)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_F_OFFSET UNITYSDK_OFFSET(0x1D23FA00)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_GG_OFFSET UNITYSDK_OFFSET(0x1D23FA70)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_G_OFFSET UNITYSDK_OFFSET(0x1D23FA10)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1D23F060)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1D23F800)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HH_OFFSET UNITYSDK_OFFSET(0x1D23FAA0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_H_OFFSET UNITYSDK_OFFSET(0x1D23FA20)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D23EFB0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_MD4TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D23F180)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_PADDING_OFFSET UNITYSDK_OFFSET(0x1D23F9C0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ROL_OFFSET UNITYSDK_OFFSET(0x1D23FA30)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D23EF20)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4Managed_TypeDefinitionIndex = 2305;

	class MD4Managed : public ::Mono::Security::Cryptography::MD4
	{
	public:
		::Il2CppArray<::System::UInt32>* state; // 0x28
		::Il2CppArray<::System::Byte>* buffer; // 0x30
		::Il2CppArray<::System::Byte>* digest; // 0x38
		::Il2CppArray<::System::UInt32>* count; // 0x40
		::Il2CppArray<::System::UInt32>* x; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHCORE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHFINAL_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Padding(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_PADDING_OFFSET))(this, a1);
		}

		::System::UInt32 F(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_F_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 G(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_G_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 H(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_H_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 ROL(::System::UInt32 a1, ::System::Byte a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ROL_OFFSET))(this, a1, a2);
		}

		::System::Void FF(::System::UInt32& a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Byte a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_FF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GG(::System::UInt32& a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Byte a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_GG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HH(::System::UInt32& a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Byte a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Encode(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ENCODE_OFFSET))(this, a1, a2);
		}

		::System::Void Decode(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_DECODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MD4Transform(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_MD4TRANSFORM_OFFSET))(this, a1, a2, a3);
		}
	};
}
