#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6954875F008CACFC_9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_114_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14527E50)
#define CLASS_3_27518451A20BB161_114_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14527E90)
#define CLASS_3_27518451A20BB161_114__CTOR_OFFSET UNITYSDK_OFFSET(0x14527E20)

inline static constexpr unsigned int Class_3_27518451A20BB161_114_TypeDefinitionIndex = 51363;

class Class_3_27518451A20BB161_114 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6954875F008CACFC_9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6954875F008CACFC_9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6954875F008CACFC_9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_114__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_114_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_114_ONTASKBEGIN_OFFSET))(this);
	}
};
