#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FB616820AB842DA1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_252_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x130A6D30)
#define CLASS_3_27518451A20BB161_252__CTOR_OFFSET UNITYSDK_OFFSET(0x130A6D00)

inline static constexpr unsigned int Class_3_27518451A20BB161_252_TypeDefinitionIndex = 55884;

class Class_3_27518451A20BB161_252 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FB616820AB842DA1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FB616820AB842DA1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FB616820AB842DA1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_252__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_252_ONTASKBEGIN_OFFSET))(this);
	}
};
