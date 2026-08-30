#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SpeedLineEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_48AF17AAEE2DD1C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BF9BE0)
#define CLASS_2_48AF17AAEE2DD1C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19BF9C20)
#define CLASS_2_48AF17AAEE2DD1C0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19BFA090)
#define CLASS_2_48AF17AAEE2DD1C0_TICK_OFFSET UNITYSDK_OFFSET(0x19BFA0E0)
#define CLASS_2_48AF17AAEE2DD1C0__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF9BD0)

inline static constexpr unsigned int Class_2_48AF17AAEE2DD1C0_TypeDefinitionIndex = 55827;

class Class_2_48AF17AAEE2DD1C0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SpeedLineEffect* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SpeedLineEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SpeedLineEffect*))((::PBYTE)hIl2Cpp + CLASS_2_48AF17AAEE2DD1C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48AF17AAEE2DD1C0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48AF17AAEE2DD1C0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48AF17AAEE2DD1C0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48AF17AAEE2DD1C0_TICK_OFFSET))(this, a1);
	}
};
