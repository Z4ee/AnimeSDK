#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A71767B01C046081;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_70_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BCAAB0)
#define CLASS_3_27518451A20BB161_70_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BCAAF0)
#define CLASS_3_27518451A20BB161_70__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCAA80)
#define CLASS_3_27518451A20BB161_70___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BCAE60)

inline static constexpr unsigned int Class_3_27518451A20BB161_70_TypeDefinitionIndex = 50047;

class Class_3_27518451A20BB161_70 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A71767B01C046081*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A71767B01C046081* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A71767B01C046081*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_70__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_70_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_70_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_70___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
