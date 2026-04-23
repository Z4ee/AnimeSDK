#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_24193089A4D2255F;
class Class_3_79C8B48AB14007D1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_87_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FA0810)
#define CLASS_3_27518451A20BB161_87_METHOD_3_734F347EA184E6F8_OFFSET UNITYSDK_OFFSET(0x8FA0C30)
#define CLASS_3_27518451A20BB161_87_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FA0850)
#define CLASS_3_27518451A20BB161_87__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA07E0)
#define CLASS_3_27518451A20BB161_87___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FA0D00)

inline static constexpr unsigned int Class_3_27518451A20BB161_87_TypeDefinitionIndex = 49677;

class Class_3_27518451A20BB161_87 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_79C8B48AB14007D1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_79C8B48AB14007D1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_79C8B48AB14007D1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_734F347EA184E6F8(::Class_2_24193089A4D2255F* a1)
	{
		return ((::System::Void(*)(::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87_METHOD_3_734F347EA184E6F8_OFFSET))(a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
