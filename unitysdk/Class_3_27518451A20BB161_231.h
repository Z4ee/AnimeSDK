#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1953B120E22FB7C9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_231_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2692E0)
#define CLASS_3_27518451A20BB161_231__CTOR_OFFSET UNITYSDK_OFFSET(0xC2692B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_231_TypeDefinitionIndex = 55383;

class Class_3_27518451A20BB161_231 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1953B120E22FB7C9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1953B120E22FB7C9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1953B120E22FB7C9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_231__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_231_ONTASKBEGIN_OFFSET))(this);
	}
};
