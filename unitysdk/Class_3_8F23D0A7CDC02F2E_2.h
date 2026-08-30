#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_1968AB1BE3C4720D;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8F23D0A7CDC02F2E_2_METHOD_3_7DD2ABCCFE16960C_OFFSET UNITYSDK_OFFSET(0x15A74040)
#define CLASS_3_8F23D0A7CDC02F2E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15A73D20)
#define CLASS_3_8F23D0A7CDC02F2E_2__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A73EC0)
#define CLASS_3_8F23D0A7CDC02F2E_2__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A73F80)

inline static constexpr unsigned int Class_3_8F23D0A7CDC02F2E_2_TypeDefinitionIndex = 53720;

class Class_3_8F23D0A7CDC02F2E_2 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_1968AB1BE3C4720D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_1968AB1BE3C4720D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_1968AB1BE3C4720D*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_2__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_2__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_7DD2ABCCFE16960C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_2_METHOD_3_7DD2ABCCFE16960C_OFFSET))(this, a1);
	}
};
