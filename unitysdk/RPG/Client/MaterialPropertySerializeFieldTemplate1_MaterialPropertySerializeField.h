#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField_TypeDefinitionIndex = 67498;

	struct alignas(8) MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField
	{
		::System::String* PropertyName; // 0x10
		::System::String* Keyword; // 0x18
		::System::Boolean IsLutProperty; // 0x20
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x24
		::UnityEngine::Vector4 VectorData; // 0x28
		::UnityEngine::Vector4 CacheLastVectorData; // 0x38
	};
}
