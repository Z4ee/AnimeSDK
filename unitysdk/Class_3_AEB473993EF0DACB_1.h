#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_AEB473993EF0DACB_1_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1B402E10)
#define CLASS_3_AEB473993EF0DACB_1_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1B402DD0)
#define CLASS_3_AEB473993EF0DACB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B402E00)

inline static constexpr unsigned int Class_3_AEB473993EF0DACB_1_TypeDefinitionIndex = 22035;

class Class_3_AEB473993EF0DACB_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEB473993EF0DACB_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AEB473993EF0DACB_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AEB473993EF0DACB_1*&))((::PBYTE)hIl2Cpp + CLASS_3_AEB473993EF0DACB_1_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AEB473993EF0DACB_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AEB473993EF0DACB_1*))((::PBYTE)hIl2Cpp + CLASS_3_AEB473993EF0DACB_1_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
