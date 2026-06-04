#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IDictionary; }

#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3828480)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace MessagePack
{
	inline static constexpr unsigned int Utilities_NonGenericDictionaryEnumerable_TypeDefinitionIndex = 7202;

	struct alignas(8) Utilities_NonGenericDictionaryEnumerable
	{
		::System::Collections::IDictionary* dictionary; // 0x10

		::System::Void _ctor(::System::Collections::IDictionary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERABLE__CTOR_OFFSET))(this, a1);
		}

		/*
		::MessagePack::Utilities_NonGenericDictionaryEnumerator GetEnumerator()
		{
			return ((::MessagePack::Utilities_NonGenericDictionaryEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
		*/
	};
}
