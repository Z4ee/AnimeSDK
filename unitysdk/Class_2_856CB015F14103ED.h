#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RoundCountCheck; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_856CB015F14103ED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152A6510)
#define CLASS_2_856CB015F14103ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152A6550)
#define CLASS_2_856CB015F14103ED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152A65A0)
#define CLASS_2_856CB015F14103ED_TICK_OFFSET UNITYSDK_OFFSET(0x152A65F0)
#define CLASS_2_856CB015F14103ED__CTOR_OFFSET UNITYSDK_OFFSET(0x152A6500)

inline static constexpr unsigned int Class_2_856CB015F14103ED_TypeDefinitionIndex = 55878;

class Class_2_856CB015F14103ED : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RoundCountCheck* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RoundCountCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RoundCountCheck*))((::PBYTE)hIl2Cpp + CLASS_2_856CB015F14103ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_856CB015F14103ED_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_856CB015F14103ED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_856CB015F14103ED_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_856CB015F14103ED_TICK_OFFSET))(this, a1);
	}
};
