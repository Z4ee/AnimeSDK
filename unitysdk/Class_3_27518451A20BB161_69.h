#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F56C73C9E3BB51F1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_69_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x129C82F0)
#define CLASS_3_27518451A20BB161_69__CTOR_OFFSET UNITYSDK_OFFSET(0x129C82C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_69_TypeDefinitionIndex = 49606;

class Class_3_27518451A20BB161_69 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F56C73C9E3BB51F1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F56C73C9E3BB51F1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F56C73C9E3BB51F1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69_ONTASKBEGIN_OFFSET))(this);
	}
};
