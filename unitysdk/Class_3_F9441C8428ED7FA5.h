#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDrinkMakerCheersInitFinish; }
namespace System { class Object; }

#define CLASS_3_F9441C8428ED7FA5_METHOD_3_7DD2ABCCFE16960C_OFFSET UNITYSDK_OFFSET(0x18725210)
#define CLASS_3_F9441C8428ED7FA5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18724FD0)
#define CLASS_3_F9441C8428ED7FA5__CTOR_OFFSET UNITYSDK_OFFSET(0x18724C20)
#define CLASS_3_F9441C8428ED7FA5__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18724DB0)
#define CLASS_3_F9441C8428ED7FA5__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18724EC0)

inline static constexpr unsigned int Class_3_F9441C8428ED7FA5_TypeDefinitionIndex = 56251;

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

	::System::Void Method_3_7DD2ABCCFE16960C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F9441C8428ED7FA5_METHOD_3_7DD2ABCCFE16960C_OFFSET))(this, a1);
	}
};
