#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class QteCatchGhostSendNotify; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A7B769B7A1A5FACD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B44ADD0)
#define CLASS_2_A7B769B7A1A5FACD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B44AE10)
#define CLASS_2_A7B769B7A1A5FACD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B44AF70)
#define CLASS_2_A7B769B7A1A5FACD_TICK_OFFSET UNITYSDK_OFFSET(0x1B44AFC0)
#define CLASS_2_A7B769B7A1A5FACD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44ADC0)

inline static constexpr unsigned int Class_2_A7B769B7A1A5FACD_TypeDefinitionIndex = 53449;

class Class_2_A7B769B7A1A5FACD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::QteCatchGhostSendNotify* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QteCatchGhostSendNotify* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QteCatchGhostSendNotify*))((::PBYTE)hIl2Cpp + CLASS_2_A7B769B7A1A5FACD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7B769B7A1A5FACD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7B769B7A1A5FACD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7B769B7A1A5FACD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A7B769B7A1A5FACD_TICK_OFFSET))(this, a1);
	}
};
