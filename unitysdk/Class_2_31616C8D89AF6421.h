#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdvEntityFaceTo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_31616C8D89AF6421_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19CA5A90)
#define CLASS_2_31616C8D89AF6421_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x19CA6900)
#define CLASS_2_31616C8D89AF6421_METHOD_2_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x19CA6650)
#define CLASS_2_31616C8D89AF6421_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x19CA60D0)
#define CLASS_2_31616C8D89AF6421_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x19CA6970)
#define CLASS_2_31616C8D89AF6421_ONSKIP_OFFSET UNITYSDK_OFFSET(0x19CA6910)
#define CLASS_2_31616C8D89AF6421_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19CA5B40)
#define CLASS_2_31616C8D89AF6421_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19CA5AE0)
#define CLASS_2_31616C8D89AF6421_TICK_OFFSET UNITYSDK_OFFSET(0x19CA64A0)
#define CLASS_2_31616C8D89AF6421__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA5A80)
#define CLASS_2_31616C8D89AF6421__ONTASKSUCCESS_B__9_1_OFFSET UNITYSDK_OFFSET(0x19CA6AC0)

inline static constexpr unsigned int Class_2_31616C8D89AF6421_TypeDefinitionIndex = 52635;

class Class_2_31616C8D89AF6421 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvEntityFaceTo* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28
	::UnityEngine::Vector3 BGNACBGBMHG; // 0x30
	::System::UInt32 EPIJLLGCKLA; // 0x3C

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

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
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
