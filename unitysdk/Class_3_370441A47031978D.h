#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LightningStrikeAreaMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_370441A47031978D_METHOD_3_14756EFE7C5E4FA5_OFFSET UNITYSDK_OFFSET(0x1D2C32B0)
#define CLASS_3_370441A47031978D_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x1D2C3270)
#define CLASS_3_370441A47031978D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C32A0)

inline static constexpr unsigned int Class_3_370441A47031978D_TypeDefinitionIndex = 21079;

class Class_3_370441A47031978D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* EGMDGDCHCOI; // 0x18
	::RPG::GameCore::LightningStrikeAreaMode ADPFGNLIDLP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_370441A47031978D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_370441A47031978D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_370441A47031978D*&))((::PBYTE)hIl2Cpp + CLASS_3_370441A47031978D_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14756EFE7C5E4FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_370441A47031978D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_370441A47031978D*))((::PBYTE)hIl2Cpp + CLASS_3_370441A47031978D_METHOD_3_14756EFE7C5E4FA5_OFFSET))(a1, a2);
	}
};
