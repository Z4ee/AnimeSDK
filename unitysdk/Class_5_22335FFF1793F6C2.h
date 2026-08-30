#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueByPreCalcHPDamage.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_5_22335FFF1793F6C2_METHOD_5_3FE1ADBFEEE7C636_OFFSET UNITYSDK_OFFSET(0x1C91C940)
#define CLASS_5_22335FFF1793F6C2_METHOD_5_A2F8DE07E9D5EF94_OFFSET UNITYSDK_OFFSET(0x1C91C8F0)
#define CLASS_5_22335FFF1793F6C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C91C930)

inline static constexpr unsigned int Class_5_22335FFF1793F6C2_TypeDefinitionIndex = 19683;

class Class_5_22335FFF1793F6C2 : public ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_22335FFF1793F6C2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_5_A2F8DE07E9D5EF94(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_5_22335FFF1793F6C2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_5_22335FFF1793F6C2*&))((::PBYTE)hIl2Cpp + CLASS_5_22335FFF1793F6C2_METHOD_5_A2F8DE07E9D5EF94_OFFSET))(a1, a2);
	}

	static ::System::Void Method_5_3FE1ADBFEEE7C636(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_5_22335FFF1793F6C2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_5_22335FFF1793F6C2*))((::PBYTE)hIl2Cpp + CLASS_5_22335FFF1793F6C2_METHOD_5_3FE1ADBFEEE7C636_OFFSET))(a1, a2);
	}
};
