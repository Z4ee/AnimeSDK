#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_4;
namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelChimeraInfo; }

#define CLASS_1_97E659ED8D5D259C_4___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12924290)
#define CLASS_1_97E659ED8D5D259C_4___C__DISPLAYCLASS14_0___GETCHIMERAPOOLMAXRARITY_B__0_OFFSET UNITYSDK_OFFSET(0x12924360)
#define CLASS_1_97E659ED8D5D259C_4___C__DISPLAYCLASS14_0___GETCHIMERAPOOLMAXRARITY_B__2_OFFSET UNITYSDK_OFFSET(0x129243D0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_4___c__DisplayClass14_0_TypeDefinitionIndex = 58392;

class Class_1_97E659ED8D5D259C_4___c__DisplayClass14_0 : public ::System::Object
{
public:
	::RPG::Client::ChimeraDuelChimeraInfo* chimeraInfo; // 0x10
	::Class_1_97E659ED8D5D259C_4* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_4___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::ChimeraDuelChimeraData* __GetChimeraPoolMaxRarity_b__0(::System::UInt32 chimeraID)
	{
		return ((::RPG::Client::ChimeraDuelChimeraData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_4___C__DISPLAYCLASS14_0___GETCHIMERAPOOLMAXRARITY_B__0_OFFSET))(this, chimeraID);
	}

	::System::Boolean __GetChimeraPoolMaxRarity_b__2(::System::UInt32 rarity)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_4___C__DISPLAYCLASS14_0___GETCHIMERAPOOLMAXRARITY_B__2_OFFSET))(this, rarity);
	}
};
