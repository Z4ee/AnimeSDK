#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_64C5F1782CF2062E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E374445C298C7C77_2_METHOD_3_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0xA7A7000)
#define CLASS_3_E374445C298C7C77_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7A6F90)
#define CLASS_3_E374445C298C7C77_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA7A74B0)
#define CLASS_3_E374445C298C7C77_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA7A6F60)

inline static constexpr unsigned int Class_3_E374445C298C7C77_2_TypeDefinitionIndex = 50095;

class Class_3_E374445C298C7C77_2 : public ::RPG::GameCore::ST_Task_1<::Class_4_64C5F1782CF2062E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_64C5F1782CF2062E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_64C5F1782CF2062E*))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E374445C298C7C77_2_METHOD_3_B6BB704B01BCC35B_OFFSET))(this);
	}
};
