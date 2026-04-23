#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_BEE0315E40CEEB89_METHOD_3_07947D5C71D40FC8_OFFSET UNITYSDK_OFFSET(0x183C5880)
#define CLASS_3_BEE0315E40CEEB89_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x183C5800)
#define CLASS_3_BEE0315E40CEEB89__CTOR_OFFSET UNITYSDK_OFFSET(0x183C5850)

inline static constexpr unsigned int Class_3_BEE0315E40CEEB89_TypeDefinitionIndex = 22257;

class Class_3_BEE0315E40CEEB89 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean Field_3_1; // 0x18
	::System::Boolean Field_3_2; // 0x19
	::System::Boolean Field_3_0; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEE0315E40CEEB89__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BEE0315E40CEEB89*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BEE0315E40CEEB89*&))((::PBYTE)hIl2Cpp + CLASS_3_BEE0315E40CEEB89_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_07947D5C71D40FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BEE0315E40CEEB89* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BEE0315E40CEEB89*))((::PBYTE)hIl2Cpp + CLASS_3_BEE0315E40CEEB89_METHOD_3_07947D5C71D40FC8_OFFSET))(a1, a2);
	}
};
