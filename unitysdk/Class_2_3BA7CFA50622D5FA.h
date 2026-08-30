#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowTutorialUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3BA7CFA50622D5FA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5758D0)
#define CLASS_2_3BA7CFA50622D5FA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB575910)
#define CLASS_2_3BA7CFA50622D5FA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5759B0)
#define CLASS_2_3BA7CFA50622D5FA_TICK_OFFSET UNITYSDK_OFFSET(0xB575A00)
#define CLASS_2_3BA7CFA50622D5FA__CTOR_OFFSET UNITYSDK_OFFSET(0xB5758C0)

inline static constexpr unsigned int Class_2_3BA7CFA50622D5FA_TypeDefinitionIndex = 58853;

class Class_2_3BA7CFA50622D5FA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowTutorialUI* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialUI*))((::PBYTE)hIl2Cpp + CLASS_2_3BA7CFA50622D5FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA7CFA50622D5FA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA7CFA50622D5FA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA7CFA50622D5FA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3BA7CFA50622D5FA_TICK_OFFSET))(this, a1);
	}
};
