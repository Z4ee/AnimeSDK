#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1FCBC74BD89E81C9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_97_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123DCB00)
#define CLASS_3_27518451A20BB161_97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x123DCB40)
#define CLASS_3_27518451A20BB161_97__CTOR_OFFSET UNITYSDK_OFFSET(0x123DCAD0)
#define CLASS_3_27518451A20BB161_97___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123DCD60)

inline static constexpr unsigned int Class_3_27518451A20BB161_97_TypeDefinitionIndex = 49722;

class Class_3_27518451A20BB161_97 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1FCBC74BD89E81C9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1FCBC74BD89E81C9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1FCBC74BD89E81C9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_97_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_97_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_97___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
