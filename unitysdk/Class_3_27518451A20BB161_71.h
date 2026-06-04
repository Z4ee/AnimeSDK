#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CABF4B56ACBD9AF6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_71_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1435B860)
#define CLASS_3_27518451A20BB161_71__CTOR_OFFSET UNITYSDK_OFFSET(0x1435B830)

inline static constexpr unsigned int Class_3_27518451A20BB161_71_TypeDefinitionIndex = 50272;

class Class_3_27518451A20BB161_71 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CABF4B56ACBD9AF6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CABF4B56ACBD9AF6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CABF4B56ACBD9AF6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_71_ONTASKBEGIN_OFFSET))(this);
	}
};
