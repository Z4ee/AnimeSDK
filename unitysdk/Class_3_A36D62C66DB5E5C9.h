#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_SetAlertLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A36D62C66DB5E5C9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x999DFD0)
#define CLASS_3_A36D62C66DB5E5C9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x999E230)
#define CLASS_3_A36D62C66DB5E5C9__CTOR_OFFSET UNITYSDK_OFFSET(0x999DFA0)

inline static constexpr unsigned int Class_3_A36D62C66DB5E5C9_TypeDefinitionIndex = 48237;

class Class_3_A36D62C66DB5E5C9 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_SetAlertLevel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_SetAlertLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_SetAlertLevel*))((::PBYTE)hIl2Cpp + CLASS_3_A36D62C66DB5E5C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A36D62C66DB5E5C9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A36D62C66DB5E5C9_ONTASKRESET_OFFSET))(this);
	}
};
