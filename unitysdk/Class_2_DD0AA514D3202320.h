#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AddPamMenuItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DD0AA514D3202320_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89C5690)
#define CLASS_2_DD0AA514D3202320_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89C56D0)
#define CLASS_2_DD0AA514D3202320_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x89C5A70)
#define CLASS_2_DD0AA514D3202320_TICK_OFFSET UNITYSDK_OFFSET(0x89C5AC0)
#define CLASS_2_DD0AA514D3202320__CTOR_OFFSET UNITYSDK_OFFSET(0x89C5680)

inline static constexpr unsigned int Class_2_DD0AA514D3202320_TypeDefinitionIndex = 47642;

class Class_2_DD0AA514D3202320 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddPamMenuItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddPamMenuItem*))((::PBYTE)hIl2Cpp + CLASS_2_DD0AA514D3202320__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD0AA514D3202320_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD0AA514D3202320_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD0AA514D3202320_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD0AA514D3202320_TICK_OFFSET))(this, a1);
	}
};
