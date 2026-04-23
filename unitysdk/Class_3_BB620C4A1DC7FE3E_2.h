#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_BB620C4A1DC7FE3E_2_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x18426260)
#define CLASS_3_BB620C4A1DC7FE3E_2_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x184262E0)
#define CLASS_3_BB620C4A1DC7FE3E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x184262B0)

inline static constexpr unsigned int Class_3_BB620C4A1DC7FE3E_2_TypeDefinitionIndex = 22111;

class Class_3_BB620C4A1DC7FE3E_2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB620C4A1DC7FE3E_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BB620C4A1DC7FE3E_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BB620C4A1DC7FE3E_2*&))((::PBYTE)hIl2Cpp + CLASS_3_BB620C4A1DC7FE3E_2_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BB620C4A1DC7FE3E_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BB620C4A1DC7FE3E_2*))((::PBYTE)hIl2Cpp + CLASS_3_BB620C4A1DC7FE3E_2_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
