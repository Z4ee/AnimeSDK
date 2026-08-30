#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Airline; }

#define STRUCT_2_F93DE209E992FF0D__CTOR_OFFSET UNITYSDK_OFFSET(0x89670)

inline static constexpr unsigned int Struct_2_F93DE209E992FF0D_TypeDefinitionIndex = 59915;

struct alignas(8) Struct_2_F93DE209E992FF0D
{
	::RPG::Client::Airline* BBLOHCHKFKD; // 0x10
	::UnityEngine::Vector3 JFAGECNFHJL; // 0x18

	::System::Void _ctor(::RPG::Client::Airline* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Airline*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F93DE209E992FF0D__CTOR_OFFSET))(this, a1, a2);
	}
};
