#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_298A90B03D7BB92F;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8F23D0A7CDC02F2E_3_METHOD_3_7DD2ABCCFE16960C_OFFSET UNITYSDK_OFFSET(0x15BB9510)
#define CLASS_3_8F23D0A7CDC02F2E_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB91F0)
#define CLASS_3_8F23D0A7CDC02F2E_3__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15BB9390)
#define CLASS_3_8F23D0A7CDC02F2E_3__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15BB9450)

inline static constexpr unsigned int Class_3_8F23D0A7CDC02F2E_3_TypeDefinitionIndex = 53721;

class Class_3_8F23D0A7CDC02F2E_3 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_298A90B03D7BB92F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_298A90B03D7BB92F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_298A90B03D7BB92F*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_3__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_3__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_7DD2ABCCFE16960C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_3_METHOD_3_7DD2ABCCFE16960C_OFFSET))(this, a1);
	}
};
