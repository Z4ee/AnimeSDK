#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class DialogEmitterBehavior_DialogData; }

namespace RPG::Client
{
	inline static constexpr unsigned int DialogEmitterBehavior_Struct_2_7B5711D3A8C81549_TypeDefinitionIndex = 67704;

	struct alignas(8) DialogEmitterBehavior_Struct_2_7B5711D3A8C81549
	{
		::RPG::Client::DialogEmitterBehavior_DialogData* Field_2_0; // 0x10
		::UnityEngine::Vector3 Field_2_1; // 0x18
		::System::Single Field_2_2; // 0x24
		::System::Single Field_2_3; // 0x28
		::System::Single Field_2_4; // 0x2C
		::UnityEngine::Vector3 Field_2_5; // 0x30
		::System::Single Field_2_6; // 0x3C
		::System::Int32 Field_2_7; // 0x40
	};
}
