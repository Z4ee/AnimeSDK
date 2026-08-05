#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/MD4.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_DECODE_OFFSET UNITYSDK_OFFSET(0x1F7B41B0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ENCODE_OFFSET UNITYSDK_OFFSET(0x1F7B3F00)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_FF_OFFSET UNITYSDK_OFFSET(0x1F7B4120)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_F_OFFSET UNITYSDK_OFFSET(0x1F7B40E0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_GG_OFFSET UNITYSDK_OFFSET(0x1F7B4150)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_G_OFFSET UNITYSDK_OFFSET(0x1F7B40F0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1F7B33D0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1F7B3DC0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HH_OFFSET UNITYSDK_OFFSET(0x1F7B4180)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_H_OFFSET UNITYSDK_OFFSET(0x1F7B4100)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F7B32B0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_MD4TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F7B3520)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_PADDING_OFFSET UNITYSDK_OFFSET(0x1F7B4070)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ROL_OFFSET UNITYSDK_OFFSET(0x1F7B4110)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B3200)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4Managed_TypeDefinitionIndex = 2459;

	class MD4Managed : public ::Mono::Security::Cryptography::MD4
	{
	public:
		// static const ::System::Int32 S11 = 0x3; // 0x0
		// static const ::System::Int32 S12 = 0x7; // 0x0
		// static const ::System::Int32 S13 = 0xB; // 0x0
		// static const ::System::Int32 S14 = 0x13; // 0x0
		// static const ::System::Int32 S21 = 0x3; // 0x0
		// static const ::System::Int32 S22 = 0x5; // 0x0
		// static const ::System::Int32 S23 = 0x9; // 0x0
		// static const ::System::Int32 S24 = 0xD; // 0x0
		// static const ::System::Int32 S31 = 0x3; // 0x0
		// static const ::System::Int32 S32 = 0x9; // 0x0
		// static const ::System::Int32 S33 = 0xB; // 0x0
		// static const ::System::Int32 S34 = 0xF; // 0x0
		::Il2CppArray<::System::UInt32>* count; // 0x28
		::Il2CppArray<::System::Byte>* digest; // 0x30
		::Il2CppArray<::System::UInt32>* x; // 0x38
		::Il2CppArray<::System::Byte>* buffer; // 0x40
		::Il2CppArray<::System::UInt32>* state; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* array, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHCORE_OFFSET))(this, array, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HASHFINAL_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Padding(::System::Int32 nLength)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_PADDING_OFFSET))(this, nLength);
		}

		::System::UInt32 F(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_F_OFFSET))(this, x, y, z);
		}

		::System::UInt32 G(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_G_OFFSET))(this, x, y, z);
		}

		::System::UInt32 H(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_H_OFFSET))(this, x, y, z);
		}

		::System::UInt32 ROL(::System::UInt32 x, ::System::Byte n)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ROL_OFFSET))(this, x, n);
		}

		::System::Void FF(::System::UInt32& a, ::System::UInt32 b, ::System::UInt32 c, ::System::UInt32 d, ::System::UInt32 x, ::System::Byte s)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_FF_OFFSET))(this, a, b, c, d, x, s);
		}

		::System::Void GG(::System::UInt32& a, ::System::UInt32 b, ::System::UInt32 c, ::System::UInt32 d, ::System::UInt32 x, ::System::Byte s)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_GG_OFFSET))(this, a, b, c, d, x, s);
		}

		::System::Void HH(::System::UInt32& a, ::System::UInt32 b, ::System::UInt32 c, ::System::UInt32 d, ::System::UInt32 x, ::System::Byte s)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_HH_OFFSET))(this, a, b, c, d, x, s);
		}

		::System::Void Encode(::Il2CppArray<::System::Byte>* output, ::Il2CppArray<::System::UInt32>* input)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_ENCODE_OFFSET))(this, output, input);
		}

		::System::Void Decode(::Il2CppArray<::System::UInt32>* output, ::Il2CppArray<::System::Byte>* input, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_DECODE_OFFSET))(this, output, input, index);
		}

		::System::Void MD4Transform(::Il2CppArray<::System::UInt32>* state, ::Il2CppArray<::System::Byte>* block, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_MD4TRANSFORM_OFFSET))(this, state, block, index);
		}
	};
}
