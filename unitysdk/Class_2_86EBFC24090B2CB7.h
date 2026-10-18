#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeleportToFiveDimGame; }

#define CLASS_2_86EBFC24090B2CB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1581B5C0)
#define CLASS_2_86EBFC24090B2CB7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1581B610)
#define CLASS_2_86EBFC24090B2CB7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1581B9F0)
#define CLASS_2_86EBFC24090B2CB7_TICK_OFFSET UNITYSDK_OFFSET(0x1581BA40)
#define CLASS_2_86EBFC24090B2CB7__CTOR_OFFSET UNITYSDK_OFFSET(0x1581B5B0)

inline static constexpr unsigned int Class_2_86EBFC24090B2CB7_TypeDefinitionIndex = 52894;

class Class_2_86EBFC24090B2CB7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TeleportToFiveDimGame* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeleportToFiveDimGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeleportToFiveDimGame*))((::PBYTE)hIl2Cpp + CLASS_2_86EBFC24090B2CB7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86EBFC24090B2CB7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86EBFC24090B2CB7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86EBFC24090B2CB7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_86EBFC24090B2CB7_TICK_OFFSET))(this, a1);
	}
};
