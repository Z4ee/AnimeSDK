#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFixedDeltaSecond; }

#define CLASS_2_DA985DC97C4A51A6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144B39C0)
#define CLASS_2_DA985DC97C4A51A6_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x144B3A00)
#define CLASS_2_DA985DC97C4A51A6_ONSKIP_OFFSET UNITYSDK_OFFSET(0x144B3B40)
#define CLASS_2_DA985DC97C4A51A6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144B3A10)
#define CLASS_2_DA985DC97C4A51A6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x144B3A70)
#define CLASS_2_DA985DC97C4A51A6_TICK_OFFSET UNITYSDK_OFFSET(0x144B3AC0)
#define CLASS_2_DA985DC97C4A51A6__CTOR_OFFSET UNITYSDK_OFFSET(0x144B39B0)

inline static constexpr unsigned int Class_2_DA985DC97C4A51A6_TypeDefinitionIndex = 55022;

class Class_2_DA985DC97C4A51A6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFixedDeltaSecond* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFixedDeltaSecond*))((::PBYTE)hIl2Cpp + CLASS_2_DA985DC97C4A51A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA985DC97C4A51A6_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA985DC97C4A51A6_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA985DC97C4A51A6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA985DC97C4A51A6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DA985DC97C4A51A6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA985DC97C4A51A6_ONSKIP_OFFSET))(this);
	}
};
