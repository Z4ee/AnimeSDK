#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OpenTrainPartyEntrancePage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_63203A1D1AE4E904_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1888D0D0)
#define CLASS_2_63203A1D1AE4E904_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1888D050)
#define CLASS_2_63203A1D1AE4E904_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1888D110)
#define CLASS_2_63203A1D1AE4E904_TICK_OFFSET UNITYSDK_OFFSET(0x1888D160)
#define CLASS_2_63203A1D1AE4E904__CTOR_OFFSET UNITYSDK_OFFSET(0x1888D040)

inline static constexpr unsigned int Class_2_63203A1D1AE4E904_TypeDefinitionIndex = 53674;

class Class_2_63203A1D1AE4E904 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::OpenTrainPartyEntrancePage* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTrainPartyEntrancePage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTrainPartyEntrancePage*))((::PBYTE)hIl2Cpp + CLASS_2_63203A1D1AE4E904__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63203A1D1AE4E904_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63203A1D1AE4E904_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63203A1D1AE4E904_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_63203A1D1AE4E904_TICK_OFFSET))(this, a1);
	}
};
