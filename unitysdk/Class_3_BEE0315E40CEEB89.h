#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_BEE0315E40CEEB89_METHOD_3_07947D5C71D40FC8_OFFSET UNITYSDK_OFFSET(0x1D6033F0)
#define CLASS_3_BEE0315E40CEEB89_METHOD_3_BFEE9074BE72CF8D_OFFSET UNITYSDK_OFFSET(0x1D6033B0)
#define CLASS_3_BEE0315E40CEEB89__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6033E0)

inline static constexpr unsigned int Class_3_BEE0315E40CEEB89_TypeDefinitionIndex = 23018;

class Class_3_BEE0315E40CEEB89 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean IBOHLAIEOLJ; // 0x18
	::System::Boolean LJDLDJHAFAI; // 0x19
	::System::Boolean NMMJBGFDNAI; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEE0315E40CEEB89__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BFEE9074BE72CF8D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BEE0315E40CEEB89*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BEE0315E40CEEB89*&))((::PBYTE)hIl2Cpp + CLASS_3_BEE0315E40CEEB89_METHOD_3_BFEE9074BE72CF8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_07947D5C71D40FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BEE0315E40CEEB89* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BEE0315E40CEEB89*))((::PBYTE)hIl2Cpp + CLASS_3_BEE0315E40CEEB89_METHOD_3_07947D5C71D40FC8_OFFSET))(a1, a2);
	}
};
