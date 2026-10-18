#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_DD03352C45497223_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12CEA180)
#define CLASS_2_DD03352C45497223_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12CEA2A0)
#define CLASS_2_DD03352C45497223__CTOR_OFFSET UNITYSDK_OFFSET(0x12CEA2E0)
#define CLASS_2_DD03352C45497223__ONBIND_OFFSET UNITYSDK_OFFSET(0x12CEA140)

inline static constexpr unsigned int Class_2_DD03352C45497223_TypeDefinitionIndex = 71512;

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
