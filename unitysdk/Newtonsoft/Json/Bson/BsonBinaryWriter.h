#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class Encoding; }

#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18803C50)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBinaryWriter_TypeDefinitionIndex = 9498;

	class BsonBinaryWriter : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(BsonBinaryWriter_TypeDefinitionIndex)->GetStaticField(0x2D570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER__CCTOR_OFFSET))();
		}
	};
}
