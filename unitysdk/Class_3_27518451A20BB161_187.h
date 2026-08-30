#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9A935D2641B31616;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_187_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16072B90)
#define CLASS_3_27518451A20BB161_187__CTOR_OFFSET UNITYSDK_OFFSET(0x16072B60)

inline static constexpr unsigned int Class_3_27518451A20BB161_187_TypeDefinitionIndex = 55258;

class Class_3_27518451A20BB161_187 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9A935D2641B31616*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9A935D2641B31616* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9A935D2641B31616*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_187__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_187_ONTASKBEGIN_OFFSET))(this);
	}
};
