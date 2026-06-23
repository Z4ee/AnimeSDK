#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCTREE_NATIVE_HASHHELPER_EXPANDPRIME_OFFSET UNITYSDK_OFFSET(0x11E6B230)
#define OCTREE_NATIVE_HASHHELPER_GETPRIME_OFFSET UNITYSDK_OFFSET(0x11E6AFC0)
#define OCTREE_NATIVE_HASHHELPER_ISPRIME_OFFSET UNITYSDK_OFFSET(0x11E6AF10)
#define OCTREE_NATIVE_HASHHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E6B2D0)

namespace Octree::Native
{
	inline static constexpr unsigned int HashHelper_TypeDefinitionIndex = 42109;

	class HashHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_primes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HashHelper_TypeDefinitionIndex)->GetStaticField(0x4DB50);
		}
		// static const ::System::Int32 MaxPrimeArrayLength = 0x7FEFFFFD; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCTREE_NATIVE_HASHHELPER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsPrime(::System::Int32 candidate)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_HASHHELPER_ISPRIME_OFFSET))(candidate);
		}

		static ::System::Int32 GetPrime(::System::Int32 min)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_HASHHELPER_GETPRIME_OFFSET))(min);
		}

		static ::System::Int32 ExpandPrime(::System::Int32 oldSize)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_HASHHELPER_EXPANDPRIME_OFFSET))(oldSize);
		}
	};
}
