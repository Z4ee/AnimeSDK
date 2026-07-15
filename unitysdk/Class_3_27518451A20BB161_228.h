#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_EC562651AEE6EC13;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_228_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1646C370)
#define CLASS_3_27518451A20BB161_228__CTOR_OFFSET UNITYSDK_OFFSET(0x1646C340)

inline static constexpr unsigned int Class_3_27518451A20BB161_228_TypeDefinitionIndex = 53145;

class Class_3_27518451A20BB161_228 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_EC562651AEE6EC13*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EC562651AEE6EC13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EC562651AEE6EC13*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_228__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_228_ONTASKBEGIN_OFFSET))(this);
	}
};
