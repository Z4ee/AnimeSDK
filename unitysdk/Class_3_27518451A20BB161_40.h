#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_173E8AB4B5DEEBFA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1AE7A0)
#define CLASS_3_27518451A20BB161_40__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AE860)

inline static constexpr unsigned int Class_3_27518451A20BB161_40_TypeDefinitionIndex = 42794;

class Class_3_27518451A20BB161_40 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_173E8AB4B5DEEBFA*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_173E8AB4B5DEEBFA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_173E8AB4B5DEEBFA*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40_ONTASKBEGIN_OFFSET))(this);
	}
};
