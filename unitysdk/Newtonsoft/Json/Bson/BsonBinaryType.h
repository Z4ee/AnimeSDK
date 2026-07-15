#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBinaryType_TypeDefinitionIndex = 9509;

	enum class BsonBinaryType : ::System::Byte
	{
		Binary = 0x0,
		Function = 0x1,
		BinaryOld = 0x2,
		UuidOld = 0x3,
		Uuid = 0x4,
		Md5 = 0x5,
		UserDefined = 0x80,
	};
}
