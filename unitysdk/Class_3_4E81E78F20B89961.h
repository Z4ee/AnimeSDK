#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_8ABC5591C65C45D3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4E81E78F20B89961_METHOD_3_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x143E5300)
#define CLASS_3_4E81E78F20B89961_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143E51B0)
#define CLASS_3_4E81E78F20B89961__CTOR_OFFSET UNITYSDK_OFFSET(0x143E5130)
#define CLASS_3_4E81E78F20B89961__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x143E5530)
#define CLASS_3_4E81E78F20B89961___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143E5540)

inline static constexpr unsigned int Class_3_4E81E78F20B89961_TypeDefinitionIndex = 49950;

class Class_3_4E81E78F20B89961 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_8ABC5591C65C45D3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_8ABC5591C65C45D3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_8ABC5591C65C45D3*))((::PBYTE)hIl2Cpp + CLASS_3_4E81E78F20B89961__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E81E78F20B89961_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E81E78F20B89961_METHOD_3_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E81E78F20B89961__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E81E78F20B89961___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
