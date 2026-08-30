#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrawType.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

inline static constexpr unsigned int Struct_2_B3CFB45E7E960210_TypeDefinitionIndex = 68861;

struct alignas(8) Struct_2_B3CFB45E7E960210
{
	::UnityEngine::GameObject* OHGLFDDMIFB; // 0x10
	::Il2CppArray<::UnityEngine::Mesh*>* NAHGIMBPFHD; // 0x18
	::Il2CppArray<::UnityEngine::Material*>* BPIHKOEBGLD; // 0x20
	::RPG::Client::DrawType CMFPKOBDENN; // 0x28
	::System::Int32 IOAMACLKEPH; // 0x2C
	::System::Int32 EMNAGPKLJIH; // 0x30
};
