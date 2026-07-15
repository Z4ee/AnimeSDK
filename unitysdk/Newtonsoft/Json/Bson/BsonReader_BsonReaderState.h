#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonReader_BsonReaderState_TypeDefinitionIndex = 9512;

	enum class BsonReader_BsonReaderState : ::System::Int32
	{
		Normal = 0,
		ReferenceStart = 1,
		ReferenceRef = 2,
		ReferenceId = 3,
		CodeWScopeStart = 4,
		CodeWScopeCode = 5,
		CodeWScopeScope = 6,
		CodeWScopeScopeObject = 7,
		CodeWScopeScopeEnd = 8,
	};
}
