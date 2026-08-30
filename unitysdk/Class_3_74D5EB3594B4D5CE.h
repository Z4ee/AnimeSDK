#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersAIParamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_74D5EB3594B4D5CE_METHOD_3_14756EFE7C5E4FA5_OFFSET UNITYSDK_OFFSET(0x1D0DFBB0)
#define CLASS_3_74D5EB3594B4D5CE_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x1D0DFB70)
#define CLASS_3_74D5EB3594B4D5CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DFBA0)

inline static constexpr unsigned int Class_3_74D5EB3594B4D5CE_TypeDefinitionIndex = 21318;

class Class_3_74D5EB3594B4D5CE : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::Int32>* PBLPLDJKPEI; // 0x18
	::RPG::GameCore::TeamTowersAIParamType JBPNBECLGKN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74D5EB3594B4D5CE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_74D5EB3594B4D5CE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_74D5EB3594B4D5CE*&))((::PBYTE)hIl2Cpp + CLASS_3_74D5EB3594B4D5CE_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14756EFE7C5E4FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_74D5EB3594B4D5CE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_74D5EB3594B4D5CE*))((::PBYTE)hIl2Cpp + CLASS_3_74D5EB3594B4D5CE_METHOD_3_14756EFE7C5E4FA5_OFFSET))(a1, a2);
	}
};
