#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9D4DD2F4235F8658;
class Class_2_A0580152EB393340;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvSetAIMoveTo; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3A53F45A8B4EA545_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD17200)
#define CLASS_3_3A53F45A8B4EA545_METHOD_3_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0xAD18090)
#define CLASS_3_3A53F45A8B4EA545_METHOD_3_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0xAD17C90)
#define CLASS_3_3A53F45A8B4EA545_METHOD_3_736EFAF4152D13AF_OFFSET UNITYSDK_OFFSET(0xAD17C00)
#define CLASS_3_3A53F45A8B4EA545_METHOD_3_C2CB27D3BB7D9DBC_OFFSET UNITYSDK_OFFSET(0xAD17E20)
#define CLASS_3_3A53F45A8B4EA545_METHOD_3_D26AC14EBBDB9AAF_OFFSET UNITYSDK_OFFSET(0xAD17860)
#define CLASS_3_3A53F45A8B4EA545_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAD181D0)
#define CLASS_3_3A53F45A8B4EA545_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD172D0)
#define CLASS_3_3A53F45A8B4EA545_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAD17F70)
#define CLASS_3_3A53F45A8B4EA545_TICK_OFFSET UNITYSDK_OFFSET(0xAD17940)
#define CLASS_3_3A53F45A8B4EA545__CTOR_OFFSET UNITYSDK_OFFSET(0xAD17090)
#define CLASS_3_3A53F45A8B4EA545___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD18330)

inline static constexpr unsigned int Class_3_3A53F45A8B4EA545_TypeDefinitionIndex = 49089;

class Class_3_3A53F45A8B4EA545 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	::Class_2_A0580152EB393340* Field_3_0; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x38
	::RPG::GameCore::AdvSetAIMoveTo* Field_3_2; // 0x40
	::Class_2_9D4DD2F4235F8658* Field_3_3; // 0x48
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_3_4; // 0x50
	::System::Boolean Field_3_5; // 0x58
	::UnityEngine::Quaternion Field_3_6; // 0x5C
	::UnityEngine::Vector3 Field_3_7; // 0x6C

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

	::System::Void Method_3_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_METHOD_3_7223CD34BEFCBF48_OFFSET))(this);
	}

	::System::Void Method_3_C2CB27D3BB7D9DBC(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_METHOD_3_C2CB27D3BB7D9DBC_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_METHOD_3_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Void Method_3_D26AC14EBBDB9AAF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3A53F45A8B4EA545_METHOD_3_D26AC14EBBDB9AAF_OFFSET))(this, a1);
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
