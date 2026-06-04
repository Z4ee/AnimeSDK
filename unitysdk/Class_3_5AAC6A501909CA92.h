#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_298A90B03D7BB92F;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_5AAC6A501909CA92_METHOD_3_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x13D2B660)
#define CLASS_3_5AAC6A501909CA92__CTOR_OFFSET UNITYSDK_OFFSET(0x13D2B3B0)
#define CLASS_3_5AAC6A501909CA92__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13D2B520)
#define CLASS_3_5AAC6A501909CA92__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13D2B5C0)
#define CLASS_3_5AAC6A501909CA92___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13D2B730)
#define CLASS_3_5AAC6A501909CA92___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13D2B740)

inline static constexpr unsigned int Class_3_5AAC6A501909CA92_TypeDefinitionIndex = 49960;

class Class_3_5AAC6A501909CA92 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_298A90B03D7BB92F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_298A90B03D7BB92F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_298A90B03D7BB92F*))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92_METHOD_3_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AAC6A501909CA92___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
