#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IDictionary; }

#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x20C8D30)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace MessagePack
{
	inline static constexpr unsigned int Utilities_NonGenericDictionaryEnumerable_TypeDefinitionIndex = 9102;

	struct alignas(8) Utilities_NonGenericDictionaryEnumerable
	{
		::System::Collections::IDictionary* dictionary; // 0x10

		::System::Void _ctor(::System::Collections::IDictionary* dictionary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERABLE__CTOR_OFFSET))(this, dictionary);
		}

		/*
		::MessagePack::Utilities_NonGenericDictionaryEnumerator GetEnumerator()
		{
			return ((::MessagePack::Utilities_NonGenericDictionaryEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
		*/
	};
}
