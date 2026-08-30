#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_15;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_111_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A38A50)
#define CLASS_3_27518451A20BB161_111_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A38B50)
#define CLASS_3_27518451A20BB161_111__CTOR_OFFSET UNITYSDK_OFFSET(0x15A38A20)

inline static constexpr unsigned int Class_3_27518451A20BB161_111_TypeDefinitionIndex = 53606;

class Class_3_27518451A20BB161_111 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_15*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_15* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_15*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111_ONTASKBEGIN_OFFSET))(this);
	}
};
