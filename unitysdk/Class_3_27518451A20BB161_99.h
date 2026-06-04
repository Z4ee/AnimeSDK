#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_55218236A0FD67BC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_99_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141CA220)
#define CLASS_3_27518451A20BB161_99__CTOR_OFFSET UNITYSDK_OFFSET(0x141CA1F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_99_TypeDefinitionIndex = 50388;

class Class_3_27518451A20BB161_99 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_55218236A0FD67BC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_55218236A0FD67BC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_55218236A0FD67BC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_99_ONTASKBEGIN_OFFSET))(this);
	}
};
