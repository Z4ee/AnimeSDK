#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9B16484D3F1D4AA0_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_150_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA8EEF0)
#define CLASS_3_27518451A20BB161_150__CTOR_OFFSET UNITYSDK_OFFSET(0xAA8EEC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_150_TypeDefinitionIndex = 51275;

class Class_3_27518451A20BB161_150 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9B16484D3F1D4AA0_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9B16484D3F1D4AA0_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9B16484D3F1D4AA0_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_150__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_150_ONTASKBEGIN_OFFSET))(this);
	}
};
