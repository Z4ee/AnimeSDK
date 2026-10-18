#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B2ACAD40141B0AA8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_52_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8B74F0)
#define CLASS_3_27518451A20BB161_52__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B74C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_52_TypeDefinitionIndex = 52846;

class Class_3_27518451A20BB161_52 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B2ACAD40141B0AA8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B2ACAD40141B0AA8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B2ACAD40141B0AA8*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52_ONTASKBEGIN_OFFSET))(this);
	}
};
