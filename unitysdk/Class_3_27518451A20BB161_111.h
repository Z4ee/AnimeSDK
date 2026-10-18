#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_34;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_111_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A95AB0)
#define CLASS_3_27518451A20BB161_111_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A95AF0)
#define CLASS_3_27518451A20BB161_111_TICK_OFFSET UNITYSDK_OFFSET(0x15A95BA0)
#define CLASS_3_27518451A20BB161_111__CTOR_OFFSET UNITYSDK_OFFSET(0x15A95A80)

inline static constexpr unsigned int Class_3_27518451A20BB161_111_TypeDefinitionIndex = 53334;

class Class_3_27518451A20BB161_111 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_34*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_34* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_34*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111_TICK_OFFSET))(this, a1);
	}
};
