#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/SOFinishReason.h"

class Class_2_9A097580DF02CED3;
class Class_2_9D4DD2F4235F8658;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AdvTriggerAIPlaySmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_797E61CE8DC46291_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1054A400)
#define CLASS_3_797E61CE8DC46291_METHOD_3_5700582BC8616701_OFFSET UNITYSDK_OFFSET(0x1054AD30)
#define CLASS_3_797E61CE8DC46291_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1054AC20)
#define CLASS_3_797E61CE8DC46291_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1054A4A0)
#define CLASS_3_797E61CE8DC46291_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1054AB80)
#define CLASS_3_797E61CE8DC46291_TICK_OFFSET UNITYSDK_OFFSET(0x1054A910)
#define CLASS_3_797E61CE8DC46291__CTOR_OFFSET UNITYSDK_OFFSET(0x1054A350)
#define CLASS_3_797E61CE8DC46291___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1054AE70)

inline static constexpr unsigned int Class_3_797E61CE8DC46291_TypeDefinitionIndex = 42530;

class Class_3_797E61CE8DC46291 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	::RPG::GameCore::AdvTriggerAIPlaySmartObject* Field_3_0; // 0x30
	::Class_2_9A097580DF02CED3* Field_3_2; // 0x38
	::Class_2_9D4DD2F4235F8658* Field_3_3; // 0x40
	::Class_3_5775A4FEC79026BC* Field_3_1; // 0x48
	::System::UInt64 Field_3_6; // 0x50
	::System::Boolean Field_3_5; // 0x58
	::System::UInt32 Field_3_4; // 0x5C
	::System::UInt32 Field_3_7; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTriggerAIPlaySmartObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTriggerAIPlaySmartObject*))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_5700582BC8616701(::RPG::GameCore::SOFinishReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SOFinishReason))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291_METHOD_3_5700582BC8616701_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_797E61CE8DC46291___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
