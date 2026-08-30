#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_49;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_153_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1872E5E0)
#define CLASS_3_27518451A20BB161_153__CTOR_OFFSET UNITYSDK_OFFSET(0x1872E5B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_153_TypeDefinitionIndex = 54385;

class Class_3_27518451A20BB161_153 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_49*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_49* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_49*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_153__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_153_ONTASKBEGIN_OFFSET))(this);
	}
};
