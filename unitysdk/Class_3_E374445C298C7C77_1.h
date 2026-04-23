#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_64C5F1782CF2062E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_1_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x9782380)
#define CLASS_3_E374445C298C7C77_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9782310)
#define CLASS_3_E374445C298C7C77_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9782620)
#define CLASS_3_E374445C298C7C77_1__CTOR_OFFSET UNITYSDK_OFFSET(0x97822E0)

inline static constexpr unsigned int Class_3_E374445C298C7C77_1_TypeDefinitionIndex = 49428;

class Class_3_E374445C298C7C77_1 : public ::RPG::GameCore::ST_Task_1<::Class_4_64C5F1782CF2062E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_64C5F1782CF2062E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_64C5F1782CF2062E*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_1_METHOD_3_E7EF6BC52B28648C_OFFSET))(this);
	}
};
