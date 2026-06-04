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

#define CLASS_2_71FFB0705BF6B324_STRUCT_2_4E5014B136273897_METHOD_2_34BE8280F64169A4_OFFSET UNITYSDK_OFFSET(0x830E0)
#define CLASS_2_71FFB0705BF6B324_STRUCT_2_4E5014B136273897_METHOD_2_B5BAA046C2FEA241_OFFSET UNITYSDK_OFFSET(0x83080)

inline static constexpr unsigned int Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897_TypeDefinitionIndex = 66916;

struct alignas(8) Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897
{
	::RPG::GameCore::UIDamageTextType Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::RPG::GameCore::GameEntity* Field_2_3; // 0x20
	::RPG::GameCore::FixPoint Field_2_4; // 0x28
	::RPG::Client::UIFloatingTextType Field_2_5; // 0x30
	::Struct_2_5909FD7779934CCA Field_2_6; // 0x38
	::UnityEngine::Vector3 Field_2_7; // 0x140
	::RPG::Client::TextID Field_2_8; // 0x150
	::RPG::GameCore::DamateTextFontStyle Field_2_9; // 0x160

	::RPG::GameCore::TeamType Method_2_B5BAA046C2FEA241()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_STRUCT_2_4E5014B136273897_METHOD_2_B5BAA046C2FEA241_OFFSET))(this);
	}

	/*
	::Struct_2_B6A3FA7992F9F37E_14 Method_2_34BE8280F64169A4()
	{
		return ((::Struct_2_B6A3FA7992F9F37E_14(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_STRUCT_2_4E5014B136273897_METHOD_2_34BE8280F64169A4_OFFSET))(this);
	}
	*/
};
