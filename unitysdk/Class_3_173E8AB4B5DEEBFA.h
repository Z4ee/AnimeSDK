#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBtnType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_173E8AB4B5DEEBFA_METHOD_3_1AB393A627D53235_OFFSET UNITYSDK_OFFSET(0x1CE660D0)
#define CLASS_3_173E8AB4B5DEEBFA_METHOD_3_2D7F1F3EE65089A0_OFFSET UNITYSDK_OFFSET(0x1CE66080)
#define CLASS_3_173E8AB4B5DEEBFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE660C0)

inline static constexpr unsigned int Class_3_173E8AB4B5DEEBFA_TypeDefinitionIndex = 21489;

class Class_3_173E8AB4B5DEEBFA : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean MOKNCFJICIC; // 0x18
	::RPG::GameCore::FiveDimBtnType MBOBPDOAGLL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_173E8AB4B5DEEBFA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D7F1F3EE65089A0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_173E8AB4B5DEEBFA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_173E8AB4B5DEEBFA*&))((::PBYTE)hIl2Cpp + CLASS_3_173E8AB4B5DEEBFA_METHOD_3_2D7F1F3EE65089A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AB393A627D53235(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_173E8AB4B5DEEBFA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_173E8AB4B5DEEBFA*))((::PBYTE)hIl2Cpp + CLASS_3_173E8AB4B5DEEBFA_METHOD_3_1AB393A627D53235_OFFSET))(a1, a2);
	}
};
