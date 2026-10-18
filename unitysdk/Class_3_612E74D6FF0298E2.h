#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_C73AB3362B307540;
class Class_2_ED5B635C4D775055;
class Class_4_A7A283ABC4CBBF1D;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_612E74D6FF0298E2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E4A880)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_3D93BC23178A8863_OFFSET UNITYSDK_OFFSET(0x15E4A920)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_6B3B83631C5B878B_OFFSET UNITYSDK_OFFSET(0x15E4B160)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_7D1DC9F010282B43_OFFSET UNITYSDK_OFFSET(0x15E4B6C0)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_9261D8DEDAE16239_OFFSET UNITYSDK_OFFSET(0x15E4B420)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_B65F6354123F515E_OFFSET UNITYSDK_OFFSET(0x15E4AAC0)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0x15E4B040)
#define CLASS_3_612E74D6FF0298E2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E4A5A0)
#define CLASS_3_612E74D6FF0298E2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E4A8D0)
#define CLASS_3_612E74D6FF0298E2_TICK_OFFSET UNITYSDK_OFFSET(0x15E4A700)
#define CLASS_3_612E74D6FF0298E2__CTOR_OFFSET UNITYSDK_OFFSET(0x15E4A570)

inline static constexpr unsigned int Class_3_612E74D6FF0298E2_TypeDefinitionIndex = 52230;

class Class_3_612E74D6FF0298E2 : public ::RPG::GameCore::ST_Task_1<::Class_4_A7A283ABC4CBBF1D*>
{
public:
	::Class_2_ED5B635C4D775055* AGJDABDMMEH; // 0x28
	::System::Boolean KAHMFAAOIGH; // 0x30
	::System::Single OMICMGNDHCF; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_A7A283ABC4CBBF1D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_A7A283ABC4CBBF1D*))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_3D93BC23178A8863(::Class_2_C73AB3362B307540* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C73AB3362B307540*))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_METHOD_3_3D93BC23178A8863_OFFSET))(this, a1);
	}

	::System::Void Method_3_B65F6354123F515E(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_METHOD_3_B65F6354123F515E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C145705A054F47D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_METHOD_3_C145705A054F47D2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_6B3B83631C5B878B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_METHOD_3_6B3B83631C5B878B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_7D1DC9F010282B43(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_METHOD_3_7D1DC9F010282B43_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_9261D8DEDAE16239(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_METHOD_3_9261D8DEDAE16239_OFFSET))(this, a1, a2);
	}
};
