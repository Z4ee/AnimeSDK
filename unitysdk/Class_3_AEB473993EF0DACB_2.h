#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_AEB473993EF0DACB_2_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1D6811E0)
#define CLASS_3_AEB473993EF0DACB_2_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1D6811A0)
#define CLASS_3_AEB473993EF0DACB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6811D0)

inline static constexpr unsigned int Class_3_AEB473993EF0DACB_2_TypeDefinitionIndex = 22899;

class Class_3_AEB473993EF0DACB_2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEB473993EF0DACB_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AEB473993EF0DACB_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AEB473993EF0DACB_2*&))((::PBYTE)hIl2Cpp + CLASS_3_AEB473993EF0DACB_2_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AEB473993EF0DACB_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AEB473993EF0DACB_2*))((::PBYTE)hIl2Cpp + CLASS_3_AEB473993EF0DACB_2_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
