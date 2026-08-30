#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7340287BD5632236;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_227_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDB1D30)
#define CLASS_3_27518451A20BB161_227__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB1D00)

inline static constexpr unsigned int Class_3_27518451A20BB161_227_TypeDefinitionIndex = 55709;

class Class_3_27518451A20BB161_227 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7340287BD5632236*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7340287BD5632236* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7340287BD5632236*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_227__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_227_ONTASKBEGIN_OFFSET))(this);
	}
};
