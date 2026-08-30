#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F5D293F59A8E7124;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_74_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15785BF0)
#define CLASS_3_27518451A20BB161_74__CTOR_OFFSET UNITYSDK_OFFSET(0x15785BC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_74_TypeDefinitionIndex = 53179;

class Class_3_27518451A20BB161_74 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F5D293F59A8E7124*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F5D293F59A8E7124* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F5D293F59A8E7124*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_74_ONTASKBEGIN_OFFSET))(this);
	}
};
