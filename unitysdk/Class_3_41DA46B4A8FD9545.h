#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerPassBubbleBridge; }
namespace System { class Object; }

#define CLASS_3_41DA46B4A8FD9545_METHOD_3_C02357FE432192E0_OFFSET UNITYSDK_OFFSET(0x15913DB0)
#define CLASS_3_41DA46B4A8FD9545__CTOR_OFFSET UNITYSDK_OFFSET(0x159139B0)
#define CLASS_3_41DA46B4A8FD9545__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x15913B40)
#define CLASS_3_41DA46B4A8FD9545__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15913C30)
#define CLASS_3_41DA46B4A8FD9545__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15913CF0)

inline static constexpr unsigned int Class_3_41DA46B4A8FD9545_TypeDefinitionIndex = 53279;

class Class_3_41DA46B4A8FD9545 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPlayerPassBubbleBridge*>
{
public:
	::System::UInt32 PEEFHNHDBMF; // 0x68
	::System::UInt32 JGGDKOCIEGH; // 0x6C

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

	::System::Void Method_3_C02357FE432192E0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_41DA46B4A8FD9545_METHOD_3_C02357FE432192E0_OFFSET))(this, a1);
	}
};
