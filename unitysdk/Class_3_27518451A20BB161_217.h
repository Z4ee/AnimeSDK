#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6954875F008CACFC_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_217_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB728680)
#define CLASS_3_27518451A20BB161_217_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7286C0)
#define CLASS_3_27518451A20BB161_217__CTOR_OFFSET UNITYSDK_OFFSET(0xB728650)

inline static constexpr unsigned int Class_3_27518451A20BB161_217_TypeDefinitionIndex = 55251;

class Class_3_27518451A20BB161_217 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6954875F008CACFC_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6954875F008CACFC_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6954875F008CACFC_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_217__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_217_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_217_ONTASKBEGIN_OFFSET))(this);
	}
};
