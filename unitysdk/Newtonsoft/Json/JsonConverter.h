#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_JSONCONVERTER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1B7048C0)
#define NEWTONSOFT_JSON_JSONCONVERTER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1B7048D0)
#define NEWTONSOFT_JSON_JSONCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7048E0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConverter_TypeDefinitionIndex = 6861;

	class JsonConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER_GET_CANWRITE_OFFSET))(this);
		}
	};
}
