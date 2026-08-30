#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionGeneratePickupItem; }

#define CLASS_2_AC5A5A3B7475CF2C_METHOD_2_4C319F4EF3F42834_OFFSET UNITYSDK_OFFSET(0x19703B80)
#define CLASS_2_AC5A5A3B7475CF2C__CTOR_OFFSET UNITYSDK_OFFSET(0x19703B70)

inline static constexpr unsigned int Class_2_AC5A5A3B7475CF2C_TypeDefinitionIndex = 36699;

class Class_2_AC5A5A3B7475CF2C : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionGeneratePickupItem* HBMANJMOFNO; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionGeneratePickupItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionGeneratePickupItem*))((::PBYTE)hIl2Cpp + CLASS_2_AC5A5A3B7475CF2C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C319F4EF3F42834(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AC5A5A3B7475CF2C_METHOD_2_4C319F4EF3F42834_OFFSET))(this, a1, a2, a3);
	}
};
