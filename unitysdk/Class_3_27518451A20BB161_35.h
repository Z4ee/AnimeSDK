#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CAEDBE7AE01F5331;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11BCEE80)
#define CLASS_3_27518451A20BB161_35__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCEE50)

inline static constexpr unsigned int Class_3_27518451A20BB161_35_TypeDefinitionIndex = 48759;

class Class_3_27518451A20BB161_35 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CAEDBE7AE01F5331*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CAEDBE7AE01F5331* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CAEDBE7AE01F5331*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_35_ONTASKBEGIN_OFFSET))(this);
	}
};
