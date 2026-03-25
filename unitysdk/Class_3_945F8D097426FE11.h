#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_SetVariableFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_945F8D097426FE11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB260B50)
#define CLASS_3_945F8D097426FE11_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB260BE0)
#define CLASS_3_945F8D097426FE11__CTOR_OFFSET UNITYSDK_OFFSET(0xB260B20)

inline static constexpr unsigned int Class_3_945F8D097426FE11_TypeDefinitionIndex = 42276;

class Class_3_945F8D097426FE11 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_SetVariableFloat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_SetVariableFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_SetVariableFloat*))((::PBYTE)hIl2Cpp + CLASS_3_945F8D097426FE11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_945F8D097426FE11_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_945F8D097426FE11_ONTASKRESET_OFFSET))(this);
	}
};
