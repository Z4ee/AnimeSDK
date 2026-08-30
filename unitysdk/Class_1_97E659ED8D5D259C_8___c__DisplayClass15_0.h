#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_8;
namespace RPG::Client { class ChimeraDuelItemData; }
namespace RPG::Client { class ChimeraDuelItemInfo; }

#define CLASS_1_97E659ED8D5D259C_8___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF5C990)
#define CLASS_1_97E659ED8D5D259C_8___C__DISPLAYCLASS15_0___GETITEMPOOLMAXRARITY_B__0_OFFSET UNITYSDK_OFFSET(0xBF5CB70)
#define CLASS_1_97E659ED8D5D259C_8___C__DISPLAYCLASS15_0___GETITEMPOOLMAXRARITY_B__2_OFFSET UNITYSDK_OFFSET(0xBF5CB90)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_8___c__DisplayClass15_0_TypeDefinitionIndex = 63447;

class Class_1_97E659ED8D5D259C_8___c__DisplayClass15_0 : public ::System::Object
{
public:
	::Class_1_97E659ED8D5D259C_8* __4__this; // 0x10
	::RPG::Client::ChimeraDuelItemInfo* itemInfo; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::ChimeraDuelItemData* __GetItemPoolMaxRarity_b__0(::System::UInt32 a1)
	{
		return ((::RPG::Client::ChimeraDuelItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8___C__DISPLAYCLASS15_0___GETITEMPOOLMAXRARITY_B__0_OFFSET))(this, a1);
	}

	::System::Boolean __GetItemPoolMaxRarity_b__2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8___C__DISPLAYCLASS15_0___GETITEMPOOLMAXRARITY_B__2_OFFSET))(this, a1);
	}
};
