#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_793BE85014926622;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_189_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7ECC70)
#define CLASS_3_27518451A20BB161_189__CTOR_OFFSET UNITYSDK_OFFSET(0xA7ECC40)

inline static constexpr unsigned int Class_3_27518451A20BB161_189_TypeDefinitionIndex = 54686;

class Class_3_27518451A20BB161_189 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_793BE85014926622*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_793BE85014926622* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_793BE85014926622*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_189__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_189_ONTASKBEGIN_OFFSET))(this);
	}
};
