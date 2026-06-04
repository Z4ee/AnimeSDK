#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A0580152EB393340;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdvNPCAttack; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4CDE3141C5D0D768_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C873C0)
#define CLASS_2_4CDE3141C5D0D768_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x13C87470)
#define CLASS_2_4CDE3141C5D0D768_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C87400)
#define CLASS_2_4CDE3141C5D0D768_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13C876E0)
#define CLASS_2_4CDE3141C5D0D768_TICK_OFFSET UNITYSDK_OFFSET(0x13C87740)
#define CLASS_2_4CDE3141C5D0D768__CTOR_OFFSET UNITYSDK_OFFSET(0x13C872A0)

inline static constexpr unsigned int Class_2_4CDE3141C5D0D768_TypeDefinitionIndex = 49001;

class Class_2_4CDE3141C5D0D768 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AdvNPCAttack* Field_2_1; // 0x20
	::Class_2_A0580152EB393340* Field_2_2; // 0x28
	::Class_2_F67FF7EB526BF85C* Field_2_3; // 0x30
	::RPG::GameCore::AdventureCharacterController* Field_2_4; // 0x38
	::RPG::GameCore::NPCComponent* Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCAttack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCAttack*))((::PBYTE)hIl2Cpp + CLASS_2_4CDE3141C5D0D768__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CDE3141C5D0D768_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CDE3141C5D0D768_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CDE3141C5D0D768_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4CDE3141C5D0D768_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CDE3141C5D0D768_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}
};
