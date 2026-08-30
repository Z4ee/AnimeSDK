#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0DDE289110424927;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_251_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA4B1C0)
#define CLASS_3_27518451A20BB161_251__CTOR_OFFSET UNITYSDK_OFFSET(0xBA4B190)

inline static constexpr unsigned int Class_3_27518451A20BB161_251_TypeDefinitionIndex = 55882;

class Class_3_27518451A20BB161_251 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0DDE289110424927*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0DDE289110424927* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0DDE289110424927*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_251__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_251_ONTASKBEGIN_OFFSET))(this);
	}
};
