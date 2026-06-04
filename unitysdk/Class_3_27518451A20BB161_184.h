#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_077251722C3337DE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_184_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14348930)
#define CLASS_3_27518451A20BB161_184__CTOR_OFFSET UNITYSDK_OFFSET(0x14348900)

inline static constexpr unsigned int Class_3_27518451A20BB161_184_TypeDefinitionIndex = 54223;

class Class_3_27518451A20BB161_184 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_077251722C3337DE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_077251722C3337DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_077251722C3337DE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_184__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_184_ONTASKBEGIN_OFFSET))(this);
	}
};
