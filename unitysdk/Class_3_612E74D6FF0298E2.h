#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A0580152EB393340;
class Class_2_C73AB3362B307540;
class Class_4_1FB815F46FC4D5AE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_612E74D6FF0298E2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F88CE0)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_1DC46F2F3F7C5302_OFFSET UNITYSDK_OFFSET(0x8F88D80)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_6B3B83631C5B878B_OFFSET UNITYSDK_OFFSET(0x8F894E0)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_9261D8DEDAE16239_OFFSET UNITYSDK_OFFSET(0x8F897A0)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_B65F6354123F515E_OFFSET UNITYSDK_OFFSET(0x8F88EB0)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0x8F893C0)
#define CLASS_3_612E74D6FF0298E2_METHOD_3_CD1999020A5B5C6D_OFFSET UNITYSDK_OFFSET(0x8F89A40)
#define CLASS_3_612E74D6FF0298E2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8F88A80)
#define CLASS_3_612E74D6FF0298E2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8F88D30)
#define CLASS_3_612E74D6FF0298E2_TICK_OFFSET UNITYSDK_OFFSET(0x8F88B50)
#define CLASS_3_612E74D6FF0298E2__CTOR_OFFSET UNITYSDK_OFFSET(0x8F88A50)
#define CLASS_3_612E74D6FF0298E2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F89B80)
#define CLASS_3_612E74D6FF0298E2___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8F89BD0)

inline static constexpr unsigned int Class_3_612E74D6FF0298E2_TypeDefinitionIndex = 48215;

class Class_3_612E74D6FF0298E2 : public ::RPG::GameCore::ST_Task_1<::Class_4_1FB815F46FC4D5AE*>
{
public:
	::Class_2_A0580152EB393340* Field_3_2; // 0x28
	::System::Single Field_3_0; // 0x30
	::System::Boolean Field_3_1; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_1FB815F46FC4D5AE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_1FB815F46FC4D5AE*))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_3_1DC46F2F3F7C5302(::Class_2_C73AB3362B307540* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C73AB3362B307540*))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_METHOD_3_1DC46F2F3F7C5302_OFFSET))(this, a1);
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

	::System::Void Method_3_CD1999020A5B5C6D(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_METHOD_3_CD1999020A5B5C6D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_9261D8DEDAE16239(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2_METHOD_3_9261D8DEDAE16239_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_612E74D6FF0298E2___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
