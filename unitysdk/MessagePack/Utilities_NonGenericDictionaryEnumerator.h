#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IDictionaryEnumerator; }

#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x229AB10)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16692B0)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1669360)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x229ABD0)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x229AA50)

namespace MessagePack
{
	inline static constexpr unsigned int Utilities_NonGenericDictionaryEnumerator_TypeDefinitionIndex = 9300;

	struct alignas(8) Utilities_NonGenericDictionaryEnumerator
	{
		::System::Collections::IDictionaryEnumerator* enumerator; // 0x10

		::System::Void _ctor(::System::Collections::IDictionary* dictionary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR__CTOR_OFFSET))(this, dictionary);
		}

		/*
		::System::Collections::DictionaryEntry get_Current()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
		*/

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
