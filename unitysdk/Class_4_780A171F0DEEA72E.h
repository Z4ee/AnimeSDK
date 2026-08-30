#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_4A000A8A4722E95D.h"

namespace RPG::GameCore { class ChangeMonsterUIDisplay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_780A171F0DEEA72E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA49420)
#define CLASS_4_780A171F0DEEA72E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA493F0)

inline static constexpr unsigned int Class_4_780A171F0DEEA72E_TypeDefinitionIndex = 55135;

class Class_4_780A171F0DEEA72E : public ::Class_3_4A000A8A4722E95D
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeMonsterUIDisplay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeMonsterUIDisplay*))((::PBYTE)hIl2Cpp + CLASS_4_780A171F0DEEA72E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_780A171F0DEEA72E_ONTASKBEGIN_OFFSET))(this);
	}
};
