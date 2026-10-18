#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BBD058BB94436C40_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_312_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C1D650)
#define CLASS_3_27518451A20BB161_312__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1D620)

inline static constexpr unsigned int Class_3_27518451A20BB161_312_TypeDefinitionIndex = 58602;

class Class_3_27518451A20BB161_312 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BBD058BB94436C40_5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BBD058BB94436C40_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BBD058BB94436C40_5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_312__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_312_ONTASKBEGIN_OFFSET))(this);
	}
};
