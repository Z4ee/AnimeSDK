#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DamageStance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_042761EA5862A428_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFC9930)
#define CLASS_2_042761EA5862A428_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFC9970)
#define CLASS_2_042761EA5862A428_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAFCA3E0)
#define CLASS_2_042761EA5862A428_TICK_OFFSET UNITYSDK_OFFSET(0xAFCA430)
#define CLASS_2_042761EA5862A428__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC9920)

inline static constexpr unsigned int Class_2_042761EA5862A428_TypeDefinitionIndex = 51389;

class Class_2_042761EA5862A428 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::DamageStance* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageStance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageStance*))((::PBYTE)hIl2Cpp + CLASS_2_042761EA5862A428__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_042761EA5862A428_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_042761EA5862A428_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_042761EA5862A428_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_042761EA5862A428_TICK_OFFSET))(this, a1);
	}
};
