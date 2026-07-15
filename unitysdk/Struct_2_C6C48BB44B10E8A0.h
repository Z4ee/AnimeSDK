#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SpikeTrapState.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Collider; }

inline static constexpr unsigned int Struct_2_C6C48BB44B10E8A0_TypeDefinitionIndex = 40870;

struct alignas(8) Struct_2_C6C48BB44B10E8A0
{
	::RPG::Client::LittleGame::FiveDim::SpikeTrapState Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::Il2CppArray<::UnityEngine::Collider*>* Field_2_2; // 0x18
};
