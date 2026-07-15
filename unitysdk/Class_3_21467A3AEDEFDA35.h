#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorSavedValueChangeV2; }
namespace System { class String; }

#define CLASS_3_21467A3AEDEFDA35_METHOD_3_10174DABAE4BE0E1_OFFSET UNITYSDK_OFFSET(0x15859450)
#define CLASS_3_21467A3AEDEFDA35__CTOR_OFFSET UNITYSDK_OFFSET(0x158591C0)
#define CLASS_3_21467A3AEDEFDA35__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x158596E0)
#define CLASS_3_21467A3AEDEFDA35__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x158594B0)
#define CLASS_3_21467A3AEDEFDA35__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x158595C0)

inline static constexpr unsigned int Class_3_21467A3AEDEFDA35_TypeDefinitionIndex = 51043;

class Class_3_21467A3AEDEFDA35 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFloorSavedValueChangeV2*>
{
public:
	::System::String* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorSavedValueChangeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorSavedValueChangeV2*))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_10174DABAE4BE0E1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35_METHOD_3_10174DABAE4BE0E1_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35__PREPAREDATA_OFFSET))(this);
	}
};
