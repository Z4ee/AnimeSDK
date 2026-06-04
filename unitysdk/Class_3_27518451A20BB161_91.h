#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0F021ECA96048DC9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_91_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7BEF40)
#define CLASS_3_27518451A20BB161_91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7BEF80)
#define CLASS_3_27518451A20BB161_91__CTOR_OFFSET UNITYSDK_OFFSET(0xA7BEF10)
#define CLASS_3_27518451A20BB161_91___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7BF070)

inline static constexpr unsigned int Class_3_27518451A20BB161_91_TypeDefinitionIndex = 50346;

class Class_3_27518451A20BB161_91 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0F021ECA96048DC9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0F021ECA96048DC9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0F021ECA96048DC9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_91_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_91_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_91___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
