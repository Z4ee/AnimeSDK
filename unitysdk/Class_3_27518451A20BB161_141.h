#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5E73A661290B6BAB;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_141_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1242BC60)
#define CLASS_3_27518451A20BB161_141_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1242BCA0)
#define CLASS_3_27518451A20BB161_141__CTOR_OFFSET UNITYSDK_OFFSET(0x1242BC30)
#define CLASS_3_27518451A20BB161_141___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1242BF00)

inline static constexpr unsigned int Class_3_27518451A20BB161_141_TypeDefinitionIndex = 51173;

class Class_3_27518451A20BB161_141 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5E73A661290B6BAB*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5E73A661290B6BAB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5E73A661290B6BAB*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_141__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_141_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_141_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_141___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
