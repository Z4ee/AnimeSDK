#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class PossessionConfigRow; }
namespace System { class String; }

#define STRUCT_2_E98D2D9BCC3C4006__CTOR_OFFSET UNITYSDK_OFFSET(0x3AB6D70)

inline static constexpr unsigned int Struct_2_E98D2D9BCC3C4006_TypeDefinitionIndex = 69228;

struct alignas(8) Struct_2_E98D2D9BCC3C4006
{
	::System::String* BDACPPLKLGL; // 0x10
	::System::String* BAHLDFMIJFG; // 0x18
	::UnityEngine::Vector3 AIBGEDIGEOO; // 0x20
	::UnityEngine::Quaternion LOLLEGPLMOO; // 0x2C
	::UnityEngine::Vector3 ELHCMMCHDOB; // 0x3C

	::System::Void _ctor(::RPG::GameCore::PossessionConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PossessionConfigRow*))((::PBYTE)hIl2Cpp + STRUCT_2_E98D2D9BCC3C4006__CTOR_OFFSET))(this, a1);
	}
};
