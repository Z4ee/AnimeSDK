#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0CEEB60CAAF6239D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_288_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B15C60)
#define CLASS_3_27518451A20BB161_288__CTOR_OFFSET UNITYSDK_OFFSET(0x16B15C30)

inline static constexpr unsigned int Class_3_27518451A20BB161_288_TypeDefinitionIndex = 58683;

class Class_3_27518451A20BB161_288 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0CEEB60CAAF6239D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0CEEB60CAAF6239D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0CEEB60CAAF6239D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_288__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_288_ONTASKBEGIN_OFFSET))(this);
	}
};
