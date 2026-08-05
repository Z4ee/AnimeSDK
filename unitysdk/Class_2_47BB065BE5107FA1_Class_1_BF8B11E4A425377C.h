#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define CLASS_2_47BB065BE5107FA1_CLASS_1_BF8B11E4A425377C_METHOD_1_D9BAA9877EA14480_OFFSET UNITYSDK_OFFSET(0x11184080)
#define CLASS_2_47BB065BE5107FA1_CLASS_1_BF8B11E4A425377C__CTOR_OFFSET UNITYSDK_OFFSET(0x11184070)

inline static constexpr unsigned int Class_2_47BB065BE5107FA1_Class_1_BF8B11E4A425377C_TypeDefinitionIndex = 73114;

class Class_2_47BB065BE5107FA1_Class_1_BF8B11E4A425377C : public ::System::Object
{
public:
	::System::Single Field_1_7; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_BF8B11E4A425377C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D9BAA9877EA14480(::MoleMole::TurnBattleEntityUnit* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_BF8B11E4A425377C_METHOD_1_D9BAA9877EA14480_OFFSET))(this, a1);
	}
};
