#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_FEA1F11597C9F3B2_CLASS_1_31B35383D25353CE__CTOR_OFFSET UNITYSDK_OFFSET(0x114B65E0)

inline static constexpr unsigned int Class_2_FEA1F11597C9F3B2_Class_1_31B35383D25353CE_TypeDefinitionIndex = 58542;

class Class_2_FEA1F11597C9F3B2_Class_1_31B35383D25353CE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEA1F11597C9F3B2_CLASS_1_31B35383D25353CE__CTOR_OFFSET))(this);
	}
};
