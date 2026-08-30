#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_7BA01DB1D8CEE96E_1_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1CCFC310)
#define CLASS_3_7BA01DB1D8CEE96E_1_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1CCFC360)
#define CLASS_3_7BA01DB1D8CEE96E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFC350)

inline static constexpr unsigned int Class_3_7BA01DB1D8CEE96E_1_TypeDefinitionIndex = 22369;

class Class_3_7BA01DB1D8CEE96E_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean AOMAPCAKIOM; // 0x18
	::System::Boolean AJKDAOHKOJI; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BA01DB1D8CEE96E_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7BA01DB1D8CEE96E_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7BA01DB1D8CEE96E_1*&))((::PBYTE)hIl2Cpp + CLASS_3_7BA01DB1D8CEE96E_1_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7BA01DB1D8CEE96E_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7BA01DB1D8CEE96E_1*))((::PBYTE)hIl2Cpp + CLASS_3_7BA01DB1D8CEE96E_1_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
