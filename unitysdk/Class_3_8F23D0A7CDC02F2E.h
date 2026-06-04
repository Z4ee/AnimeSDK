#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_48C0863CAA8EB6BB_3;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8F23D0A7CDC02F2E_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x13B1B3A0)
#define CLASS_3_8F23D0A7CDC02F2E__CTOR_OFFSET UNITYSDK_OFFSET(0x13B1B090)
#define CLASS_3_8F23D0A7CDC02F2E__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13B1B220)
#define CLASS_3_8F23D0A7CDC02F2E__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13B1B2E0)
#define CLASS_3_8F23D0A7CDC02F2E___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13B1B4A0)
#define CLASS_3_8F23D0A7CDC02F2E___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13B1B4B0)

inline static constexpr unsigned int Class_3_8F23D0A7CDC02F2E_TypeDefinitionIndex = 49439;

class Class_3_8F23D0A7CDC02F2E : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_48C0863CAA8EB6BB_3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_48C0863CAA8EB6BB_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_48C0863CAA8EB6BB_3*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_METHOD_3_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
