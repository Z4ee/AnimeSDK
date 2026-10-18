#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_21055A9FA74B791E;
class Class_2_ED5B635C4D775055;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvSetAIMoveTo; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6C1CB38800E4EEB5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFDDC30)
#define CLASS_3_6C1CB38800E4EEB5_METHOD_3_0BD065C34BC99E0B_OFFSET UNITYSDK_OFFSET(0xBFDE990)
#define CLASS_3_6C1CB38800E4EEB5_METHOD_3_9DA796436610DAC6_OFFSET UNITYSDK_OFFSET(0xBFDE770)
#define CLASS_3_6C1CB38800E4EEB5_METHOD_3_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0xBFDE800)
#define CLASS_3_6C1CB38800E4EEB5_METHOD_3_D26AC14EBBDB9AAF_OFFSET UNITYSDK_OFFSET(0xBFDE3F0)
#define CLASS_3_6C1CB38800E4EEB5_METHOD_3_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0xBFDEC00)
#define CLASS_3_6C1CB38800E4EEB5_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFDED40)
#define CLASS_3_6C1CB38800E4EEB5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFDDD70)
#define CLASS_3_6C1CB38800E4EEB5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFDEAE0)
#define CLASS_3_6C1CB38800E4EEB5_TICK_OFFSET UNITYSDK_OFFSET(0xBFDE4D0)
#define CLASS_3_6C1CB38800E4EEB5__CTOR_OFFSET UNITYSDK_OFFSET(0xBFDDB00)

inline static constexpr unsigned int Class_3_6C1CB38800E4EEB5_TypeDefinitionIndex = 52489;

class Class_3_6C1CB38800E4EEB5 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	::RPG::GameCore::AdvSetAIMoveTo* OFKGLJOAMLD; // 0x30
	::Class_2_ED5B635C4D775055* GEPFAIOOOGB; // 0x38
	::Class_3_07C3C4D2990C49EE* KANMJJLKMMI; // 0x40
	::Class_2_21055A9FA74B791E* IPFNHFDJKKL; // 0x48
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x50
	::UnityEngine::Quaternion MGFPKGIOKEN; // 0x58
	::UnityEngine::Vector3 BEDPGAOCOHG; // 0x68
	::System::Boolean FNEJMBKLEIP; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAIMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAIMoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5_METHOD_3_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_3_0BD065C34BC99E0B(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5_METHOD_3_0BD065C34BC99E0B_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5_METHOD_3_E6D3C4C666E119D9_OFFSET))(this);
	}

	::System::Void Method_3_D26AC14EBBDB9AAF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5_METHOD_3_D26AC14EBBDB9AAF_OFFSET))(this, a1);
	}

	::System::Void Method_3_9DA796436610DAC6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5_METHOD_3_9DA796436610DAC6_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C1CB38800E4EEB5_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
