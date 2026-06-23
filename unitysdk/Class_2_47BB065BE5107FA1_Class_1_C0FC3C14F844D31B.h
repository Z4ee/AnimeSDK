#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_47BB065BE5107FA1_CLASS_1_C0FC3C14F844D31B_METHOD_1_219FDEC28E2063A2_OFFSET UNITYSDK_OFFSET(0x13BDBB30)
#define CLASS_2_47BB065BE5107FA1_CLASS_1_C0FC3C14F844D31B__CTOR_OFFSET UNITYSDK_OFFSET(0x13BDBB20)

inline static constexpr unsigned int Class_2_47BB065BE5107FA1_Class_1_C0FC3C14F844D31B_TypeDefinitionIndex = 67830;

class Class_2_47BB065BE5107FA1_Class_1_C0FC3C14F844D31B : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_C0FC3C14F844D31B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_219FDEC28E2063A2(::MoleMole::TurnBattleEntityUnit* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_C0FC3C14F844D31B_METHOD_1_219FDEC28E2063A2_OFFSET))(this, a1);
	}
};
