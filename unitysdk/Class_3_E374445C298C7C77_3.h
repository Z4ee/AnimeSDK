#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_328B6E8332268CCA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158E3140)
#define CLASS_3_E374445C298C7C77_3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158E31D0)
#define CLASS_3_E374445C298C7C77_3__CTOR_OFFSET UNITYSDK_OFFSET(0x158E3110)

inline static constexpr unsigned int Class_3_E374445C298C7C77_3_TypeDefinitionIndex = 53862;

class Class_3_E374445C298C7C77_3 : public ::RPG::GameCore::ST_Task_1<::Class_4_328B6E8332268CCA*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_328B6E8332268CCA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_328B6E8332268CCA*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_3_ONTASKRESET_OFFSET))(this);
	}
};
