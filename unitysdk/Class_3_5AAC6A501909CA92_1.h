#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_48C0863CAA8EB6BB_1;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_5AAC6A501909CA92_1_METHOD_3_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xA98E250)
#define CLASS_3_5AAC6A501909CA92_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA98DFA0)
#define CLASS_3_5AAC6A501909CA92_1__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA98E110)
#define CLASS_3_5AAC6A501909CA92_1__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA98E1B0)
#define CLASS_3_5AAC6A501909CA92_1___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA98E320)
#define CLASS_3_5AAC6A501909CA92_1___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA98E330)

inline static constexpr unsigned int Class_3_5AAC6A501909CA92_1_TypeDefinitionIndex = 49977;

class Class_3_5AAC6A501909CA92_1 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_48C0863CAA8EB6BB_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_48C0863CAA8EB6BB_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_48C0863CAA8EB6BB_1*))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92_1__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92_1__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92_1_METHOD_3_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92_1___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92_1___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
