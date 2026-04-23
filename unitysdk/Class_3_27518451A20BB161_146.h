#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_418A1862571C5BF4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_146_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B347D0)
#define CLASS_3_27518451A20BB161_146__CTOR_OFFSET UNITYSDK_OFFSET(0x11B347A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_146_TypeDefinitionIndex = 51259;

class Class_3_27518451A20BB161_146 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_418A1862571C5BF4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_418A1862571C5BF4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_418A1862571C5BF4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_146__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_146_ONTASKBEGIN_OFFSET))(this);
	}
};
