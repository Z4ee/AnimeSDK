#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4E32A1079BDDB8E7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_129_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB72BA0)
#define CLASS_3_27518451A20BB161_129_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB72BE0)
#define CLASS_3_27518451A20BB161_129__CTOR_OFFSET UNITYSDK_OFFSET(0xAB72B70)
#define CLASS_3_27518451A20BB161_129___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB72DC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_129_TypeDefinitionIndex = 51557;

class Class_3_27518451A20BB161_129 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4E32A1079BDDB8E7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4E32A1079BDDB8E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4E32A1079BDDB8E7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_129__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_129_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_129_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_129___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
