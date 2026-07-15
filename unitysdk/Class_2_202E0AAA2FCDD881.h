#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RPGColorGradingCurveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_202E0AAA2FCDD881_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165B2790)
#define CLASS_2_202E0AAA2FCDD881_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165B27D0)
#define CLASS_2_202E0AAA2FCDD881_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165B2A80)
#define CLASS_2_202E0AAA2FCDD881_TICK_OFFSET UNITYSDK_OFFSET(0x165B2AD0)
#define CLASS_2_202E0AAA2FCDD881__CTOR_OFFSET UNITYSDK_OFFSET(0x165B2780)

inline static constexpr unsigned int Class_2_202E0AAA2FCDD881_TypeDefinitionIndex = 52770;

class Class_2_202E0AAA2FCDD881 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RPGColorGradingCurveEffect* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RPGColorGradingCurveEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RPGColorGradingCurveEffect*))((::PBYTE)hIl2Cpp + CLASS_2_202E0AAA2FCDD881__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202E0AAA2FCDD881_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202E0AAA2FCDD881_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202E0AAA2FCDD881_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_202E0AAA2FCDD881_TICK_OFFSET))(this, a1);
	}
};
