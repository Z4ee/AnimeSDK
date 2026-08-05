#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define FOUNDATION_CRC32_CALCULATEHASH_OFFSET UNITYSDK_OFFSET(0x1F62C030)
#define FOUNDATION_CRC32_COMPUTE_1_OFFSET UNITYSDK_OFFSET(0x1F62C410)
#define FOUNDATION_CRC32_COMPUTE_2_OFFSET UNITYSDK_OFFSET(0x1F62C4C0)
#define FOUNDATION_CRC32_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1F62C3C0)
#define FOUNDATION_CRC32_GET_HASHSIZE_OFFSET UNITYSDK_OFFSET(0x1F62BF60)
#define FOUNDATION_CRC32_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1F62BFC0)
#define FOUNDATION_CRC32_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1F62C260)
#define FOUNDATION_CRC32_INITIALIZETABLE_OFFSET UNITYSDK_OFFSET(0x1F62BC80)
#define FOUNDATION_CRC32_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F62BF70)
#define FOUNDATION_CRC32_UINT32TOBIGENDIANBYTES_OFFSET UNITYSDK_OFFSET(0x1F62C330)
#define FOUNDATION_CRC32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F62BBF0)
#define FOUNDATION_CRC32__CTOR_OFFSET UNITYSDK_OFFSET(0x1F62BB70)

namespace Foundation
{
	inline static constexpr unsigned int CRC32_TypeDefinitionIndex = 7915;

	class CRC32 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__defaultTable()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CRC32_TypeDefinitionIndex)->GetStaticField(0x6E70);
		}
		// static const ::System::UInt32 DefaultPolynomial = 0xEDB88320; // 0x0
		// static const ::System::UInt32 DefaultSeed = 0xFFFFFFFF; // 0x0
		::Il2CppArray<::System::UInt32>* _table; // 0x28
		::System::UInt32 _hash; // 0x30
		::System::UInt32 _seed; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 polynomial, ::System::UInt32 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32__CTOR_1_OFFSET))(this, polynomial, seed);
		}

		::System::Int32 get_HashSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32_GET_HASHSIZE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* array, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32_HASHCORE_OFFSET))(this, array, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32_HASHFINAL_OFFSET))(this);
		}

		static ::System::UInt32 Compute(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32_COMPUTE_OFFSET))(buffer);
		}

		static ::System::UInt32 Compute_1(::System::UInt32 seed, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32_COMPUTE_1_OFFSET))(seed, buffer);
		}

		static ::System::UInt32 Compute_2(::System::UInt32 polynomial, ::System::UInt32 seed, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32_COMPUTE_2_OFFSET))(polynomial, seed, buffer);
		}

		static ::Il2CppArray<::System::UInt32>* InitializeTable(::System::UInt32 polynomial)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32_INITIALIZETABLE_OFFSET))(polynomial);
		}

		static ::System::UInt32 CalculateHash(::Il2CppArray<::System::UInt32>* table, ::System::UInt32 seed, ::System::Collections::Generic::IList_1<::System::Byte>* buffer, ::System::Int32 start, ::System::Int32 size)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32_CALCULATEHASH_OFFSET))(table, seed, buffer, start, size);
		}

		static ::Il2CppArray<::System::Byte>* UInt32ToBigEndianBytes(::System::UInt32 uint32)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CRC32_UINT32TOBIGENDIANBYTES_OFFSET))(uint32);
		}
	};
}
