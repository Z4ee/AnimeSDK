#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_9805D2E5B5583050_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19965860)
#define CLASS_2_9805D2E5B5583050_METHOD_2_79C109E266A3AC7B_OFFSET UNITYSDK_OFFSET(0x19966360)
#define CLASS_2_9805D2E5B5583050_METHOD_2_ACE4204EBB1CE487_OFFSET UNITYSDK_OFFSET(0x19965E50)
#define CLASS_2_9805D2E5B5583050_METHOD_2_DD07975B7CAC6DA5_OFFSET UNITYSDK_OFFSET(0x19965D30)
#define CLASS_2_9805D2E5B5583050_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19965970)
#define CLASS_2_9805D2E5B5583050_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19965C80)
#define CLASS_2_9805D2E5B5583050_TICK_OFFSET UNITYSDK_OFFSET(0x19965CD0)
#define CLASS_2_9805D2E5B5583050__CTOR_OFFSET UNITYSDK_OFFSET(0x19965850)

inline static constexpr unsigned int Class_2_9805D2E5B5583050_TypeDefinitionIndex = 58622;

class Class_2_9805D2E5B5583050 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueStart* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueStart*))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD07975B7CAC6DA5(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_METHOD_2_DD07975B7CAC6DA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ACE4204EBB1CE487()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_METHOD_2_ACE4204EBB1CE487_OFFSET))(this);
	}

	::System::Void Method_2_79C109E266A3AC7B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_METHOD_2_79C109E266A3AC7B_OFFSET))(this, a1, a2);
	}
};
