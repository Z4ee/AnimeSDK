#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB896EF8435160DD_6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_73_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E3E9D0)
#define CLASS_3_27518451A20BB161_73_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9E3EA10)
#define CLASS_3_27518451A20BB161_73__CTOR_OFFSET UNITYSDK_OFFSET(0x9E3E9A0)
#define CLASS_3_27518451A20BB161_73___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E3EAB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_73_TypeDefinitionIndex = 49614;

class Class_3_27518451A20BB161_73 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB896EF8435160DD_6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD_6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_73_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_73_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_73___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
