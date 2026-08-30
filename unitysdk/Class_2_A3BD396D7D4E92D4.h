#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetLoadingStratageType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A3BD396D7D4E92D4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162D8840)
#define CLASS_2_A3BD396D7D4E92D4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162D8880)
#define CLASS_2_A3BD396D7D4E92D4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162D89C0)
#define CLASS_2_A3BD396D7D4E92D4_TICK_OFFSET UNITYSDK_OFFSET(0x162D8A10)
#define CLASS_2_A3BD396D7D4E92D4__CTOR_OFFSET UNITYSDK_OFFSET(0x162D8830)

inline static constexpr unsigned int Class_2_A3BD396D7D4E92D4_TypeDefinitionIndex = 53499;

class Class_2_A3BD396D7D4E92D4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetLoadingStratageType* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLoadingStratageType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLoadingStratageType*))((::PBYTE)hIl2Cpp + CLASS_2_A3BD396D7D4E92D4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3BD396D7D4E92D4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3BD396D7D4E92D4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3BD396D7D4E92D4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3BD396D7D4E92D4_TICK_OFFSET))(this, a1);
	}
};
