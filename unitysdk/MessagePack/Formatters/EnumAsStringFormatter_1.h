#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int EnumAsStringFormatter_1_TypeDefinitionIndex = 7389;

	template <typename T>
	class EnumAsStringFormatter_1 : public ::System::Object
	{
	public:
		::System::Boolean ignoreCase; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, T>* nameValueMapping; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<T, ::System::String*>* valueNameMapping; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>* clrToSerializationName; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>* serializationToClrName; // 0x0
		::System::Boolean isFlags; // 0x0
	};
}
