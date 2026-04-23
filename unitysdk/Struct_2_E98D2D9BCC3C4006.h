#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class PossessionConfigRow; }
namespace System { class String; }

#define STRUCT_2_E98D2D9BCC3C4006__CTOR_OFFSET UNITYSDK_OFFSET(0xCF8C0)

inline static constexpr unsigned int Struct_2_E98D2D9BCC3C4006_TypeDefinitionIndex = 63864;

struct alignas(8) Struct_2_E98D2D9BCC3C4006
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::UnityEngine::Quaternion Field_2_3; // 0x2C
	::UnityEngine::Vector3 Field_2_4; // 0x3C

	::System::Void _ctor(::RPG::GameCore::PossessionConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PossessionConfigRow*))((::PBYTE)hIl2Cpp + STRUCT_2_E98D2D9BCC3C4006__CTOR_OFFSET))(this, a1);
	}
};
