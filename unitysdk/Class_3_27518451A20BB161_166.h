#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1A58E4D09EF66D55;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_166_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9598E0)
#define CLASS_3_27518451A20BB161_166__CTOR_OFFSET UNITYSDK_OFFSET(0xA9598B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_166_TypeDefinitionIndex = 52009;

class Class_3_27518451A20BB161_166 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1A58E4D09EF66D55*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1A58E4D09EF66D55* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1A58E4D09EF66D55*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_166__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_166_ONTASKBEGIN_OFFSET))(this);
	}
};
