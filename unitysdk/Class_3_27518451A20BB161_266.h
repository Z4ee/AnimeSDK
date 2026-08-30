#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3BB949405A89ECB2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_266_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9CD770)
#define CLASS_3_27518451A20BB161_266__CTOR_OFFSET UNITYSDK_OFFSET(0xB9CD740)

inline static constexpr unsigned int Class_3_27518451A20BB161_266_TypeDefinitionIndex = 56580;

class Class_3_27518451A20BB161_266 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3BB949405A89ECB2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3BB949405A89ECB2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3BB949405A89ECB2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_266__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_266_ONTASKBEGIN_OFFSET))(this);
	}
};
