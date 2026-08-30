#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetUpPamAIDialogue; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_CA1A1CB95049C55A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB467660)
#define CLASS_2_CA1A1CB95049C55A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4676A0)
#define CLASS_2_CA1A1CB95049C55A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB467C20)
#define CLASS_2_CA1A1CB95049C55A_TICK_OFFSET UNITYSDK_OFFSET(0xB467C70)
#define CLASS_2_CA1A1CB95049C55A__CTOR_OFFSET UNITYSDK_OFFSET(0xB467650)

inline static constexpr unsigned int Class_2_CA1A1CB95049C55A_TypeDefinitionIndex = 59125;

class Class_2_CA1A1CB95049C55A : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* MEGLFLCPEPB; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUpPamAIDialogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUpPamAIDialogue*))((::PBYTE)hIl2Cpp + CLASS_2_CA1A1CB95049C55A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1A1CB95049C55A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1A1CB95049C55A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1A1CB95049C55A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA1A1CB95049C55A_TICK_OFFSET))(this, a1);
	}
};
