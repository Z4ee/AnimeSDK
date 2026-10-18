#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3919431241A30DC6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_139_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C30780)
#define CLASS_3_27518451A20BB161_139_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C307C0)
#define CLASS_3_27518451A20BB161_139__CTOR_OFFSET UNITYSDK_OFFSET(0x15C30750)

inline static constexpr unsigned int Class_3_27518451A20BB161_139_TypeDefinitionIndex = 53874;

class Class_3_27518451A20BB161_139 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3919431241A30DC6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3919431241A30DC6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3919431241A30DC6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_139__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_139_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_139_ONTASKBEGIN_OFFSET))(this);
	}
};
