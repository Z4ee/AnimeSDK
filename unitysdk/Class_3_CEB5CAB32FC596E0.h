#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"

class Class_4_500D8C902A33438D;
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_CEB5CAB32FC596E0_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFEF0050)
#define CLASS_3_CEB5CAB32FC596E0_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xFEF0250)
#define CLASS_3_CEB5CAB32FC596E0_METHOD_3_D297D6D1A5CA5D07_OFFSET UNITYSDK_OFFSET(0xFEF02F0)
#define CLASS_3_CEB5CAB32FC596E0__CTOR_OFFSET UNITYSDK_OFFSET(0xFEF01E0)

inline static constexpr unsigned int Class_3_CEB5CAB32FC596E0_TypeDefinitionIndex = 59710;

class Class_3_CEB5CAB32FC596E0 : public ::Class_2_5560EE9F1F33A604
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEB5CAB32FC596E0__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CEB5CAB32FC596E0_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CEB5CAB32FC596E0_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_D297D6D1A5CA5D07(::Class_4_500D8C902A33438D* a1, ::Class_4_500D8C902A33438D* a2)
	{
		return ((::System::Boolean(*)(::Class_4_500D8C902A33438D*, ::Class_4_500D8C902A33438D*))((::PBYTE)hIl2Cpp + CLASS_3_CEB5CAB32FC596E0_METHOD_3_D297D6D1A5CA5D07_OFFSET))(a1, a2);
	}
};
