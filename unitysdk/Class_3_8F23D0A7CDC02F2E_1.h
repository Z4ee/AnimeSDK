#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_1968AB1BE3C4720D_2;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8F23D0A7CDC02F2E_1_METHOD_3_7DD2ABCCFE16960C_OFFSET UNITYSDK_OFFSET(0x186C0F30)
#define CLASS_3_8F23D0A7CDC02F2E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x186C0C20)
#define CLASS_3_8F23D0A7CDC02F2E_1__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x186C0DB0)
#define CLASS_3_8F23D0A7CDC02F2E_1__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x186C0E70)

inline static constexpr unsigned int Class_3_8F23D0A7CDC02F2E_1_TypeDefinitionIndex = 53292;

class Class_3_8F23D0A7CDC02F2E_1 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_1968AB1BE3C4720D_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_1968AB1BE3C4720D_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_1968AB1BE3C4720D_2*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_1__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_1__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_7DD2ABCCFE16960C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_1_METHOD_3_7DD2ABCCFE16960C_OFFSET))(this, a1);
	}
};
