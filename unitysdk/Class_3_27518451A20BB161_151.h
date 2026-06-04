#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5134D652652849DB;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_151_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3E38D0)
#define CLASS_3_27518451A20BB161_151__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E38A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_151_TypeDefinitionIndex = 51864;

class Class_3_27518451A20BB161_151 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5134D652652849DB*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5134D652652849DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5134D652652849DB*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_151__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_151_ONTASKBEGIN_OFFSET))(this);
	}
};
