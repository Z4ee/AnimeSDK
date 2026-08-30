#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraModeChange; }

#define CLASS_2_739B233F48CB6228_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA87A30)
#define CLASS_2_739B233F48CB6228_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA87A70)
#define CLASS_2_739B233F48CB6228_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA87C50)
#define CLASS_2_739B233F48CB6228_TICK_OFFSET UNITYSDK_OFFSET(0xBA87CA0)
#define CLASS_2_739B233F48CB6228__CTOR_OFFSET UNITYSDK_OFFSET(0xBA87A20)

inline static constexpr unsigned int Class_2_739B233F48CB6228_TypeDefinitionIndex = 54096;

class Class_2_739B233F48CB6228 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::VCameraModeChange* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraModeChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraModeChange*))((::PBYTE)hIl2Cpp + CLASS_2_739B233F48CB6228__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_739B233F48CB6228_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_739B233F48CB6228_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_739B233F48CB6228_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_739B233F48CB6228_TICK_OFFSET))(this, a1);
	}
};
