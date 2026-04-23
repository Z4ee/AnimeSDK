#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_23;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_151_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FCB310)
#define CLASS_3_27518451A20BB161_151__CTOR_OFFSET UNITYSDK_OFFSET(0x8FCB2E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_151_TypeDefinitionIndex = 51301;

class Class_3_27518451A20BB161_151 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_23*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_23* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_23*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_151__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_151_ONTASKBEGIN_OFFSET))(this);
	}
};
