#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyPackGoodItemConfig; }

#define CLASS_1_10F018A96134BD2C__CTOR_OFFSET UNITYSDK_OFFSET(0x1634C1B0)

inline static constexpr unsigned int Class_1_10F018A96134BD2C_TypeDefinitionIndex = 74007;

class Class_1_10F018A96134BD2C : public ::System::Object
{
public:
	::RPG::GameCore::AlleyPackGoodItemConfig* EABKOHGCHFP; // 0x10
	::System::UInt32 BDCHMHLNAMH; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10F018A96134BD2C__CTOR_OFFSET))(this, a1);
	}
};
