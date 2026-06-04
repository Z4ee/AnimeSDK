#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_728535E13DFDCE0D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_130_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFD2240)
#define CLASS_3_27518451A20BB161_130_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFD2280)
#define CLASS_3_27518451A20BB161_130__CTOR_OFFSET UNITYSDK_OFFSET(0xAFD2210)
#define CLASS_3_27518451A20BB161_130___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFD2440)

inline static constexpr unsigned int Class_3_27518451A20BB161_130_TypeDefinitionIndex = 51558;

class Class_3_27518451A20BB161_130 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_728535E13DFDCE0D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_728535E13DFDCE0D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_728535E13DFDCE0D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_130__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_130_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_130_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_130___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
