#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9612FDC40617B8F6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_230_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15571170)
#define CLASS_3_27518451A20BB161_230_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155711B0)
#define CLASS_3_27518451A20BB161_230__CTOR_OFFSET UNITYSDK_OFFSET(0x15571140)

inline static constexpr unsigned int Class_3_27518451A20BB161_230_TypeDefinitionIndex = 55374;

class Class_3_27518451A20BB161_230 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9612FDC40617B8F6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9612FDC40617B8F6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9612FDC40617B8F6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_230__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_230_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_230_ONTASKBEGIN_OFFSET))(this);
	}
};
