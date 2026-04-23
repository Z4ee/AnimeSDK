#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_187D13ABF1892A5D_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_52_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11799530)
#define CLASS_3_27518451A20BB161_52__CTOR_OFFSET UNITYSDK_OFFSET(0x11799500)

inline static constexpr unsigned int Class_3_27518451A20BB161_52_TypeDefinitionIndex = 48843;

class Class_3_27518451A20BB161_52 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_187D13ABF1892A5D_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_187D13ABF1892A5D_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_187D13ABF1892A5D_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52_ONTASKBEGIN_OFFSET))(this);
	}
};
