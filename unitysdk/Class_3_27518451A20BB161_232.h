#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B2714ECCB11DEF92;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_232_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AAA190)
#define CLASS_3_27518451A20BB161_232__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAA160)

inline static constexpr unsigned int Class_3_27518451A20BB161_232_TypeDefinitionIndex = 53165;

class Class_3_27518451A20BB161_232 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B2714ECCB11DEF92*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B2714ECCB11DEF92* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B2714ECCB11DEF92*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_232__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_232_ONTASKBEGIN_OFFSET))(this);
	}
};
