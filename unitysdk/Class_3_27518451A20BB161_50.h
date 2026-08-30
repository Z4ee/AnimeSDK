#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_13;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E21A90)
#define CLASS_3_27518451A20BB161_50__CTOR_OFFSET UNITYSDK_OFFSET(0x18E21A60)

inline static constexpr unsigned int Class_3_27518451A20BB161_50_TypeDefinitionIndex = 53124;

class Class_3_27518451A20BB161_50 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_13*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_13*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_50_ONTASKBEGIN_OFFSET))(this);
	}
};
