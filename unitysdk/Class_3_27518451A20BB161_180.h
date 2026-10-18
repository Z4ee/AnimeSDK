#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2EBEEC62ABE325F1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_180_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4CF0D0)
#define CLASS_3_27518451A20BB161_180__CTOR_OFFSET UNITYSDK_OFFSET(0xB4CF0A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_180_TypeDefinitionIndex = 55016;

class Class_3_27518451A20BB161_180 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2EBEEC62ABE325F1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2EBEEC62ABE325F1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2EBEEC62ABE325F1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_180__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_180_ONTASKBEGIN_OFFSET))(this);
	}
};
