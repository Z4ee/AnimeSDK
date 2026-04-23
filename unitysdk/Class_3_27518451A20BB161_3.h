#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D97525674BFD9AB4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB49D340)
#define CLASS_3_27518451A20BB161_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB49D1B0)
#define CLASS_3_27518451A20BB161_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB49D180)
#define CLASS_3_27518451A20BB161_3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB49D400)

inline static constexpr unsigned int Class_3_27518451A20BB161_3_TypeDefinitionIndex = 48587;

class Class_3_27518451A20BB161_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D97525674BFD9AB4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D97525674BFD9AB4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D97525674BFD9AB4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_3_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_3___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
