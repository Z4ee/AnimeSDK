#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_06E1C44E07308D00_STRUCT_2_99A4D6E1A7C62876_METHOD_2_34BE8280F64169A4_OFFSET UNITYSDK_OFFSET(0x14E9340)
#define CLASS_2_06E1C44E07308D00_STRUCT_2_99A4D6E1A7C62876_METHOD_2_B5BAA046C2FEA241_OFFSET UNITYSDK_OFFSET(0x14E92E0)

inline static constexpr unsigned int Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876_TypeDefinitionIndex = 58659;

struct alignas(8) Class_2_06E1C44E07308D00_Struct_2_99A4D6E1A7C62876
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

	::RPG::GameCore::TeamType Method_2_B5BAA046C2FEA241()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_STRUCT_2_99A4D6E1A7C62876_METHOD_2_B5BAA046C2FEA241_OFFSET))(this);
	}

	/*
	::Struct_2_B6A3FA7992F9F37E_13 Method_2_34BE8280F64169A4()
	{
		return ((::Struct_2_B6A3FA7992F9F37E_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_STRUCT_2_99A4D6E1A7C62876_METHOD_2_34BE8280F64169A4_OFFSET))(this);
	}
	*/
};
