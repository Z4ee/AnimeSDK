#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0F021ECA96048DC9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_144_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB990D20)
#define CLASS_3_27518451A20BB161_144_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB990D60)
#define CLASS_3_27518451A20BB161_144__CTOR_OFFSET UNITYSDK_OFFSET(0xB990CF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_144_TypeDefinitionIndex = 53898;

class Class_3_27518451A20BB161_144 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0F021ECA96048DC9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0F021ECA96048DC9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0F021ECA96048DC9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_144__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_144_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_144_ONTASKBEGIN_OFFSET))(this);
	}
};
