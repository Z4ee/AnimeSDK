#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_37;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17AC45C0)
#define CLASS_3_27518451A20BB161_7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AC4400)
#define CLASS_3_27518451A20BB161_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC43D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_7_TypeDefinitionIndex = 52958;

class Class_3_27518451A20BB161_7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_37*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_37* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_37*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_7_DISPOSE_OFFSET))(this);
	}
};
