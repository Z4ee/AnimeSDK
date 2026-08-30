#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RadialBlurCurveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CABDFFBB96465EA6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153DF310)
#define CLASS_2_CABDFFBB96465EA6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153DF350)
#define CLASS_2_CABDFFBB96465EA6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x153DF7B0)
#define CLASS_2_CABDFFBB96465EA6_TICK_OFFSET UNITYSDK_OFFSET(0x153DF800)
#define CLASS_2_CABDFFBB96465EA6__CTOR_OFFSET UNITYSDK_OFFSET(0x153DF300)

inline static constexpr unsigned int Class_2_CABDFFBB96465EA6_TypeDefinitionIndex = 55474;

class Class_2_CABDFFBB96465EA6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::RadialBlurCurveEffect* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RadialBlurCurveEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RadialBlurCurveEffect*))((::PBYTE)hIl2Cpp + CLASS_2_CABDFFBB96465EA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CABDFFBB96465EA6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CABDFFBB96465EA6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CABDFFBB96465EA6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CABDFFBB96465EA6_TICK_OFFSET))(this, a1);
	}
};
