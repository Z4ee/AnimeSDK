#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_SetAlertLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A36D62C66DB5E5C9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1522CE50)
#define CLASS_3_A36D62C66DB5E5C9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1522D120)
#define CLASS_3_A36D62C66DB5E5C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1522CE20)

inline static constexpr unsigned int Class_3_A36D62C66DB5E5C9_TypeDefinitionIndex = 49874;

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
