#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_21055A9FA74B791E;
class Class_2_A0580152EB393340;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvSetAIMoveTo; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9DF0A5E12CE253EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19268400)
#define CLASS_3_9DF0A5E12CE253EF_METHOD_3_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x192693D0)
#define CLASS_3_9DF0A5E12CE253EF_METHOD_3_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x19268FD0)
#define CLASS_3_9DF0A5E12CE253EF_METHOD_3_736EFAF4152D13AF_OFFSET UNITYSDK_OFFSET(0x19268F40)
#define CLASS_3_9DF0A5E12CE253EF_METHOD_3_C2CB27D3BB7D9DBC_OFFSET UNITYSDK_OFFSET(0x19269160)
#define CLASS_3_9DF0A5E12CE253EF_METHOD_3_D26AC14EBBDB9AAF_OFFSET UNITYSDK_OFFSET(0x19268BB0)
#define CLASS_3_9DF0A5E12CE253EF_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x19269510)
#define CLASS_3_9DF0A5E12CE253EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19268540)
#define CLASS_3_9DF0A5E12CE253EF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x192692B0)
#define CLASS_3_9DF0A5E12CE253EF_TICK_OFFSET UNITYSDK_OFFSET(0x19268C90)
#define CLASS_3_9DF0A5E12CE253EF__CTOR_OFFSET UNITYSDK_OFFSET(0x192682A0)

inline static constexpr unsigned int Class_3_9DF0A5E12CE253EF_TypeDefinitionIndex = 52764;

class Class_3_9DF0A5E12CE253EF : public ::Class_2_CF936FB7CE3B8D17
{
public:
	::Class_2_21055A9FA74B791E* IPFNHFDJKKL; // 0x30
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x38
	::Class_3_07C3C4D2990C49EE* KANMJJLKMMI; // 0x40
	::RPG::GameCore::AdvSetAIMoveTo* OFKGLJOAMLD; // 0x48
	::Class_2_A0580152EB393340* GEPFAIOOOGB; // 0x50
	::UnityEngine::Quaternion MGFPKGIOKEN; // 0x58
	::UnityEngine::Vector3 BEDPGAOCOHG; // 0x68
	::System::Boolean FNEJMBKLEIP; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAIMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAIMoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_METHOD_3_7223CD34BEFCBF48_OFFSET))(this);
	}

	::System::Void Method_3_C2CB27D3BB7D9DBC(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_METHOD_3_C2CB27D3BB7D9DBC_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_METHOD_3_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Void Method_3_D26AC14EBBDB9AAF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_METHOD_3_D26AC14EBBDB9AAF_OFFSET))(this, a1);
	}

	::System::Void Method_3_736EFAF4152D13AF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_METHOD_3_736EFAF4152D13AF_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
