#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7ED93EDF030C1F5D_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_157_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17BAA050)
#define CLASS_3_27518451A20BB161_157__CTOR_OFFSET UNITYSDK_OFFSET(0x17BAA020)

inline static constexpr unsigned int Class_3_27518451A20BB161_157_TypeDefinitionIndex = 55022;

class Class_3_27518451A20BB161_157 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7ED93EDF030C1F5D_5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7ED93EDF030C1F5D_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7ED93EDF030C1F5D_5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_157__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_157_ONTASKBEGIN_OFFSET))(this);
	}
};
