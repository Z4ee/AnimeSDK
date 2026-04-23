#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_2CF31AD2A208F31C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x905BB70)
#define CLASS_3_E374445C298C7C77_3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x905BC00)
#define CLASS_3_E374445C298C7C77_3__CTOR_OFFSET UNITYSDK_OFFSET(0x905BB40)

inline static constexpr unsigned int Class_3_E374445C298C7C77_3_TypeDefinitionIndex = 49430;

class Class_3_E374445C298C7C77_3 : public ::RPG::GameCore::ST_Task_1<::Class_4_2CF31AD2A208F31C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2CF31AD2A208F31C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2CF31AD2A208F31C*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_3__CTOR_OFFSET))(this, a1, a2);
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
