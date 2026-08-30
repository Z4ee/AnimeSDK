#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingFesAbilityConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_5332742A7B058447_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x178F8A10)
#define CLASS_1_5332742A7B058447_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x178F8A20)
#define CLASS_1_5332742A7B058447__CTOR_OFFSET UNITYSDK_OFFSET(0x178F8A00)

inline static constexpr unsigned int Class_1_5332742A7B058447_TypeDefinitionIndex = 77238;

class Class_1_5332742A7B058447 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChenLingFesAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChenLingFesAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5332742A7B058447__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TaskContext* get_TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5332742A7B058447_GET_TASKCONTEXT_OFFSET))(this);
	}

	::System::Void set_TaskContext(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_5332742A7B058447_SET_TASKCONTEXT_OFFSET))(this, a1);
	}
};
