#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_591813EF2A0FC1EF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_178_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B10130)
#define CLASS_3_27518451A20BB161_178__CTOR_OFFSET UNITYSDK_OFFSET(0x15B10100)

inline static constexpr unsigned int Class_3_27518451A20BB161_178_TypeDefinitionIndex = 52562;

class Class_3_27518451A20BB161_178 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_591813EF2A0FC1EF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_591813EF2A0FC1EF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_591813EF2A0FC1EF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_178__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_178_ONTASKBEGIN_OFFSET))(this);
	}
};
