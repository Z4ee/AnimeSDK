#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RPGColorGradingCurveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_202E0AAA2FCDD881_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A5BCB0)
#define CLASS_2_202E0AAA2FCDD881_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A5BCF0)
#define CLASS_2_202E0AAA2FCDD881_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12A5BEB0)
#define CLASS_2_202E0AAA2FCDD881_TICK_OFFSET UNITYSDK_OFFSET(0x12A5BF00)
#define CLASS_2_202E0AAA2FCDD881__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5BCA0)

inline static constexpr unsigned int Class_2_202E0AAA2FCDD881_TypeDefinitionIndex = 50957;

class Class_2_202E0AAA2FCDD881 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::RPGColorGradingCurveEffect* Field_2_0; // 0x20

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
