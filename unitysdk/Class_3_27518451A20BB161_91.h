#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D6DFF44C1DA5EF9F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1607F500)
#define CLASS_3_27518451A20BB161_91__CTOR_OFFSET UNITYSDK_OFFSET(0x1607F4D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_91_TypeDefinitionIndex = 50871;

class Class_3_27518451A20BB161_91 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D6DFF44C1DA5EF9F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D6DFF44C1DA5EF9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D6DFF44C1DA5EF9F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_91_ONTASKBEGIN_OFFSET))(this);
	}
};
