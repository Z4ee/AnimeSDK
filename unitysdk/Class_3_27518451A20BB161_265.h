#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8E674185A55892B4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_265_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152324C0)
#define CLASS_3_27518451A20BB161_265__CTOR_OFFSET UNITYSDK_OFFSET(0x15232490)

inline static constexpr unsigned int Class_3_27518451A20BB161_265_TypeDefinitionIndex = 56579;

class Class_3_27518451A20BB161_265 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8E674185A55892B4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8E674185A55892B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8E674185A55892B4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_265__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_265_ONTASKBEGIN_OFFSET))(this);
	}
};
