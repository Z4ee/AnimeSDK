#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_1968AB1BE3C4720D_1;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8F23D0A7CDC02F2E_4_METHOD_3_7DD2ABCCFE16960C_OFFSET UNITYSDK_OFFSET(0xBADE3E0)
#define CLASS_3_8F23D0A7CDC02F2E_4__CTOR_OFFSET UNITYSDK_OFFSET(0xBADE0C0)
#define CLASS_3_8F23D0A7CDC02F2E_4__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBADE260)
#define CLASS_3_8F23D0A7CDC02F2E_4__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBADE320)

inline static constexpr unsigned int Class_3_8F23D0A7CDC02F2E_4_TypeDefinitionIndex = 53738;

class Class_3_8F23D0A7CDC02F2E_4 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_1968AB1BE3C4720D_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_1968AB1BE3C4720D_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_1968AB1BE3C4720D_1*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_4__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_4__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_7DD2ABCCFE16960C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_4_METHOD_3_7DD2ABCCFE16960C_OFFSET))(this, a1);
	}
};
