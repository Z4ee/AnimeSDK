#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_36;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_53_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198C8520)
#define CLASS_3_27518451A20BB161_53__CTOR_OFFSET UNITYSDK_OFFSET(0x198C84F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_53_TypeDefinitionIndex = 53132;

class Class_3_27518451A20BB161_53 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_36*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_36* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_36*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_53_ONTASKBEGIN_OFFSET))(this);
	}
};
