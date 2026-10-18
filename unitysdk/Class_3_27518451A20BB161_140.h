#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BF0209E2F29D1F5A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_140_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9A5E10)
#define CLASS_3_27518451A20BB161_140_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9A5E50)
#define CLASS_3_27518451A20BB161_140__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A5DE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_140_TypeDefinitionIndex = 53876;

class Class_3_27518451A20BB161_140 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BF0209E2F29D1F5A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BF0209E2F29D1F5A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BF0209E2F29D1F5A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_140__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_140_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_140_ONTASKBEGIN_OFFSET))(this);
	}
};
