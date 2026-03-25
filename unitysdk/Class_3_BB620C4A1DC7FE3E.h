#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_BB620C4A1DC7FE3E_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x16C0E940)
#define CLASS_3_BB620C4A1DC7FE3E_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x16C0E9C0)
#define CLASS_3_BB620C4A1DC7FE3E__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0E990)

inline static constexpr unsigned int Class_3_BB620C4A1DC7FE3E_TypeDefinitionIndex = 21394;

class Class_3_BB620C4A1DC7FE3E : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB620C4A1DC7FE3E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BB620C4A1DC7FE3E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BB620C4A1DC7FE3E*&))((::PBYTE)hIl2Cpp + CLASS_3_BB620C4A1DC7FE3E_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BB620C4A1DC7FE3E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BB620C4A1DC7FE3E*))((::PBYTE)hIl2Cpp + CLASS_3_BB620C4A1DC7FE3E_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
