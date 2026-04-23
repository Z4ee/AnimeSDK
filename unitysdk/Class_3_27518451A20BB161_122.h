#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4E32A1079BDDB8E7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_122_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C06A50)
#define CLASS_3_27518451A20BB161_122_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C06A90)
#define CLASS_3_27518451A20BB161_122__CTOR_OFFSET UNITYSDK_OFFSET(0x11C06A20)
#define CLASS_3_27518451A20BB161_122___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C06C80)

inline static constexpr unsigned int Class_3_27518451A20BB161_122_TypeDefinitionIndex = 50888;

class Class_3_27518451A20BB161_122 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4E32A1079BDDB8E7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4E32A1079BDDB8E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4E32A1079BDDB8E7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_122__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_122_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_122_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_122___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
