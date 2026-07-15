#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrawType.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

inline static constexpr unsigned int Struct_2_B3CFB45E7E960210_TypeDefinitionIndex = 65822;

struct alignas(8) Struct_2_B3CFB45E7E960210
{
	::UnityEngine::GameObject* Field_2_0; // 0x10
	::Il2CppArray<::UnityEngine::Mesh*>* Field_2_1; // 0x18
	::Il2CppArray<::UnityEngine::Material*>* Field_2_2; // 0x20
	::RPG::Client::DrawType Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x2C
	::System::Int32 Field_2_5; // 0x30
};
