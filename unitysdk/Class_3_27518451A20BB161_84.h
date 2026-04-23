#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_EF0CC8872D998AD5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_84_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9059B80)
#define CLASS_3_27518451A20BB161_84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9059BC0)
#define CLASS_3_27518451A20BB161_84__CTOR_OFFSET UNITYSDK_OFFSET(0x9059B50)
#define CLASS_3_27518451A20BB161_84___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9059C60)

inline static constexpr unsigned int Class_3_27518451A20BB161_84_TypeDefinitionIndex = 49657;

class Class_3_27518451A20BB161_84 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_EF0CC8872D998AD5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EF0CC8872D998AD5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EF0CC8872D998AD5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_84_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_84_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_84___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
