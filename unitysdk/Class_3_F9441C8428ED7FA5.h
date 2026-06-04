#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDrinkMakerCheersInitFinish; }
namespace System { class Object; }

#define CLASS_3_F9441C8428ED7FA5_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xA74FA50)
#define CLASS_3_F9441C8428ED7FA5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA74F790)
#define CLASS_3_F9441C8428ED7FA5__CTOR_OFFSET UNITYSDK_OFFSET(0xA74F3E0)
#define CLASS_3_F9441C8428ED7FA5__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA74F570)
#define CLASS_3_F9441C8428ED7FA5__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA74F680)
#define CLASS_3_F9441C8428ED7FA5___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA74FB70)
#define CLASS_3_F9441C8428ED7FA5___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA74FB50)
#define CLASS_3_F9441C8428ED7FA5___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA74FB60)

inline static constexpr unsigned int Class_3_F9441C8428ED7FA5_TypeDefinitionIndex = 55018;

class Class_3_F9441C8428ED7FA5 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitDrinkMakerCheersInitFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish*))((::PBYTE)hIl2Cpp + CLASS_3_F9441C8428ED7FA5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9441C8428ED7FA5__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9441C8428ED7FA5__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9441C8428ED7FA5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F9441C8428ED7FA5_METHOD_3_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9441C8428ED7FA5___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9441C8428ED7FA5___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9441C8428ED7FA5___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
