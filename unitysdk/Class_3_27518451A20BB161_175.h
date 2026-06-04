#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_74B5C1BC3EF4F419;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_175_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13CBEA50)
#define CLASS_3_27518451A20BB161_175__CTOR_OFFSET UNITYSDK_OFFSET(0x13CBEA20)

inline static constexpr unsigned int Class_3_27518451A20BB161_175_TypeDefinitionIndex = 52202;

class Class_3_27518451A20BB161_175 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_74B5C1BC3EF4F419*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_74B5C1BC3EF4F419* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_74B5C1BC3EF4F419*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_175__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_175_ONTASKBEGIN_OFFSET))(this);
	}
};
