#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_2CF31AD2A208F31C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13641B10)
#define CLASS_3_E374445C298C7C77_4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13641BA0)
#define CLASS_3_E374445C298C7C77_4__CTOR_OFFSET UNITYSDK_OFFSET(0x13641AE0)

inline static constexpr unsigned int Class_3_E374445C298C7C77_4_TypeDefinitionIndex = 50097;

class Class_3_E374445C298C7C77_4 : public ::RPG::GameCore::ST_Task_1<::Class_4_2CF31AD2A208F31C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2CF31AD2A208F31C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2CF31AD2A208F31C*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_4_ONTASKRESET_OFFSET))(this);
	}
};
