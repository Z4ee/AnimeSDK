#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_02986BBFC3ACF3B3_Class_1_A3CFD8D34FBA5923.h"

class Class_1_7A6E49020D23C900;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_9C7E2E4EBAA29CE6_1_METHOD_2_AE14350DB5BBFC4D_OFFSET UNITYSDK_OFFSET(0x1A460560)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_9C7E2E4EBAA29CE6_1_METHOD_2_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0x1A461EB0)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_9C7E2E4EBAA29CE6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A460340)

inline static constexpr unsigned int Class_1_02986BBFC3ACF3B3_Class_2_9C7E2E4EBAA29CE6_1_TypeDefinitionIndex = 60846;

class Class_1_02986BBFC3ACF3B3_Class_2_9C7E2E4EBAA29CE6_1 : public ::Class_1_02986BBFC3ACF3B3_Class_1_A3CFD8D34FBA5923
{
public:
	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Class_1_7A6E49020D23C900* a3, ::RPG::GameCore::GameWorld* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_1_7A6E49020D23C900*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_9C7E2E4EBAA29CE6_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AE14350DB5BBFC4D(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_9C7E2E4EBAA29CE6_1_METHOD_2_AE14350DB5BBFC4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_9C7E2E4EBAA29CE6_1_METHOD_2_BBE2D28D8A6AFB06_OFFSET))(this, a1, a2);
	}
};
