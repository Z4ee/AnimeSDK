#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_00655187C8E913A8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_248_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCEC630)
#define CLASS_3_27518451A20BB161_248__CTOR_OFFSET UNITYSDK_OFFSET(0xBCEC600)

inline static constexpr unsigned int Class_3_27518451A20BB161_248_TypeDefinitionIndex = 55876;

class Class_3_27518451A20BB161_248 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_00655187C8E913A8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_00655187C8E913A8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_00655187C8E913A8*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_248__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_248_ONTASKBEGIN_OFFSET))(this);
	}
};
