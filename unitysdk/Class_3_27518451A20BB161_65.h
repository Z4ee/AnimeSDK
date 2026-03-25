#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8C889C1E1136F5EA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_65_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1180B290)
#define CLASS_3_27518451A20BB161_65__CTOR_OFFSET UNITYSDK_OFFSET(0x1180B260)

inline static constexpr unsigned int Class_3_27518451A20BB161_65_TypeDefinitionIndex = 44085;

class Class_3_27518451A20BB161_65 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8C889C1E1136F5EA*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8C889C1E1136F5EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8C889C1E1136F5EA*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_65__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_65_ONTASKBEGIN_OFFSET))(this);
	}
};
