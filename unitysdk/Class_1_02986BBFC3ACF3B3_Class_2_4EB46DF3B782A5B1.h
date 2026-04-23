#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_02986BBFC3ACF3B3_Class_1_99D0DB214C2E5CC2.h"

class Class_1_7A6E49020D23C900;
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_4EB46DF3B782A5B1_METHOD_2_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0x128691C0)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_4EB46DF3B782A5B1_METHOD_2_E27CA151C4C4CCFC_OFFSET UNITYSDK_OFFSET(0x12869230)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_4EB46DF3B782A5B1__CTOR_OFFSET UNITYSDK_OFFSET(0x12868730)

inline static constexpr unsigned int Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1_TypeDefinitionIndex = 56012;

class Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1 : public ::Class_1_02986BBFC3ACF3B3_Class_1_99D0DB214C2E5CC2
{
public:
	::System::Int32 Field_2_0; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::Class_1_7A6E49020D23C900* a4, ::RPG::GameCore::GameWorld* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::Class_1_7A6E49020D23C900*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_4EB46DF3B782A5B1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_4EB46DF3B782A5B1_METHOD_2_BBE2D28D8A6AFB06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E27CA151C4C4CCFC(::System::String* P0, ::System::String* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_4EB46DF3B782A5B1_METHOD_2_E27CA151C4C4CCFC_OFFSET))(this, P0, P1);
	}
};
