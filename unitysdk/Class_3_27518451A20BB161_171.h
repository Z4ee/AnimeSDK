#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2B8E5491DEE7C708;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_171_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB822F0)
#define CLASS_3_27518451A20BB161_171__CTOR_OFFSET UNITYSDK_OFFSET(0xEB822C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_171_TypeDefinitionIndex = 54940;

class Class_3_27518451A20BB161_171 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2B8E5491DEE7C708*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2B8E5491DEE7C708* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2B8E5491DEE7C708*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_171__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_171_ONTASKBEGIN_OFFSET))(this);
	}
};
