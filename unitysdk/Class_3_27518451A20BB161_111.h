#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F2238C1CD159CABC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_111_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14273DB0)
#define CLASS_3_27518451A20BB161_111__CTOR_OFFSET UNITYSDK_OFFSET(0x14273D80)

inline static constexpr unsigned int Class_3_27518451A20BB161_111_TypeDefinitionIndex = 51248;

class Class_3_27518451A20BB161_111 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F2238C1CD159CABC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F2238C1CD159CABC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F2238C1CD159CABC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_111_ONTASKBEGIN_OFFSET))(this);
	}
};
