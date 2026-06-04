#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_07CB640A20D6F01A.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSDFTextEffect; }

#define CLASS_3_8624305111DDB842_METHOD_3_6121A1BFC19AA4E0_OFFSET UNITYSDK_OFFSET(0x139D1BB0)
#define CLASS_3_8624305111DDB842_METHOD_3_9DFD52E945D90BE1_OFFSET UNITYSDK_OFFSET(0x139D1A70)
#define CLASS_3_8624305111DDB842__CTOR_OFFSET UNITYSDK_OFFSET(0x139D19C0)

inline static constexpr unsigned int Class_3_8624305111DDB842_TypeDefinitionIndex = 52083;

class Class_3_8624305111DDB842 : public ::Class_2_07CB640A20D6F01A
{
public:
	::RPG::GameCore::TriggerSDFTextEffect* Field_3_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + CLASS_3_8624305111DDB842__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9DFD52E945D90BE1(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_3_8624305111DDB842_METHOD_3_9DFD52E945D90BE1_OFFSET))(this, a1);
	}

	::System::Void Method_3_6121A1BFC19AA4E0(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_3_8624305111DDB842_METHOD_3_6121A1BFC19AA4E0_OFFSET))(this, a1);
	}
};
