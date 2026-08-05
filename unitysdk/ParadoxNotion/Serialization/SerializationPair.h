#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define PARADOXNOTION_SERIALIZATION_SERIALIZATIONPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF958D0)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int SerializationPair_TypeDefinitionIndex = 31298;

	class SerializationPair : public ::System::Object
	{
	public:
		::System::String* _json; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _references; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZATIONPAIR__CTOR_OFFSET))(this);
		}
	};
}
