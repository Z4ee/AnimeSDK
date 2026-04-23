#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class Encoding; }

#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A54EC0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBinaryWriter_TypeDefinitionIndex = 8595;

	class BsonBinaryWriter : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(BsonBinaryWriter_TypeDefinitionIndex)->GetStaticField(0x339E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER__CCTOR_OFFSET))();
		}
	};
}
