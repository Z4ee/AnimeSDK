#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_33946982BCF9606D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_85_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF14280)
#define CLASS_3_27518451A20BB161_85__CTOR_OFFSET UNITYSDK_OFFSET(0xBF14250)

inline static constexpr unsigned int Class_3_27518451A20BB161_85_TypeDefinitionIndex = 50318;

class Class_3_27518451A20BB161_85 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_33946982BCF9606D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_33946982BCF9606D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_33946982BCF9606D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_85_ONTASKBEGIN_OFFSET))(this);
	}
};
