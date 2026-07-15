#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7512F68BB190640E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_108_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D51B90)
#define CLASS_3_27518451A20BB161_108_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D51BD0)
#define CLASS_3_27518451A20BB161_108__CTOR_OFFSET UNITYSDK_OFFSET(0x17D51B60)

inline static constexpr unsigned int Class_3_27518451A20BB161_108_TypeDefinitionIndex = 51129;

class Class_3_27518451A20BB161_108 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7512F68BB190640E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7512F68BB190640E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7512F68BB190640E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_108__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_108_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_108_ONTASKBEGIN_OFFSET))(this);
	}
};
