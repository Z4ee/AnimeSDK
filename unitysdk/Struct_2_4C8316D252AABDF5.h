#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELookAtTargetSource.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define STRUCT_2_4C8316D252AABDF5__CTOR_OFFSET UNITYSDK_OFFSET(0x395E4E0)

inline static constexpr unsigned int Struct_2_4C8316D252AABDF5_TypeDefinitionIndex = 54740;

struct alignas(8) Struct_2_4C8316D252AABDF5
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x18
	::RPG::GameCore::ELookAtTargetSource Field_2_2; // 0x24
	::System::String* Field_2_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::ELookAtTargetSource a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::RPG::GameCore::ELookAtTargetSource, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_4C8316D252AABDF5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
