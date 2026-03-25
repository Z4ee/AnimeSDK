#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AetherDivideTriggerAttackSimplified; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1EF21FE3679F9925_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AAFD80)
#define CLASS_2_1EF21FE3679F9925_METHOD_2_AC4264BBC5A2903C_OFFSET UNITYSDK_OFFSET(0x10AAFDC0)
#define CLASS_2_1EF21FE3679F9925_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AAF770)
#define CLASS_2_1EF21FE3679F9925_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10AAF720)
#define CLASS_2_1EF21FE3679F9925_TICK_OFFSET UNITYSDK_OFFSET(0x10AAFD20)
#define CLASS_2_1EF21FE3679F9925__CTOR_OFFSET UNITYSDK_OFFSET(0x10AAF710)

inline static constexpr unsigned int Class_2_1EF21FE3679F9925_TypeDefinitionIndex = 46715;

class Class_2_1EF21FE3679F9925 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AetherDivideTriggerAttackSimplified* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AetherDivideTriggerAttackSimplified* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AetherDivideTriggerAttackSimplified*))((::PBYTE)hIl2Cpp + CLASS_2_1EF21FE3679F9925__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EF21FE3679F9925_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EF21FE3679F9925_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1EF21FE3679F9925_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EF21FE3679F9925_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_AC4264BBC5A2903C(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_1EF21FE3679F9925_METHOD_2_AC4264BBC5A2903C_OFFSET))(this, a1, a2);
	}
};
