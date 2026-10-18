#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_38EEDFBDB35CAF5D;
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }

#define CLASS_1_38EEDFBDB35CAF5D___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC5630)
#define CLASS_1_38EEDFBDB35CAF5D___C__DISPLAYCLASS15_0__OPENMATCHPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x15AC5640)

inline static constexpr unsigned int Class_1_38EEDFBDB35CAF5D___c__DisplayClass15_0_TypeDefinitionIndex = 75996;

class Class_1_38EEDFBDB35CAF5D___c__DisplayClass15_0 : public ::System::Object
{
public:
	::Class_1_38EEDFBDB35CAF5D* __4__this; // 0x10
	::RPG::Client::ActivityMarble::MarblePVPMatchContext* context; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38EEDFBDB35CAF5D___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Void _OpenMatchPage_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38EEDFBDB35CAF5D___C__DISPLAYCLASS15_0__OPENMATCHPAGE_B__0_OFFSET))(this);
	}
};
