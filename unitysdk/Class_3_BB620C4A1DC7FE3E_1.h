#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_BB620C4A1DC7FE3E_1_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x1B4F7BB0)
#define CLASS_3_BB620C4A1DC7FE3E_1_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1B4F7C50)
#define CLASS_3_BB620C4A1DC7FE3E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F7C10)

inline static constexpr unsigned int Class_3_BB620C4A1DC7FE3E_1_TypeDefinitionIndex = 22940;

class Class_3_BB620C4A1DC7FE3E_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::DynamicFloat* HNLLIOJDOEL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB620C4A1DC7FE3E_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BB620C4A1DC7FE3E_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BB620C4A1DC7FE3E_1*&))((::PBYTE)hIl2Cpp + CLASS_3_BB620C4A1DC7FE3E_1_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BB620C4A1DC7FE3E_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BB620C4A1DC7FE3E_1*))((::PBYTE)hIl2Cpp + CLASS_3_BB620C4A1DC7FE3E_1_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
