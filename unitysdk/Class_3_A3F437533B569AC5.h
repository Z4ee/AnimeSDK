#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_A3F437533B569AC5_METHOD_3_1AB393A627D53235_OFFSET UNITYSDK_OFFSET(0x1CC3E860)
#define CLASS_3_A3F437533B569AC5_METHOD_3_2D7F1F3EE65089A0_OFFSET UNITYSDK_OFFSET(0x1CC3E820)
#define CLASS_3_A3F437533B569AC5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3E850)

inline static constexpr unsigned int Class_3_A3F437533B569AC5_TypeDefinitionIndex = 10299;

class Class_3_A3F437533B569AC5 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 ICJFBLNANEP; // 0x18
	::RPG::GameCore::FixPoint IEHPFADHJFD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3F437533B569AC5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D7F1F3EE65089A0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A3F437533B569AC5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A3F437533B569AC5*&))((::PBYTE)hIl2Cpp + CLASS_3_A3F437533B569AC5_METHOD_3_2D7F1F3EE65089A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AB393A627D53235(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A3F437533B569AC5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A3F437533B569AC5*))((::PBYTE)hIl2Cpp + CLASS_3_A3F437533B569AC5_METHOD_3_1AB393A627D53235_OFFSET))(a1, a2);
	}
};
