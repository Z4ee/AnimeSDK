#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6E947ADB30888E8D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_307_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF65200)
#define CLASS_3_27518451A20BB161_307__CTOR_OFFSET UNITYSDK_OFFSET(0xCF651D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_307_TypeDefinitionIndex = 58437;

class Class_3_27518451A20BB161_307 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6E947ADB30888E8D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6E947ADB30888E8D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6E947ADB30888E8D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_307__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_307_ONTASKBEGIN_OFFSET))(this);
	}
};
