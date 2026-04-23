#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C8B9FE2189B6BD01;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF2E0AB0)
#define CLASS_3_27518451A20BB161_11__CTOR_OFFSET UNITYSDK_OFFSET(0xF2E0A80)

inline static constexpr unsigned int Class_3_27518451A20BB161_11_TypeDefinitionIndex = 48726;

class Class_3_27518451A20BB161_11 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C8B9FE2189B6BD01*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C8B9FE2189B6BD01* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C8B9FE2189B6BD01*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_11_ONTASKBEGIN_OFFSET))(this);
	}
};
