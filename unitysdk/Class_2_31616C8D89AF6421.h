#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdvEntityFaceTo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_31616C8D89AF6421_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBD4740)
#define CLASS_2_31616C8D89AF6421_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBBD55B0)
#define CLASS_2_31616C8D89AF6421_METHOD_2_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0xBBD5300)
#define CLASS_2_31616C8D89AF6421_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xBBD4D80)
#define CLASS_2_31616C8D89AF6421_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBBD5620)
#define CLASS_2_31616C8D89AF6421_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBBD55C0)
#define CLASS_2_31616C8D89AF6421_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBD47F0)
#define CLASS_2_31616C8D89AF6421_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBD4790)
#define CLASS_2_31616C8D89AF6421_TICK_OFFSET UNITYSDK_OFFSET(0xBBD5150)
#define CLASS_2_31616C8D89AF6421__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD4730)
#define CLASS_2_31616C8D89AF6421__ONTASKSUCCESS_B__9_1_OFFSET UNITYSDK_OFFSET(0xBBD5760)

inline static constexpr unsigned int Class_2_31616C8D89AF6421_TypeDefinitionIndex = 52635;

class Class_2_31616C8D89AF6421 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
	::RPG::GameCore::AdvEntityFaceTo* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::UInt32 EPIJLLGCKLA; // 0x30
	::UnityEngine::Vector3 BGNACBGBMHG; // 0x34

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
