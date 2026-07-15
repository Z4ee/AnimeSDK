#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_3BFC5C66FD44F207_CLASS_1_31B35383D25353CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1615B540)

inline static constexpr unsigned int Class_2_3BFC5C66FD44F207_Class_1_31B35383D25353CE_TypeDefinitionIndex = 68259;

class Class_2_3BFC5C66FD44F207_Class_1_31B35383D25353CE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BFC5C66FD44F207_CLASS_1_31B35383D25353CE__CTOR_OFFSET))(this);
	}
};
