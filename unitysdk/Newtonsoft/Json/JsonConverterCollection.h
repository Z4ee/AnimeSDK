#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/Collection_1.h"

namespace Newtonsoft::Json { class JsonConverter; }

#define NEWTONSOFT_JSON_JSONCONVERTERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1881AB40)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConverterCollection_TypeDefinitionIndex = 9266;

	class JsonConverterCollection : public ::System::Collections::ObjectModel::Collection_1<::Newtonsoft::Json::JsonConverter*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
