#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdvEntityFaceTo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_31616C8D89AF6421_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA85DD20)
#define CLASS_2_31616C8D89AF6421_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xA85EBE0)
#define CLASS_2_31616C8D89AF6421_METHOD_2_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0xA85E930)
#define CLASS_2_31616C8D89AF6421_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xA85E390)
#define CLASS_2_31616C8D89AF6421_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA85EC50)
#define CLASS_2_31616C8D89AF6421_ONSKIP_OFFSET UNITYSDK_OFFSET(0xA85EBF0)
#define CLASS_2_31616C8D89AF6421_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA85DDD0)
#define CLASS_2_31616C8D89AF6421_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA85DD70)
#define CLASS_2_31616C8D89AF6421_TICK_OFFSET UNITYSDK_OFFSET(0xA85E780)
#define CLASS_2_31616C8D89AF6421__CTOR_OFFSET UNITYSDK_OFFSET(0xA85DD10)
#define CLASS_2_31616C8D89AF6421__ONTASKSUCCESS_B__9_1_OFFSET UNITYSDK_OFFSET(0xA85ED90)

inline static constexpr unsigned int Class_2_31616C8D89AF6421_TypeDefinitionIndex = 48961;

class Class_2_31616C8D89AF6421 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AdvEntityFaceTo* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::UnityEngine::Vector3 Field_2_3; // 0x30
	::System::UInt32 Field_2_4; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityFaceTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityFaceTo*))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Boolean Method_2_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421_METHOD_2_0F30679B05E70FC1_OFFSET))(this);
	}

	::System::Boolean _OnTaskSuccess_b__9_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421__ONTASKSUCCESS_B__9_1_OFFSET))(this, a1);
	}
};
