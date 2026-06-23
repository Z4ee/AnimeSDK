#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SHA224.h"

#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_ADDLENGTH_OFFSET UNITYSDK_OFFSET(0x1E7BECD0)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_CH_OFFSET UNITYSDK_OFFSET(0x1E7BE230)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1E7BE2D0)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1E7BE960)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7BE120)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_MAJ_OFFSET UNITYSDK_OFFSET(0x1E7BE240)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x1E7BE3B0)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_PROCESSFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1E7BEAD0)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_RO0_OFFSET UNITYSDK_OFFSET(0x1E7BE250)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_RO1_OFFSET UNITYSDK_OFFSET(0x1E7BE270)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_SIG0_OFFSET UNITYSDK_OFFSET(0x1E7BE290)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_SIG1_OFFSET UNITYSDK_OFFSET(0x1E7BE2B0)
#define MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BE0A0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int SHA224Managed_TypeDefinitionIndex = 2471;

	class SHA224Managed : public ::Mono::Security::Cryptography::SHA224
	{
	public:
		// static const ::System::Int32 BLOCK_SIZE_BYTES = 0x40; // 0x0
		::Il2CppArray<::System::UInt32>* _H; // 0x28
		::Il2CppArray<::System::UInt32>* buff; // 0x30
		::Il2CppArray<::System::Byte>* _ProcessingBuffer; // 0x38
		::System::Int32 _ProcessingBufferCount; // 0x40
		::System::UInt64 count; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED__CTOR_OFFSET))(this);
		}

		::System::UInt32 Ch(::System::UInt32 u, ::System::UInt32 v, ::System::UInt32 w)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_CH_OFFSET))(this, u, v, w);
		}

		::System::UInt32 Maj(::System::UInt32 u, ::System::UInt32 v, ::System::UInt32 w)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_MAJ_OFFSET))(this, u, v, w);
		}

		::System::UInt32 Ro0(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_RO0_OFFSET))(this, x);
		}

		::System::UInt32 Ro1(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_RO1_OFFSET))(this, x);
		}

		::System::UInt32 Sig0(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_SIG0_OFFSET))(this, x);
		}

		::System::UInt32 Sig1(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_SIG1_OFFSET))(this, x);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* rgb, ::System::Int32 start, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_HASHCORE_OFFSET))(this, rgb, start, size);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_INITIALIZE_OFFSET))(this);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_PROCESSBLOCK_OFFSET))(this, inputBuffer, inputOffset);
		}

		::System::Void ProcessFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_PROCESSFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Void AddLength(::System::UInt64 length, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHA224MANAGED_ADDLENGTH_OFFSET))(this, length, buffer, position);
		}
	};
}
