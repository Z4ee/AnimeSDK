#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6954875F008CACFC_10;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_115_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152D7490)
#define CLASS_3_27518451A20BB161_115_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152D74D0)
#define CLASS_3_27518451A20BB161_115__CTOR_OFFSET UNITYSDK_OFFSET(0x152D7460)

inline static constexpr unsigned int Class_3_27518451A20BB161_115_TypeDefinitionIndex = 51365;

class Class_3_27518451A20BB161_115 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6954875F008CACFC_10*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6954875F008CACFC_10* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6954875F008CACFC_10*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_115__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_115_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_115_ONTASKBEGIN_OFFSET))(this);
	}
};
