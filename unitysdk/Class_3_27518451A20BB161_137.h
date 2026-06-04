#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB896EF8435160DD_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_137_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5A5E50)
#define CLASS_3_27518451A20BB161_137_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5A5E90)
#define CLASS_3_27518451A20BB161_137__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A5E20)
#define CLASS_3_27518451A20BB161_137___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5A5FC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_137_TypeDefinitionIndex = 51607;

class Class_3_27518451A20BB161_137 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB896EF8435160DD_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_137___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
