#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMaterialPropertyModifier_MBProperty_TypeDefinitionIndex = 65458;

	struct alignas(8) MonoMaterialPropertyModifier_MBProperty
	{
		::System::String* PropertyName; // 0x10
		::System::Int32 PropertyID; // 0x18
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x1C
		::System::Single FloatData; // 0x20
		::UnityEngine::Color ColorData; // 0x24
		::UnityEngine::Vector4 VectorData; // 0x34
	};
}
