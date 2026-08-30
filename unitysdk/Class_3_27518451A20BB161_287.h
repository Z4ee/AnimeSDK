#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6E947ADB30888E8D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_287_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16588740)
#define CLASS_3_27518451A20BB161_287__CTOR_OFFSET UNITYSDK_OFFSET(0x16588710)

inline static constexpr unsigned int Class_3_27518451A20BB161_287_TypeDefinitionIndex = 58586;

class Class_3_27518451A20BB161_287 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6E947ADB30888E8D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6E947ADB30888E8D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6E947ADB30888E8D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_287__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_287_ONTASKBEGIN_OFFSET))(this);
	}
};
