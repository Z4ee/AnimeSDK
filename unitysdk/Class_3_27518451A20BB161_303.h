#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_25;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_303_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0F4260)
#define CLASS_3_27518451A20BB161_303__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F4230)

inline static constexpr unsigned int Class_3_27518451A20BB161_303_TypeDefinitionIndex = 58838;

class Class_3_27518451A20BB161_303 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_25*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_25* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_25*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_303__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_303_ONTASKBEGIN_OFFSET))(this);
	}
};
