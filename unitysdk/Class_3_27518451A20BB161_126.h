#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_43408236CC2F7CF2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_126_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCED55E0)
#define CLASS_3_27518451A20BB161_126__CTOR_OFFSET UNITYSDK_OFFSET(0xCED55B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_126_TypeDefinitionIndex = 51495;

class Class_3_27518451A20BB161_126 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_43408236CC2F7CF2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_43408236CC2F7CF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_43408236CC2F7CF2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_126__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_126_ONTASKBEGIN_OFFSET))(this);
	}
};
