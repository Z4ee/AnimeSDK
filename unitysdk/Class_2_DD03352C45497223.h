#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_DD03352C45497223_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x187061B0)
#define CLASS_2_DD03352C45497223_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x187062D0)
#define CLASS_2_DD03352C45497223__CTOR_OFFSET UNITYSDK_OFFSET(0x18706310)
#define CLASS_2_DD03352C45497223__ONBIND_OFFSET UNITYSDK_OFFSET(0x18706170)

inline static constexpr unsigned int Class_2_DD03352C45497223_TypeDefinitionIndex = 71469;

class Class_2_DD03352C45497223 : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD03352C45497223__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD03352C45497223__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD03352C45497223_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD03352C45497223_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
