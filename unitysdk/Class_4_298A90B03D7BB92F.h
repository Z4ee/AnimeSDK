#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_4_298A90B03D7BB92F_METHOD_4_02FDD26BEE186CA3_OFFSET UNITYSDK_OFFSET(0x190ED780)
#define CLASS_4_298A90B03D7BB92F_METHOD_4_5C65AE94D5D93795_OFFSET UNITYSDK_OFFSET(0x190ED6A0)
#define CLASS_4_298A90B03D7BB92F__CTOR_OFFSET UNITYSDK_OFFSET(0x190ED720)

inline static constexpr unsigned int Class_4_298A90B03D7BB92F_TypeDefinitionIndex = 9874;

class Class_4_298A90B03D7BB92F : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_4_0; // 0x20
	::RPG::GameCore::DynamicFloat* Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_298A90B03D7BB92F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_5C65AE94D5D93795(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_298A90B03D7BB92F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_298A90B03D7BB92F*&))((::PBYTE)hIl2Cpp + CLASS_4_298A90B03D7BB92F_METHOD_4_5C65AE94D5D93795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_02FDD26BEE186CA3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_298A90B03D7BB92F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_298A90B03D7BB92F*))((::PBYTE)hIl2Cpp + CLASS_4_298A90B03D7BB92F_METHOD_4_02FDD26BEE186CA3_OFFSET))(a1, a2);
	}
};
