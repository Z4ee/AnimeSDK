#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_96B2FC181D86CC4A_CLASS_1_768DEC24E4490E33__CTOR_OFFSET UNITYSDK_OFFSET(0x12399040)

inline static constexpr unsigned int Class_1_96B2FC181D86CC4A_Class_1_768DEC24E4490E33_TypeDefinitionIndex = 50084;

class Class_1_96B2FC181D86CC4A_Class_1_768DEC24E4490E33 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::FixVec2 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::FixVec2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_CLASS_1_768DEC24E4490E33__CTOR_OFFSET))(this, a1);
	}
};
