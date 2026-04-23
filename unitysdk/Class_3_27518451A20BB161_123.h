#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_728535E13DFDCE0D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_123_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3B96D0)
#define CLASS_3_27518451A20BB161_123_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD3B9710)
#define CLASS_3_27518451A20BB161_123__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B96A0)
#define CLASS_3_27518451A20BB161_123___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3B98D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_123_TypeDefinitionIndex = 50889;

class Class_3_27518451A20BB161_123 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_728535E13DFDCE0D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_728535E13DFDCE0D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_728535E13DFDCE0D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_123__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_123_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_123_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_123___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
