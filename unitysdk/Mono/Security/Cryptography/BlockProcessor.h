#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR_CORE_1_OFFSET UNITYSDK_OFFSET(0x1C4C7820)
#define MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR_CORE_OFFSET UNITYSDK_OFFSET(0x1C4C7800)
#define MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C4C7760)
#define MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR_FINAL_OFFSET UNITYSDK_OFFSET(0x1C4C7AD0)
#define MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C4C77D0)
#define MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4C76A0)
#define MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C7560)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int BlockProcessor_TypeDefinitionIndex = 2451;

	class BlockProcessor : public ::System::Object
	{
	public:
		::System::Security::Cryptography::ICryptoTransform* transform; // 0x10
		::Il2CppArray<::System::Byte>* block; // 0x18
		::System::Int32 blockCount; // 0x20
		::System::Int32 blockSize; // 0x24

		::System::Void _ctor(::System::Security::Cryptography::ICryptoTransform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::ICryptoTransform*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR__CTOR_OFFSET))(this, transform);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::ICryptoTransform* transform, ::System::Int32 blockSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::ICryptoTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR__CTOR_1_OFFSET))(this, transform, blockSize);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR_FINALIZE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR_INITIALIZE_OFFSET))(this);
		}

		::System::Void Core(::Il2CppArray<::System::Byte>* rgb)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR_CORE_OFFSET))(this, rgb);
		}

		::System::Void Core_1(::Il2CppArray<::System::Byte>* rgb, ::System::Int32 ib, ::System::Int32 cb)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR_CORE_1_OFFSET))(this, rgb, ib, cb);
		}

		::Il2CppArray<::System::Byte>* Final()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_BLOCKPROCESSOR_FINAL_OFFSET))(this);
		}
	};
}
