#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_EC562651AEE6EC13;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_258_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC27DA50)
#define CLASS_3_27518451A20BB161_258__CTOR_OFFSET UNITYSDK_OFFSET(0xC27DA20)

inline static constexpr unsigned int Class_3_27518451A20BB161_258_TypeDefinitionIndex = 55665;

class Class_3_27518451A20BB161_258 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_EC562651AEE6EC13*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EC562651AEE6EC13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EC562651AEE6EC13*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_258__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_258_ONTASKBEGIN_OFFSET))(this);
	}
};
