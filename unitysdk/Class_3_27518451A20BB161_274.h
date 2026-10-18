#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3A4F1B9D1A7680C2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_274_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E51A70)
#define CLASS_3_27518451A20BB161_274__CTOR_OFFSET UNITYSDK_OFFSET(0x15E51A40)

inline static constexpr unsigned int Class_3_27518451A20BB161_274_TypeDefinitionIndex = 55880;

class Class_3_27518451A20BB161_274 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3A4F1B9D1A7680C2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3A4F1B9D1A7680C2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3A4F1B9D1A7680C2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_274__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_274_ONTASKBEGIN_OFFSET))(this);
	}
};
