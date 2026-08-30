#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LoadCharacterState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9041754AA2EDE0BA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17AA5E50)
#define CLASS_2_9041754AA2EDE0BA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AA5E90)
#define CLASS_2_9041754AA2EDE0BA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17AA60A0)
#define CLASS_2_9041754AA2EDE0BA_TICK_OFFSET UNITYSDK_OFFSET(0x17AA60F0)
#define CLASS_2_9041754AA2EDE0BA__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA5E40)

inline static constexpr unsigned int Class_2_9041754AA2EDE0BA_TypeDefinitionIndex = 55345;

class Class_2_9041754AA2EDE0BA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::LoadCharacterState* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadCharacterState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadCharacterState*))((::PBYTE)hIl2Cpp + CLASS_2_9041754AA2EDE0BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9041754AA2EDE0BA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9041754AA2EDE0BA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9041754AA2EDE0BA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9041754AA2EDE0BA_TICK_OFFSET))(this, a1);
	}
};
