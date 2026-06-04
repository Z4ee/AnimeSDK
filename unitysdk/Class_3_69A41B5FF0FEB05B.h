#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_469A56953483CA0D;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_DetectAward; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_69A41B5FF0FEB05B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1356A500)
#define CLASS_3_69A41B5FF0FEB05B_METHOD_3_1C572F26E500B499_OFFSET UNITYSDK_OFFSET(0x1356B100)
#define CLASS_3_69A41B5FF0FEB05B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1356A3F0)
#define CLASS_3_69A41B5FF0FEB05B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1356A550)
#define CLASS_3_69A41B5FF0FEB05B_TICK_OFFSET UNITYSDK_OFFSET(0x1356A5A0)
#define CLASS_3_69A41B5FF0FEB05B__CTOR_OFFSET UNITYSDK_OFFSET(0x1356A3D0)
#define CLASS_3_69A41B5FF0FEB05B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1356B7E0)
#define CLASS_3_69A41B5FF0FEB05B___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1356B830)

inline static constexpr unsigned int Class_3_69A41B5FF0FEB05B_TypeDefinitionIndex = 48837;

class Class_3_69A41B5FF0FEB05B : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_DetectAward*>
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	::Class_2_469A56953483CA0D* Field_3_1; // 0x28
	::Class_2_A0580152EB393340* Field_3_2; // 0x30
	::System::Single Field_3_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_DetectAward* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_DetectAward*))((::PBYTE)hIl2Cpp + CLASS_3_69A41B5FF0FEB05B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69A41B5FF0FEB05B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69A41B5FF0FEB05B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69A41B5FF0FEB05B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_69A41B5FF0FEB05B_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1C572F26E500B499(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_69A41B5FF0FEB05B_METHOD_3_1C572F26E500B499_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69A41B5FF0FEB05B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_69A41B5FF0FEB05B___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
