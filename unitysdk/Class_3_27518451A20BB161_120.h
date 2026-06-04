#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3EED698C7D00D221;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_120_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136F15D0)
#define CLASS_3_27518451A20BB161_120__CTOR_OFFSET UNITYSDK_OFFSET(0x136F15A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_120_TypeDefinitionIndex = 51355;

class Class_3_27518451A20BB161_120 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3EED698C7D00D221*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3EED698C7D00D221* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3EED698C7D00D221*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_120__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_120_ONTASKBEGIN_OFFSET))(this);
	}
};
