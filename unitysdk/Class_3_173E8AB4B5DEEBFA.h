#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBtnType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_173E8AB4B5DEEBFA_METHOD_3_1AB393A627D53235_OFFSET UNITYSDK_OFFSET(0x19ECCB90)
#define CLASS_3_173E8AB4B5DEEBFA_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x19ECCB10)
#define CLASS_3_173E8AB4B5DEEBFA__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECCB60)

inline static constexpr unsigned int Class_3_173E8AB4B5DEEBFA_TypeDefinitionIndex = 20295;

class Class_3_173E8AB4B5DEEBFA : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean Field_3_0; // 0x18
	::RPG::GameCore::FiveDimBtnType Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_173E8AB4B5DEEBFA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_173E8AB4B5DEEBFA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_173E8AB4B5DEEBFA*&))((::PBYTE)hIl2Cpp + CLASS_3_173E8AB4B5DEEBFA_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AB393A627D53235(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_173E8AB4B5DEEBFA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_173E8AB4B5DEEBFA*))((::PBYTE)hIl2Cpp + CLASS_3_173E8AB4B5DEEBFA_METHOD_3_1AB393A627D53235_OFFSET))(a1, a2);
	}
};
