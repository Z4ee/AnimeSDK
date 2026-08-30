#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7512F68BB190640E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_117_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A68910)
#define CLASS_3_27518451A20BB161_117_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A68950)
#define CLASS_3_27518451A20BB161_117__CTOR_OFFSET UNITYSDK_OFFSET(0x15A688E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_117_TypeDefinitionIndex = 53813;

class Class_3_27518451A20BB161_117 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7512F68BB190640E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7512F68BB190640E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7512F68BB190640E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_117__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_117_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_117_ONTASKBEGIN_OFFSET))(this);
	}
};
