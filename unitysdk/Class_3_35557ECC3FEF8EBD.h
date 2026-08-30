#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityStatisticsType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_35557ECC3FEF8EBD_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1C958A80)
#define CLASS_3_35557ECC3FEF8EBD_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1C958AC0)
#define CLASS_3_35557ECC3FEF8EBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C958AB0)

inline static constexpr unsigned int Class_3_35557ECC3FEF8EBD_TypeDefinitionIndex = 22978;

class Class_3_35557ECC3FEF8EBD : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x18
	::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x20
	::RPG::GameCore::ActivityStatisticsType NOCCJLJPLKJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35557ECC3FEF8EBD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_35557ECC3FEF8EBD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_35557ECC3FEF8EBD*&))((::PBYTE)hIl2Cpp + CLASS_3_35557ECC3FEF8EBD_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_35557ECC3FEF8EBD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_35557ECC3FEF8EBD*))((::PBYTE)hIl2Cpp + CLASS_3_35557ECC3FEF8EBD_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
