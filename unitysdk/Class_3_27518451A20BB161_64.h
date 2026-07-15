#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_11CB91E0E8E31875;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_64_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EAAB00)
#define CLASS_3_27518451A20BB161_64__CTOR_OFFSET UNITYSDK_OFFSET(0x15EAAAD0)

inline static constexpr unsigned int Class_3_27518451A20BB161_64_TypeDefinitionIndex = 50479;

class Class_3_27518451A20BB161_64 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_11CB91E0E8E31875*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_11CB91E0E8E31875* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_11CB91E0E8E31875*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_64_ONTASKBEGIN_OFFSET))(this);
	}
};
