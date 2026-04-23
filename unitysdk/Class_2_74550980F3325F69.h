#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChangeHeartDialModelByScript; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74550980F3325F69_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFDF5F0)
#define CLASS_2_74550980F3325F69_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFDF640)
#define CLASS_2_74550980F3325F69_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAFDF770)
#define CLASS_2_74550980F3325F69_TICK_OFFSET UNITYSDK_OFFSET(0xAFDF7C0)
#define CLASS_2_74550980F3325F69__CTOR_OFFSET UNITYSDK_OFFSET(0xAFDF5E0)

inline static constexpr unsigned int Class_2_74550980F3325F69_TypeDefinitionIndex = 48608;

class Class_2_74550980F3325F69 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ChangeHeartDialModelByScript* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeHeartDialModelByScript* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeHeartDialModelByScript*))((::PBYTE)hIl2Cpp + CLASS_2_74550980F3325F69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74550980F3325F69_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74550980F3325F69_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74550980F3325F69_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_74550980F3325F69_TICK_OFFSET))(this, a1);
	}
};
