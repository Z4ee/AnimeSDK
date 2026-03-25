#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_LookAt; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_3_042A41DEB9FFF90D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BC17E0)
#define CLASS_3_042A41DEB9FFF90D_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10BC1730)
#define CLASS_3_042A41DEB9FFF90D_METHOD_3_A6C726B778E061BA_OFFSET UNITYSDK_OFFSET(0x10BC10C0)
#define CLASS_3_042A41DEB9FFF90D_METHOD_3_EDD85CC36365D792_OFFSET UNITYSDK_OFFSET(0x10BC1890)
#define CLASS_3_042A41DEB9FFF90D_METHOD_3_FF34F258ECB5ABCB_OFFSET UNITYSDK_OFFSET(0x10BC13B0)
#define CLASS_3_042A41DEB9FFF90D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BC0DC0)
#define CLASS_3_042A41DEB9FFF90D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BC1790)
#define CLASS_3_042A41DEB9FFF90D_TICK_OFFSET UNITYSDK_OFFSET(0x10BC1640)
#define CLASS_3_042A41DEB9FFF90D__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC0D20)
#define CLASS_3_042A41DEB9FFF90D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BC1950)
#define CLASS_3_042A41DEB9FFF90D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10BC1940)

inline static constexpr unsigned int Class_3_042A41DEB9FFF90D_TypeDefinitionIndex = 42311;

class Class_3_042A41DEB9FFF90D : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_LookAt*>
{
public:
	::UnityEngine::Transform* Field_3_1; // 0x28
	::UnityEngine::Transform* Field_3_0; // 0x30
	::System::Single Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_LookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_LookAt*))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_FF34F258ECB5ABCB(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D_METHOD_3_FF34F258ECB5ABCB_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_3_A6C726B778E061BA()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D_METHOD_3_A6C726B778E061BA_OFFSET))(this);
	}

	::System::Void Method_3_EDD85CC36365D792(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D_METHOD_3_EDD85CC36365D792_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_042A41DEB9FFF90D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
