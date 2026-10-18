#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_96ECD940631FC8B8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_208_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1A2000)
#define CLASS_3_27518451A20BB161_208__CTOR_OFFSET UNITYSDK_OFFSET(0xC1A1FD0)

inline static constexpr unsigned int Class_3_27518451A20BB161_208_TypeDefinitionIndex = 55213;

class Class_3_27518451A20BB161_208 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_96ECD940631FC8B8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_96ECD940631FC8B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_96ECD940631FC8B8*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_208__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_208_ONTASKBEGIN_OFFSET))(this);
	}
};
