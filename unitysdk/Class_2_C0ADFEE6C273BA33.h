#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UIMonopolyTryTriggerTeleport; }

#define CLASS_2_C0ADFEE6C273BA33_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89257F0)
#define CLASS_2_C0ADFEE6C273BA33_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x8925480)
#define CLASS_2_C0ADFEE6C273BA33_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8925210)
#define CLASS_2_C0ADFEE6C273BA33_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8925760)
#define CLASS_2_C0ADFEE6C273BA33_TICK_OFFSET UNITYSDK_OFFSET(0x8925260)
#define CLASS_2_C0ADFEE6C273BA33__CTOR_OFFSET UNITYSDK_OFFSET(0x8925200)

inline static constexpr unsigned int Class_2_C0ADFEE6C273BA33_TypeDefinitionIndex = 47506;

class Class_2_C0ADFEE6C273BA33 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::UIMonopolyTryTriggerTeleport* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UIMonopolyTryTriggerTeleport* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UIMonopolyTryTriggerTeleport*))((::PBYTE)hIl2Cpp + CLASS_2_C0ADFEE6C273BA33__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0ADFEE6C273BA33_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C0ADFEE6C273BA33_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0ADFEE6C273BA33_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0ADFEE6C273BA33_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0ADFEE6C273BA33_DISPOSE_OFFSET))(this);
	}
};
