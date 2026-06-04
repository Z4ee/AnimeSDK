#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_EF0CC8872D998AD5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_87_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C7B10)
#define CLASS_3_27518451A20BB161_87_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7C7B50)
#define CLASS_3_27518451A20BB161_87__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C7AE0)
#define CLASS_3_27518451A20BB161_87___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C7BF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_87_TypeDefinitionIndex = 50324;

class Class_3_27518451A20BB161_87 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_EF0CC8872D998AD5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EF0CC8872D998AD5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EF0CC8872D998AD5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
