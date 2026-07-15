#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OpenTrainPartyEntrancePage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_63203A1D1AE4E904_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170C1380)
#define CLASS_2_63203A1D1AE4E904_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170C1300)
#define CLASS_2_63203A1D1AE4E904_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x170C13C0)
#define CLASS_2_63203A1D1AE4E904_TICK_OFFSET UNITYSDK_OFFSET(0x170C1410)
#define CLASS_2_63203A1D1AE4E904__CTOR_OFFSET UNITYSDK_OFFSET(0x170C12F0)

inline static constexpr unsigned int Class_2_63203A1D1AE4E904_TypeDefinitionIndex = 50990;

class Class_2_63203A1D1AE4E904 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::OpenTrainPartyEntrancePage* Field_2_1; // 0x20

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
