#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BF8338B17E7527E3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_212_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFB91C0)
#define CLASS_3_27518451A20BB161_212__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB9190)

inline static constexpr unsigned int Class_3_27518451A20BB161_212_TypeDefinitionIndex = 53002;

class Class_3_27518451A20BB161_212 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BF8338B17E7527E3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BF8338B17E7527E3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BF8338B17E7527E3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_212__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_212_ONTASKBEGIN_OFFSET))(this);
	}
};
