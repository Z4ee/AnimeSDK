#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_111F36CF5247BACE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_52_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105C0AA0)
#define CLASS_3_27518451A20BB161_52_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105C0AE0)
#define CLASS_3_27518451A20BB161_52_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105C0E40)
#define CLASS_3_27518451A20BB161_52__CTOR_OFFSET UNITYSDK_OFFSET(0x105C0A70)
#define CLASS_3_27518451A20BB161_52___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105C0E90)
#define CLASS_3_27518451A20BB161_52___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105C0ED0)

inline static constexpr unsigned int Class_3_27518451A20BB161_52_TypeDefinitionIndex = 43281;

class Class_3_27518451A20BB161_52 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_111F36CF5247BACE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_111F36CF5247BACE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_111F36CF5247BACE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
