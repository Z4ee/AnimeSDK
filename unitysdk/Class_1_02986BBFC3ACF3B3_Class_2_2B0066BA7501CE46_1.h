#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_02986BBFC3ACF3B3_Class_1_99D0DB214C2E5CC2.h"

class Class_1_7A6E49020D23C900;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_2B0066BA7501CE46_1_METHOD_2_2D3D92F9F1629798_OFFSET UNITYSDK_OFFSET(0x114B4100)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_2B0066BA7501CE46_1_METHOD_2_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0x114B4090)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_2B0066BA7501CE46_1_METHOD_2_E27CA151C4C4CCFC_OFFSET UNITYSDK_OFFSET(0x114B41C0)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_2B0066BA7501CE46_1_METHOD_2_E7A612EC419A6536_OFFSET UNITYSDK_OFFSET(0x114B2510)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_2_2B0066BA7501CE46_1__CTOR_OFFSET UNITYSDK_OFFSET(0x114B2380)

inline static constexpr unsigned int Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1_TypeDefinitionIndex = 49213;

class Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1 : public ::Class_1_02986BBFC3ACF3B3_Class_1_99D0DB214C2E5CC2
{
public:
	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Class_1_7A6E49020D23C900* a3, ::RPG::GameCore::GameWorld* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_1_7A6E49020D23C900*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_2B0066BA7501CE46_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E7A612EC419A6536(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_2B0066BA7501CE46_1_METHOD_2_E7A612EC419A6536_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_2B0066BA7501CE46_1_METHOD_2_BBE2D28D8A6AFB06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2D3D92F9F1629798(::RPG::Client::Stage* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_2B0066BA7501CE46_1_METHOD_2_2D3D92F9F1629798_OFFSET))(this, P0);
	}

	::System::Void Method_2_E27CA151C4C4CCFC(::System::String* P0, ::System::String* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_2_2B0066BA7501CE46_1_METHOD_2_E27CA151C4C4CCFC_OFFSET))(this, P0, P1);
	}
};
