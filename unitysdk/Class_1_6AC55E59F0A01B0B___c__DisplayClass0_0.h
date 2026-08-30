#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_2EDCA7D63D6FF2D7.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6AC55E59F0A01B0B___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A581080)
#define CLASS_1_6AC55E59F0A01B0B___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x1A5810E0)

inline static constexpr unsigned int Class_1_6AC55E59F0A01B0B___c__DisplayClass0_0_TypeDefinitionIndex = 36456;

class Class_1_6AC55E59F0A01B0B___c__DisplayClass0_0 : public ::System::Object
{
public:
	::Struct_2_2EDCA7D63D6FF2D7 context; // 0x10
	::RPG::MVector2 positionDelta; // 0x48
	::System::UInt32 islandConfigID; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AC55E59F0A01B0B___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AC55E59F0A01B0B___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET))(this);
	}
};
