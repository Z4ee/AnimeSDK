#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6954875F008CACFC_10;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_124_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8EA340)
#define CLASS_3_27518451A20BB161_124_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8EA380)
#define CLASS_3_27518451A20BB161_124__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EA310)

inline static constexpr unsigned int Class_3_27518451A20BB161_124_TypeDefinitionIndex = 54049;

class Class_3_27518451A20BB161_124 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6954875F008CACFC_10*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6954875F008CACFC_10* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6954875F008CACFC_10*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_124__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_124_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_124_ONTASKBEGIN_OFFSET))(this);
	}
};
