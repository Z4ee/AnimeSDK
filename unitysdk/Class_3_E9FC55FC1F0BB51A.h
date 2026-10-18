#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialB51RacingGameButtonType.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_E9FC55FC1F0BB51A_METHOD_3_1AB393A627D53235_OFFSET UNITYSDK_OFFSET(0x1CC89F40)
#define CLASS_3_E9FC55FC1F0BB51A_METHOD_3_2D7F1F3EE65089A0_OFFSET UNITYSDK_OFFSET(0x1CC89EF0)
#define CLASS_3_E9FC55FC1F0BB51A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC89F30)

inline static constexpr unsigned int Class_3_E9FC55FC1F0BB51A_TypeDefinitionIndex = 24388;

class Class_3_E9FC55FC1F0BB51A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TutorialB51RacingGameButtonType PGOHOFMMIAJ; // 0x18
	::System::Boolean AODGNFHAPBL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9FC55FC1F0BB51A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D7F1F3EE65089A0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E9FC55FC1F0BB51A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E9FC55FC1F0BB51A*&))((::PBYTE)hIl2Cpp + CLASS_3_E9FC55FC1F0BB51A_METHOD_3_2D7F1F3EE65089A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AB393A627D53235(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E9FC55FC1F0BB51A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E9FC55FC1F0BB51A*))((::PBYTE)hIl2Cpp + CLASS_3_E9FC55FC1F0BB51A_METHOD_3_1AB393A627D53235_OFFSET))(a1, a2);
	}
};
