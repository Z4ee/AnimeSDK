#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_401EFD0D9B10F234;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_88_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD36C8B0)
#define CLASS_3_27518451A20BB161_88_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD36C8F0)
#define CLASS_3_27518451A20BB161_88__CTOR_OFFSET UNITYSDK_OFFSET(0xD36C880)
#define CLASS_3_27518451A20BB161_88___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD36C9E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_88_TypeDefinitionIndex = 49679;

class Class_3_27518451A20BB161_88 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_401EFD0D9B10F234*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_401EFD0D9B10F234* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_401EFD0D9B10F234*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_88__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_88_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_88_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_88___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
