#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C4B8A5C51D1C8FFE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_105_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14170930)
#define CLASS_3_27518451A20BB161_105__CTOR_OFFSET UNITYSDK_OFFSET(0x14170900)

inline static constexpr unsigned int Class_3_27518451A20BB161_105_TypeDefinitionIndex = 50617;

class Class_3_27518451A20BB161_105 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C4B8A5C51D1C8FFE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C4B8A5C51D1C8FFE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C4B8A5C51D1C8FFE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_105__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_105_ONTASKBEGIN_OFFSET))(this);
	}
};
