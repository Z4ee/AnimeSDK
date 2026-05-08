#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define CLASS_2_47BB065BE5107FA1_CLASS_1_7A89B5F1C27BBC76_METHOD_1_7FC98349BB909C92_OFFSET UNITYSDK_OFFSET(0x1594A8D0)
#define CLASS_2_47BB065BE5107FA1_CLASS_1_7A89B5F1C27BBC76__CTOR_OFFSET UNITYSDK_OFFSET(0x1594A8C0)

inline static constexpr unsigned int Class_2_47BB065BE5107FA1_Class_1_7A89B5F1C27BBC76_TypeDefinitionIndex = 72840;

class Class_2_47BB065BE5107FA1_Class_1_7A89B5F1C27BBC76 : public ::System::Object
{
public:
	::Struct_2_FA5F50563E60AFBA Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_7A89B5F1C27BBC76__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7FC98349BB909C92(::MoleMole::TurnBattleEntityUnit* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_7A89B5F1C27BBC76_METHOD_1_7FC98349BB909C92_OFFSET))(this, a1);
	}
};
