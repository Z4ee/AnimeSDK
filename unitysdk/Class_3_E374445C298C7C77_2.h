#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_2874B2771F6EE431;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_2_METHOD_3_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xBAF6450)
#define CLASS_3_E374445C298C7C77_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAF63E0)
#define CLASS_3_E374445C298C7C77_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAF68D0)
#define CLASS_3_E374445C298C7C77_2__CTOR_OFFSET UNITYSDK_OFFSET(0xBAF63B0)

inline static constexpr unsigned int Class_3_E374445C298C7C77_2_TypeDefinitionIndex = 53861;

class Class_3_E374445C298C7C77_2 : public ::RPG::GameCore::ST_Task_1<::Class_4_2874B2771F6EE431*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2874B2771F6EE431* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2874B2771F6EE431*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_2_METHOD_3_4A41C63BFE58D26F_OFFSET))(this);
	}
};
