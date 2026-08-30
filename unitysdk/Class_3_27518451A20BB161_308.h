#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_08BA161D04336210;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_308_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x161351D0)
#define CLASS_3_27518451A20BB161_308__CTOR_OFFSET UNITYSDK_OFFSET(0x161351A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_308_TypeDefinitionIndex = 58958;

class Class_3_27518451A20BB161_308 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_08BA161D04336210*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_08BA161D04336210* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_08BA161D04336210*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_308__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_308_ONTASKBEGIN_OFFSET))(this);
	}
};
