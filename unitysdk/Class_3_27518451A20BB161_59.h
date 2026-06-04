#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4FB990F9B82B4A24;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_59_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE45340)
#define CLASS_3_27518451A20BB161_59__CTOR_OFFSET UNITYSDK_OFFSET(0xDE45310)

inline static constexpr unsigned int Class_3_27518451A20BB161_59_TypeDefinitionIndex = 49591;

class Class_3_27518451A20BB161_59 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4FB990F9B82B4A24*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4FB990F9B82B4A24* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4FB990F9B82B4A24*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_59_ONTASKBEGIN_OFFSET))(this);
	}
};
