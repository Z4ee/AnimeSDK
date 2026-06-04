#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_48C0863CAA8EB6BB_2;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8F23D0A7CDC02F2E_1_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x141467F0)
#define CLASS_3_8F23D0A7CDC02F2E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x141464E0)
#define CLASS_3_8F23D0A7CDC02F2E_1__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14146670)
#define CLASS_3_8F23D0A7CDC02F2E_1__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14146730)
#define CLASS_3_8F23D0A7CDC02F2E_1___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x141468F0)
#define CLASS_3_8F23D0A7CDC02F2E_1___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14146900)

inline static constexpr unsigned int Class_3_8F23D0A7CDC02F2E_1_TypeDefinitionIndex = 49557;

class Class_3_8F23D0A7CDC02F2E_1 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_48C0863CAA8EB6BB_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_48C0863CAA8EB6BB_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_48C0863CAA8EB6BB_2*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_1__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_1__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_1_METHOD_3_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_1___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_1___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
