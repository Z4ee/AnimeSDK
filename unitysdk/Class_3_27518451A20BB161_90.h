#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_24193089A4D2255F;
class Class_3_79C8B48AB14007D1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_90_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1416F9F0)
#define CLASS_3_27518451A20BB161_90_METHOD_3_7A0D1E81F11B2620_OFFSET UNITYSDK_OFFSET(0x1416FE40)
#define CLASS_3_27518451A20BB161_90_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1416FA30)
#define CLASS_3_27518451A20BB161_90__CTOR_OFFSET UNITYSDK_OFFSET(0x1416F9C0)
#define CLASS_3_27518451A20BB161_90___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1416FF10)

inline static constexpr unsigned int Class_3_27518451A20BB161_90_TypeDefinitionIndex = 50344;

class Class_3_27518451A20BB161_90 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_79C8B48AB14007D1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_79C8B48AB14007D1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_79C8B48AB14007D1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_90__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_90_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_90_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_7A0D1E81F11B2620(::Class_2_24193089A4D2255F* a1)
	{
		return ((::System::Void(*)(::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_90_METHOD_3_7A0D1E81F11B2620_OFFSET))(a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_90___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
