#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_223BE468821F0CDD_STRUCT_2_19A76A049C476AF2_METHOD_2_34BE8280F64169A4_OFFSET UNITYSDK_OFFSET(0x15AE970)
#define CLASS_2_223BE468821F0CDD_STRUCT_2_19A76A049C476AF2_METHOD_2_B5BAA046C2FEA241_OFFSET UNITYSDK_OFFSET(0x15AE910)

inline static constexpr unsigned int Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2_TypeDefinitionIndex = 65983;

struct alignas(8) Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2
{
	::RPG::GameCore::UIDamageTextType Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::RPG::GameCore::GameEntity* Field_2_3; // 0x20
	::System::Decimal Field_2_4; // 0x28
	::RPG::Client::UIFloatingTextType Field_2_5; // 0x38
	::Struct_2_5909FD7779934CCA Field_2_6; // 0x40
	::UnityEngine::Vector3 Field_2_7; // 0x170
	::RPG::Client::TextID Field_2_8; // 0x180
	::RPG::GameCore::DamateTextFontStyle Field_2_9; // 0x190

	::RPG::GameCore::TeamType Method_2_B5BAA046C2FEA241()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_STRUCT_2_19A76A049C476AF2_METHOD_2_B5BAA046C2FEA241_OFFSET))(this);
	}

	/*
	::Struct_2_B6A3FA7992F9F37E_14 Method_2_34BE8280F64169A4()
	{
		return ((::Struct_2_B6A3FA7992F9F37E_14(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_STRUCT_2_19A76A049C476AF2_METHOD_2_34BE8280F64169A4_OFFSET))(this);
	}
	*/
};
