#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E898837D368D3F7A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_147_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13825170)
#define CLASS_3_27518451A20BB161_147_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x138251B0)
#define CLASS_3_27518451A20BB161_147__CTOR_OFFSET UNITYSDK_OFFSET(0x13825140)
#define CLASS_3_27518451A20BB161_147___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13825490)

inline static constexpr unsigned int Class_3_27518451A20BB161_147_TypeDefinitionIndex = 51833;

class Class_3_27518451A20BB161_147 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E898837D368D3F7A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E898837D368D3F7A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E898837D368D3F7A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
