#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2AABC972CCC0E84A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_100_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CA23D0)
#define CLASS_3_27518451A20BB161_100_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13CA2410)
#define CLASS_3_27518451A20BB161_100__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA23A0)
#define CLASS_3_27518451A20BB161_100___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CA2660)

inline static constexpr unsigned int Class_3_27518451A20BB161_100_TypeDefinitionIndex = 50389;

class Class_3_27518451A20BB161_100 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2AABC972CCC0E84A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2AABC972CCC0E84A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2AABC972CCC0E84A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_100__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_100_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_100_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_100___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
