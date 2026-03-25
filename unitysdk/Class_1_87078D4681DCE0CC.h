#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointModifyFunction.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_2_F3EEA4ED0244C1A6;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_87078D4681DCE0CC_CLEAR_OFFSET UNITYSDK_OFFSET(0x10ABE770)
#define CLASS_1_87078D4681DCE0CC__CTOR_OFFSET UNITYSDK_OFFSET(0x10ABE7D0)

inline static constexpr unsigned int Class_1_87078D4681DCE0CC_TypeDefinitionIndex = 44904;

class Class_1_87078D4681DCE0CC : public ::System::Object
{
public:
	::Class_2_F3EEA4ED0244C1A6* Field_1_3; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::RPG::GameCore::ElationPointModifyFunction Field_1_1; // 0x20
	::RPG::GameCore::FixPoint Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87078D4681DCE0CC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87078D4681DCE0CC_CLEAR_OFFSET))(this);
	}
};
