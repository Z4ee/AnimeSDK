#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7ED93EDF030C1F5D_6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_227_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB59D250)
#define CLASS_3_27518451A20BB161_227__CTOR_OFFSET UNITYSDK_OFFSET(0xB59D220)

inline static constexpr unsigned int Class_3_27518451A20BB161_227_TypeDefinitionIndex = 55338;

class Class_3_27518451A20BB161_227 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7ED93EDF030C1F5D_6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7ED93EDF030C1F5D_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7ED93EDF030C1F5D_6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_227__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_227_ONTASKBEGIN_OFFSET))(this);
	}
};
