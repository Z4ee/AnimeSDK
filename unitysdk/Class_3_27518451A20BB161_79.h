#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F5D293F59A8E7124;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_79_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A6B9C0)
#define CLASS_3_27518451A20BB161_79__CTOR_OFFSET UNITYSDK_OFFSET(0x15A6B990)

inline static constexpr unsigned int Class_3_27518451A20BB161_79_TypeDefinitionIndex = 52905;

class Class_3_27518451A20BB161_79 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F5D293F59A8E7124*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F5D293F59A8E7124* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F5D293F59A8E7124*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_79_ONTASKBEGIN_OFFSET))(this);
	}
};
