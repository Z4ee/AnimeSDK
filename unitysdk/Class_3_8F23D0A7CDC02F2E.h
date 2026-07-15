#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_1968AB1BE3C4720D_3;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8F23D0A7CDC02F2E_METHOD_3_7DD2ABCCFE16960C_OFFSET UNITYSDK_OFFSET(0x179986E0)
#define CLASS_3_8F23D0A7CDC02F2E__CTOR_OFFSET UNITYSDK_OFFSET(0x179983D0)
#define CLASS_3_8F23D0A7CDC02F2E__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x17998560)
#define CLASS_3_8F23D0A7CDC02F2E__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x17998620)

inline static constexpr unsigned int Class_3_8F23D0A7CDC02F2E_TypeDefinitionIndex = 50489;

class Class_3_8F23D0A7CDC02F2E : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_1968AB1BE3C4720D_3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_1968AB1BE3C4720D_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_1968AB1BE3C4720D_3*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_7DD2ABCCFE16960C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_METHOD_3_7DD2ABCCFE16960C_OFFSET))(this, a1);
	}
};
