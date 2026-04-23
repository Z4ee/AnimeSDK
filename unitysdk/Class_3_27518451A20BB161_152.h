#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8CCE4D6721C86CE0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_152_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12B2D640)
#define CLASS_3_27518451A20BB161_152__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2D610)

inline static constexpr unsigned int Class_3_27518451A20BB161_152_TypeDefinitionIndex = 51321;

class Class_3_27518451A20BB161_152 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8CCE4D6721C86CE0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8CCE4D6721C86CE0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8CCE4D6721C86CE0*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_152__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_152_ONTASKBEGIN_OFFSET))(this);
	}
};
