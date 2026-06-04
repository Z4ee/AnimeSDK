#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5E73A661290B6BAB;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_150_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C88A60)
#define CLASS_3_27518451A20BB161_150_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C88AA0)
#define CLASS_3_27518451A20BB161_150__CTOR_OFFSET UNITYSDK_OFFSET(0x10C88A30)
#define CLASS_3_27518451A20BB161_150___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C88CF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_150_TypeDefinitionIndex = 51843;

class Class_3_27518451A20BB161_150 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5E73A661290B6BAB*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5E73A661290B6BAB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5E73A661290B6BAB*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_150__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_150_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_150_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_150___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
