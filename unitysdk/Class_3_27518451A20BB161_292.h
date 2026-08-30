#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BBD058BB94436C40_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_292_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8DA240)
#define CLASS_3_27518451A20BB161_292__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DA210)

inline static constexpr unsigned int Class_3_27518451A20BB161_292_TypeDefinitionIndex = 58750;

class Class_3_27518451A20BB161_292 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BBD058BB94436C40_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BBD058BB94436C40_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BBD058BB94436C40_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_292__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_292_ONTASKBEGIN_OFFSET))(this);
	}
};
