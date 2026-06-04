#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_12;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_182_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA44E300)
#define CLASS_3_27518451A20BB161_182__CTOR_OFFSET UNITYSDK_OFFSET(0xA44E2D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_182_TypeDefinitionIndex = 54086;

class Class_3_27518451A20BB161_182 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_12*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_12* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_12*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_182__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_182_ONTASKBEGIN_OFFSET))(this);
	}
};
