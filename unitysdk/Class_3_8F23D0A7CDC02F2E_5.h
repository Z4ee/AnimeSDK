#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_3DD509A303E18775;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8F23D0A7CDC02F2E_5_METHOD_3_1AE24536EC302522_OFFSET UNITYSDK_OFFSET(0x170B36D0)
#define CLASS_3_8F23D0A7CDC02F2E_5__CTOR_OFFSET UNITYSDK_OFFSET(0x170B33C0)
#define CLASS_3_8F23D0A7CDC02F2E_5__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x170B3550)
#define CLASS_3_8F23D0A7CDC02F2E_5__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x170B3610)

inline static constexpr unsigned int Class_3_8F23D0A7CDC02F2E_5_TypeDefinitionIndex = 51063;

class Class_3_8F23D0A7CDC02F2E_5 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_3DD509A303E18775*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3DD509A303E18775* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3DD509A303E18775*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_5__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_5__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_1AE24536EC302522(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_5_METHOD_3_1AE24536EC302522_OFFSET))(this, a1);
	}
};
