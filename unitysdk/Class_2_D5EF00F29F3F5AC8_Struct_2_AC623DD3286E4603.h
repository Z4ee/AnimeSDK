#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_D5EF00F29F3F5AC8_STRUCT_2_AC623DD3286E4603_METHOD_2_34BE8280F64169A4_OFFSET UNITYSDK_OFFSET(0x8A8E0)
#define CLASS_2_D5EF00F29F3F5AC8_STRUCT_2_AC623DD3286E4603_METHOD_2_B5BAA046C2FEA241_OFFSET UNITYSDK_OFFSET(0x8A880)

inline static constexpr unsigned int Class_2_D5EF00F29F3F5AC8_Struct_2_AC623DD3286E4603_TypeDefinitionIndex = 71667;

struct alignas(8) Class_2_D5EF00F29F3F5AC8_Struct_2_AC623DD3286E4603
{
	::RPG::GameCore::UIDamageTextType GMPGDEINODK; // 0x10
	::System::Single GAFENHHEBPG; // 0x14
	::System::Single HKGPLKJOCDH; // 0x18
	::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x20
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x28
	::RPG::GameCore::FixPoint IMKHIDEBGEB; // 0x30
	::RPG::Client::UIFloatingTextType JMNJKGNBNJN; // 0x38
	::Struct_2_3A335394524C9E44 EFFFBJBAFDM; // 0x40
	::UnityEngine::Vector3 CLABKMPLKGB; // 0xF8
	::RPG::Client::TextID BFLJGKBPMGE; // 0x108

	::RPG::GameCore::TeamType Method_2_B5BAA046C2FEA241()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_STRUCT_2_AC623DD3286E4603_METHOD_2_B5BAA046C2FEA241_OFFSET))(this);
	}

	/*
	::Struct_2_B6A3FA7992F9F37E_13 Method_2_34BE8280F64169A4()
	{
		return ((::Struct_2_B6A3FA7992F9F37E_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5EF00F29F3F5AC8_STRUCT_2_AC623DD3286E4603_METHOD_2_34BE8280F64169A4_OFFSET))(this);
	}
	*/
};
