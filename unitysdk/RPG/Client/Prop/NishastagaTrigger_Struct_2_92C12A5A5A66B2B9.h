#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int NishastagaTrigger_Struct_2_92C12A5A5A66B2B9_TypeDefinitionIndex = 73478;

	struct alignas(8) NishastagaTrigger_Struct_2_92C12A5A5A66B2B9
	{
		::RPG::GameCore::PropComponent* Field_2_0; // 0x10
		::System::String* Field_2_1; // 0x18
		::UnityEngine::Transform* Field_2_2; // 0x20
	};
}
