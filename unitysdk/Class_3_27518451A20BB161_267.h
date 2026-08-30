#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D90F30BC090D5446;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_267_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB931870)
#define CLASS_3_27518451A20BB161_267__CTOR_OFFSET UNITYSDK_OFFSET(0xB931840)

inline static constexpr unsigned int Class_3_27518451A20BB161_267_TypeDefinitionIndex = 56581;

class Class_3_27518451A20BB161_267 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D90F30BC090D5446*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D90F30BC090D5446* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D90F30BC090D5446*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_267__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_267_ONTASKBEGIN_OFFSET))(this);
	}
};
