#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Collision; }

#define STRUCT_2_3C684EFFCD4D30FA_METHOD_2_1DDD80FE348F2264_OFFSET UNITYSDK_OFFSET(0x12F0F4E0)

inline static constexpr unsigned int Struct_2_3C684EFFCD4D30FA_TypeDefinitionIndex = 42720;

struct alignas(8) Struct_2_3C684EFFCD4D30FA
{
	::System::Int32 Field_2_2; // 0x10
	::System::String* Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_0; // 0x20
	::UnityEngine::Vector3 Field_2_7; // 0x2C
	::System::Single Field_2_6; // 0x38
	::MoleMole::EntityHandle Field_2_5; // 0x40

	static ::Struct_2_3C684EFFCD4D30FA Method_2_1DDD80FE348F2264(::UnityEngine::Collision* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::Struct_2_3C684EFFCD4D30FA(*)(::UnityEngine::Collision*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + STRUCT_2_3C684EFFCD4D30FA_METHOD_2_1DDD80FE348F2264_OFFSET))(a1, a2);
	}
};
