#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StartBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F46D78858625078A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16777CA0)
#define CLASS_2_F46D78858625078A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16777CE0)
#define CLASS_2_F46D78858625078A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16777DB0)
#define CLASS_2_F46D78858625078A_TICK_OFFSET UNITYSDK_OFFSET(0x16777E00)
#define CLASS_2_F46D78858625078A__CTOR_OFFSET UNITYSDK_OFFSET(0x16777C90)

inline static constexpr unsigned int Class_2_F46D78858625078A_TypeDefinitionIndex = 58868;

class Class_2_F46D78858625078A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StartBattle* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Single EFKCJMFANEB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartBattle*))((::PBYTE)hIl2Cpp + CLASS_2_F46D78858625078A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F46D78858625078A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F46D78858625078A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F46D78858625078A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F46D78858625078A_TICK_OFFSET))(this, a1);
	}
};
