#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CBA1E7FD4C82B228;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_98_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC94B570)
#define CLASS_3_27518451A20BB161_98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC94B5B0)
#define CLASS_3_27518451A20BB161_98__CTOR_OFFSET UNITYSDK_OFFSET(0xC94B540)
#define CLASS_3_27518451A20BB161_98___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC94B950)

inline static constexpr unsigned int Class_3_27518451A20BB161_98_TypeDefinitionIndex = 50378;

class Class_3_27518451A20BB161_98 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CBA1E7FD4C82B228*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CBA1E7FD4C82B228* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CBA1E7FD4C82B228*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_98_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_98_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_98___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
