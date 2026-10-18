#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_ACF5011F372CEA1C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_266_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157234D0)
#define CLASS_3_27518451A20BB161_266__CTOR_OFFSET UNITYSDK_OFFSET(0x157234A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_266_TypeDefinitionIndex = 55694;

class Class_3_27518451A20BB161_266 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_ACF5011F372CEA1C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_ACF5011F372CEA1C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_ACF5011F372CEA1C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_266__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_266_ONTASKBEGIN_OFFSET))(this);
	}
};
