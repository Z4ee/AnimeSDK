#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_21_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11AA1A10)
#define CLASS_3_27518451A20BB161_21__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA19E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_21_TypeDefinitionIndex = 48740;

class Class_3_27518451A20BB161_21 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_21_ONTASKBEGIN_OFFSET))(this);
	}
};
