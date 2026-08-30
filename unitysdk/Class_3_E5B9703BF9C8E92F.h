#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

namespace RPG::GameCore { class SO_Wait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E5B9703BF9C8E92F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188052E0)
#define CLASS_3_E5B9703BF9C8E92F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18805330)
#define CLASS_3_E5B9703BF9C8E92F_TICK_OFFSET UNITYSDK_OFFSET(0x18805380)
#define CLASS_3_E5B9703BF9C8E92F__CTOR_OFFSET UNITYSDK_OFFSET(0x18805290)

inline static constexpr unsigned int Class_3_E5B9703BF9C8E92F_TypeDefinitionIndex = 52414;

class Class_3_E5B9703BF9C8E92F : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_Wait*>
{
public:
	::System::Single PGMIOKKLHIE; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_Wait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_Wait*))((::PBYTE)hIl2Cpp + CLASS_3_E5B9703BF9C8E92F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5B9703BF9C8E92F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5B9703BF9C8E92F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E5B9703BF9C8E92F_TICK_OFFSET))(this, a1);
	}
};
