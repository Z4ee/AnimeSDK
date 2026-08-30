#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_23D2CD7D9920A53A.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskB; }

#define CLASS_3_EECDAEEEADAB2602_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB906070)
#define CLASS_3_EECDAEEEADAB2602_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB905F70)
#define CLASS_3_EECDAEEEADAB2602_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB906020)
#define CLASS_3_EECDAEEEADAB2602_TICK_OFFSET UNITYSDK_OFFSET(0xB905FC0)
#define CLASS_3_EECDAEEEADAB2602__CTOR_OFFSET UNITYSDK_OFFSET(0xB905EF0)

inline static constexpr unsigned int Class_3_EECDAEEEADAB2602_TypeDefinitionIndex = 55976;

class Class_3_EECDAEEEADAB2602 : public ::Class_2_23D2CD7D9920A53A
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixTaskB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixTaskB*))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_DISPOSE_OFFSET))(this);
	}
};
