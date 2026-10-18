#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RoundCountCheck; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_856CB015F14103ED_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB726680)
#define CLASS_2_856CB015F14103ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7266C0)
#define CLASS_2_856CB015F14103ED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB726710)
#define CLASS_2_856CB015F14103ED_TICK_OFFSET UNITYSDK_OFFSET(0xB726760)
#define CLASS_2_856CB015F14103ED__CTOR_OFFSET UNITYSDK_OFFSET(0xB726670)

inline static constexpr unsigned int Class_2_856CB015F14103ED_TypeDefinitionIndex = 58502;

class Class_2_856CB015F14103ED : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RoundCountCheck* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
