#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9D4DD2F4235F8658;
class Class_2_A0580152EB393340;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AdvSetAIMoveTo; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3A53F45A8B4EA545_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123DD400)
#define CLASS_3_3A53F45A8B4EA545_METHOD_3_44D7B58B9D189F38_OFFSET UNITYSDK_OFFSET(0x123DD9E0)
#define CLASS_3_3A53F45A8B4EA545_METHOD_3_736EFAF4152D13AF_OFFSET UNITYSDK_OFFSET(0x123DDD50)
#define CLASS_3_3A53F45A8B4EA545_METHOD_3_9216B801ACD0B564_OFFSET UNITYSDK_OFFSET(0x123DDDE0)
#define CLASS_3_3A53F45A8B4EA545_METHOD_3_C2CB27D3BB7D9DBC_OFFSET UNITYSDK_OFFSET(0x123DDF70)
#define CLASS_3_3A53F45A8B4EA545_METHOD_3_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0x123DE1E0)
#define CLASS_3_3A53F45A8B4EA545_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x123DE320)
#define CLASS_3_3A53F45A8B4EA545_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x123DD4D0)
#define CLASS_3_3A53F45A8B4EA545_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x123DE0C0)
#define CLASS_3_3A53F45A8B4EA545_TICK_OFFSET UNITYSDK_OFFSET(0x123DDAC0)
#define CLASS_3_3A53F45A8B4EA545__CTOR_OFFSET UNITYSDK_OFFSET(0x123DD290)
#define CLASS_3_3A53F45A8B4EA545___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123DE480)

inline static constexpr unsigned int Class_3_3A53F45A8B4EA545_TypeDefinitionIndex = 48463;

class Class_3_3A53F45A8B4EA545 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_3; // 0x30
	::Class_2_9D4DD2F4235F8658* Field_3_2; // 0x38
	::Class_2_A0580152EB393340* Field_3_1; // 0x40
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_3_7; // 0x48
	::RPG::GameCore::AdvSetAIMoveTo* Field_3_0; // 0x50
	::System::Boolean Field_3_6; // 0x58
	::UnityEngine::Vector3 Field_3_4; // 0x5C
	::UnityEngine::Quaternion Field_3_5; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAIMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAIMoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_9216B801ACD0B564()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_METHOD_3_9216B801ACD0B564_OFFSET))(this);
	}

	::System::Void Method_3_C2CB27D3BB7D9DBC(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_METHOD_3_C2CB27D3BB7D9DBC_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_METHOD_3_E6D3C4C666E119D9_OFFSET))(this);
	}

	::System::Void Method_3_44D7B58B9D189F38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_METHOD_3_44D7B58B9D189F38_OFFSET))(this, a1);
	}

	::System::Void Method_3_736EFAF4152D13AF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_METHOD_3_736EFAF4152D13AF_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
