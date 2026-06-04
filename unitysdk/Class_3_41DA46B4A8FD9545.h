#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerPassBubbleBridge; }
namespace System { class Object; }

#define CLASS_3_41DA46B4A8FD9545_METHOD_3_AA7E7D1E175DAB81_OFFSET UNITYSDK_OFFSET(0xA92BE00)
#define CLASS_3_41DA46B4A8FD9545__CTOR_OFFSET UNITYSDK_OFFSET(0xA92BA00)
#define CLASS_3_41DA46B4A8FD9545__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA92BB90)
#define CLASS_3_41DA46B4A8FD9545__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA92BC80)
#define CLASS_3_41DA46B4A8FD9545__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA92BD40)
#define CLASS_3_41DA46B4A8FD9545___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA92BF80)
#define CLASS_3_41DA46B4A8FD9545___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA92BF90)
#define CLASS_3_41DA46B4A8FD9545___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA92BFA0)

inline static constexpr unsigned int Class_3_41DA46B4A8FD9545_TypeDefinitionIndex = 49545;

class Class_3_41DA46B4A8FD9545 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPlayerPassBubbleBridge*>
{
public:
	::System::UInt32 Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x6C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerPassBubbleBridge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerPassBubbleBridge*))((::PBYTE)hIl2Cpp + CLASS_3_41DA46B4A8FD9545__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41DA46B4A8FD9545__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41DA46B4A8FD9545__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41DA46B4A8FD9545__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_AA7E7D1E175DAB81(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_41DA46B4A8FD9545_METHOD_3_AA7E7D1E175DAB81_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41DA46B4A8FD9545___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41DA46B4A8FD9545___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41DA46B4A8FD9545___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
