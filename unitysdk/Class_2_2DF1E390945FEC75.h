#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropResetPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2DF1E390945FEC75_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FC0510)
#define CLASS_2_2DF1E390945FEC75_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FC0340)
#define CLASS_2_2DF1E390945FEC75_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FC04C0)
#define CLASS_2_2DF1E390945FEC75_TICK_OFFSET UNITYSDK_OFFSET(0x18FC0550)
#define CLASS_2_2DF1E390945FEC75__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC0330)

inline static constexpr unsigned int Class_2_2DF1E390945FEC75_TypeDefinitionIndex = 58492;

class Class_2_2DF1E390945FEC75 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::PropResetPuzzle* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropResetPuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropResetPuzzle*))((::PBYTE)hIl2Cpp + CLASS_2_2DF1E390945FEC75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DF1E390945FEC75_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DF1E390945FEC75_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DF1E390945FEC75_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2DF1E390945FEC75_TICK_OFFSET))(this, a1);
	}
};
