#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_009FC7B1D40A84BE_STRUCT_2_4E5014B136273897_METHOD_2_34BE8280F64169A4_OFFSET UNITYSDK_OFFSET(0x88470)
#define CLASS_2_009FC7B1D40A84BE_STRUCT_2_4E5014B136273897_METHOD_2_B5BAA046C2FEA241_OFFSET UNITYSDK_OFFSET(0x88410)

inline static constexpr unsigned int Class_2_009FC7B1D40A84BE_Struct_2_4E5014B136273897_TypeDefinitionIndex = 71542;

struct alignas(8) Class_2_009FC7B1D40A84BE_Struct_2_4E5014B136273897
{
	::RPG::GameCore::UIDamageTextType GMPGDEINODK; // 0x10
	::System::Single GAFENHHEBPG; // 0x14
	::System::Single HKGPLKJOCDH; // 0x18
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
	::RPG::GameCore::FixPoint IMKHIDEBGEB; // 0x28
	::RPG::Client::UIFloatingTextType JMNJKGNBNJN; // 0x30
	::Struct_2_5909FD7779934CCA MCAFCOEAPAB; // 0x38
	::UnityEngine::Vector3 CLABKMPLKGB; // 0x140
	::RPG::Client::TextID BFLJGKBPMGE; // 0x150
	::RPG::GameCore::DamateTextFontStyle JFMKCFHNFDF; // 0x160

	::RPG::GameCore::TeamType Method_2_B5BAA046C2FEA241()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009FC7B1D40A84BE_STRUCT_2_4E5014B136273897_METHOD_2_B5BAA046C2FEA241_OFFSET))(this);
	}

	/*
	::Struct_2_B6A3FA7992F9F37E_13 Method_2_34BE8280F64169A4()
	{
		return ((::Struct_2_B6A3FA7992F9F37E_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_009FC7B1D40A84BE_STRUCT_2_4E5014B136273897_METHOD_2_34BE8280F64169A4_OFFSET))(this);
	}
	*/
};
