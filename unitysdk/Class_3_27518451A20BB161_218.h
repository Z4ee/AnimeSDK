#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_20;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_218_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB728D70)
#define CLASS_3_27518451A20BB161_218__CTOR_OFFSET UNITYSDK_OFFSET(0xB728D40)

inline static constexpr unsigned int Class_3_27518451A20BB161_218_TypeDefinitionIndex = 55253;

class Class_3_27518451A20BB161_218 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_20*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_20* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_20*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_218__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_218_ONTASKBEGIN_OFFSET))(this);
	}
};
