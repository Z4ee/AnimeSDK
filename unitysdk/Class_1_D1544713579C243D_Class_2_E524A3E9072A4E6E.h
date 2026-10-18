#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1544713579C243D_Class_1_3380181CA002F287.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D1544713579C243D_CLASS_2_E524A3E9072A4E6E_METHOD_2_A043B5CB7B5C886D_OFFSET UNITYSDK_OFFSET(0x15A91470)
#define CLASS_1_D1544713579C243D_CLASS_2_E524A3E9072A4E6E__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8F8B0)

inline static constexpr unsigned int Class_1_D1544713579C243D_Class_2_E524A3E9072A4E6E_TypeDefinitionIndex = 53535;

class Class_1_D1544713579C243D_Class_2_E524A3E9072A4E6E : public ::Class_1_D1544713579C243D_Class_1_3380181CA002F287
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_2_E524A3E9072A4E6E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A043B5CB7B5C886D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_2_E524A3E9072A4E6E_METHOD_2_A043B5CB7B5C886D_OFFSET))(this);
	}
};
