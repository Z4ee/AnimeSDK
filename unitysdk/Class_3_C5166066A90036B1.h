#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerPassBubbleBridge; }
namespace System { class Object; }

#define CLASS_3_C5166066A90036B1_METHOD_3_AA7E7D1E175DAB81_OFFSET UNITYSDK_OFFSET(0x10BEE340)
#define CLASS_3_C5166066A90036B1__CTOR_OFFSET UNITYSDK_OFFSET(0x10BEDFB0)
#define CLASS_3_C5166066A90036B1__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x10BEE130)
#define CLASS_3_C5166066A90036B1__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10BEE220)
#define CLASS_3_C5166066A90036B1__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10BEE2B0)
#define CLASS_3_C5166066A90036B1___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x10BEE4D0)
#define CLASS_3_C5166066A90036B1___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10BEE4E0)
#define CLASS_3_C5166066A90036B1___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10BEE4F0)

inline static constexpr unsigned int Class_3_C5166066A90036B1_TypeDefinitionIndex = 42895;

class Class_3_C5166066A90036B1 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPlayerPassBubbleBridge*>
{
public:
	::System::UInt32 Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x6C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerPassBubbleBridge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerPassBubbleBridge*))((::PBYTE)hIl2Cpp + CLASS_3_C5166066A90036B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5166066A90036B1__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5166066A90036B1__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5166066A90036B1__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_AA7E7D1E175DAB81(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C5166066A90036B1_METHOD_3_AA7E7D1E175DAB81_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5166066A90036B1___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5166066A90036B1___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5166066A90036B1___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
