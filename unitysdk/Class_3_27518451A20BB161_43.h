#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_35981139E80F39AD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1197ED10)
#define CLASS_3_27518451A20BB161_43__CTOR_OFFSET UNITYSDK_OFFSET(0x1197ECE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_43_TypeDefinitionIndex = 48774;

class Class_3_27518451A20BB161_43 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_35981139E80F39AD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_35981139E80F39AD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_35981139E80F39AD*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43_ONTASKBEGIN_OFFSET))(this);
	}
};
