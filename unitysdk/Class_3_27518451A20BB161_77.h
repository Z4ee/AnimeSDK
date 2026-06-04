#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB896EF8435160DD_8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_77_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5D4900)
#define CLASS_3_27518451A20BB161_77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5D4940)
#define CLASS_3_27518451A20BB161_77__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D48D0)
#define CLASS_3_27518451A20BB161_77___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5D4A20)

inline static constexpr unsigned int Class_3_27518451A20BB161_77_TypeDefinitionIndex = 50283;

class Class_3_27518451A20BB161_77 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB896EF8435160DD_8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD_8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD_8*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_77_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_77_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_77___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
