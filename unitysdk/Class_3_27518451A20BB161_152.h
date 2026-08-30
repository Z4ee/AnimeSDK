#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9E1E11FE8F8A3BE2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_152_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1608C720)
#define CLASS_3_27518451A20BB161_152__CTOR_OFFSET UNITYSDK_OFFSET(0x1608C6F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_152_TypeDefinitionIndex = 54383;

class Class_3_27518451A20BB161_152 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9E1E11FE8F8A3BE2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9E1E11FE8F8A3BE2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9E1E11FE8F8A3BE2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_152__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_152_ONTASKBEGIN_OFFSET))(this);
	}
};
