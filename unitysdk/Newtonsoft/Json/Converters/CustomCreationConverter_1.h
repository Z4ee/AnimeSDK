#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int CustomCreationConverter_1_TypeDefinitionIndex = 9477;

	template <typename T>
	class CustomCreationConverter_1 : public ::Newtonsoft::Json::JsonConverter
	{
	public:
	};
}
