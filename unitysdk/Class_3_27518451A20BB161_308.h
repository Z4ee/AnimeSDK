#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0CEEB60CAAF6239D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_308_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9CE2A0)
#define CLASS_3_27518451A20BB161_308__CTOR_OFFSET UNITYSDK_OFFSET(0xB9CE270)

inline static constexpr unsigned int Class_3_27518451A20BB161_308_TypeDefinitionIndex = 58535;

class Class_3_27518451A20BB161_308 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0CEEB60CAAF6239D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0CEEB60CAAF6239D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0CEEB60CAAF6239D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_308__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_308_ONTASKBEGIN_OFFSET))(this);
	}
};
