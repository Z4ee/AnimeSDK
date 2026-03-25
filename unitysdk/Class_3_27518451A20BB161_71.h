#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB896EF8435160DD_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_71_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117CE2A0)
#define CLASS_3_27518451A20BB161_71_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117CE2E0)
#define CLASS_3_27518451A20BB161_71__CTOR_OFFSET UNITYSDK_OFFSET(0x117CE270)
#define CLASS_3_27518451A20BB161_71___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117CE440)

inline static constexpr unsigned int Class_3_27518451A20BB161_71_TypeDefinitionIndex = 44227;

class Class_3_27518451A20BB161_71 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB896EF8435160DD_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_71_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_71_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_71___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
