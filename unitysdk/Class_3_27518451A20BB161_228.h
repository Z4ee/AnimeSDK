#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5134D652652849DB;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_228_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4B6CB0)
#define CLASS_3_27518451A20BB161_228__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B6C80)

inline static constexpr unsigned int Class_3_27518451A20BB161_228_TypeDefinitionIndex = 55722;

class Class_3_27518451A20BB161_228 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5134D652652849DB*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5134D652652849DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5134D652652849DB*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_228__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_228_ONTASKBEGIN_OFFSET))(this);
	}
};
