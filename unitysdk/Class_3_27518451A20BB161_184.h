#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F1507657401FC6F9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_184_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12920090)
#define CLASS_3_27518451A20BB161_184__CTOR_OFFSET UNITYSDK_OFFSET(0x12920060)

inline static constexpr unsigned int Class_3_27518451A20BB161_184_TypeDefinitionIndex = 54049;

class Class_3_27518451A20BB161_184 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F1507657401FC6F9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F1507657401FC6F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F1507657401FC6F9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_184__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_184_ONTASKBEGIN_OFFSET))(this);
	}
};
