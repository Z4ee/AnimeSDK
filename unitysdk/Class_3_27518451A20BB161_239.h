#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_20;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_239_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1676B2A0)
#define CLASS_3_27518451A20BB161_239__CTOR_OFFSET UNITYSDK_OFFSET(0x1676B270)

inline static constexpr unsigned int Class_3_27518451A20BB161_239_TypeDefinitionIndex = 55806;

class Class_3_27518451A20BB161_239 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_20*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_20* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_20*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_239__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_239_ONTASKBEGIN_OFFSET))(this);
	}
};
