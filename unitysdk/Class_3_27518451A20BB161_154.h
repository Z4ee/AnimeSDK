#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_59B2F1F6FC9664FF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_154_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA544B70)
#define CLASS_3_27518451A20BB161_154__CTOR_OFFSET UNITYSDK_OFFSET(0xA544B40)

inline static constexpr unsigned int Class_3_27518451A20BB161_154_TypeDefinitionIndex = 51897;

class Class_3_27518451A20BB161_154 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_59B2F1F6FC9664FF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_59B2F1F6FC9664FF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_59B2F1F6FC9664FF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_154__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_154_ONTASKBEGIN_OFFSET))(this);
	}
};
