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

#define CLASS_3_6C1CB38800E4EEB5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFE5100)
#define CLASS_3_6C1CB38800E4EEB5_METHOD_3_0BD065C34BC99E0B_OFFSET UNITYSDK_OFFSET(0xBFE5E60)
#define CLASS_3_6C1CB38800E4EEB5_METHOD_3_9DA796436610DAC6_OFFSET UNITYSDK_OFFSET(0xBFE5C40)
#define CLASS_3_6C1CB38800E4EEB5_METHOD_3_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0xBFE5CD0)
#define CLASS_3_6C1CB38800E4EEB5_METHOD_3_D26AC14EBBDB9AAF_OFFSET UNITYSDK_OFFSET(0xBFE58C0)
#define CLASS_3_6C1CB38800E4EEB5_METHOD_3_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0xBFE60D0)
#define CLASS_3_6C1CB38800E4EEB5_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFE6210)
#define CLASS_3_6C1CB38800E4EEB5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFE5240)
#define CLASS_3_6C1CB38800E4EEB5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFE5FB0)
#define CLASS_3_6C1CB38800E4EEB5_TICK_OFFSET UNITYSDK_OFFSET(0xBFE59A0)
#define CLASS_3_6C1CB38800E4EEB5__CTOR_OFFSET UNITYSDK_OFFSET(0xBFE4FD0)

inline static constexpr unsigned int Class_3_6C1CB38800E4EEB5_TypeDefinitionIndex = 52489;

class Class_3_6C1CB38800E4EEB5 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	::Class_2_21055A9FA74B791E* IPFNHFDJKKL; // 0x30
	::Class_3_07C3C4D2990C49EE* KANMJJLKMMI; // 0x38
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x40
	::Class_2_ED5B635C4D775055* GEPFAIOOOGB; // 0x48
	::RPG::GameCore::AdvSetAIMoveTo* OFKGLJOAMLD; // 0x50
	::UnityEngine::Quaternion MGFPKGIOKEN; // 0x58
	::System::Boolean FNEJMBKLEIP; // 0x68
	::UnityEngine::Vector3 BEDPGAOCOHG; // 0x6C

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
