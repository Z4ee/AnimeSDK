#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3CF0113811BA1DD4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_16_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8F8DE90)
#define CLASS_3_27518451A20BB161_16__CTOR_OFFSET UNITYSDK_OFFSET(0x8F8DE60)

inline static constexpr unsigned int Class_3_27518451A20BB161_16_TypeDefinitionIndex = 48734;

class Class_3_27518451A20BB161_16 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3CF0113811BA1DD4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3CF0113811BA1DD4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3CF0113811BA1DD4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_16_ONTASKBEGIN_OFFSET))(this);
	}
};
