#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_F72F05972443AC2A___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB08F30)
#define CLASS_2_F72F05972443AC2A___C__DISPLAYCLASS2_0___ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0xBB09030)

inline static constexpr unsigned int Class_2_F72F05972443AC2A___c__DisplayClass2_0_TypeDefinitionIndex = 74737;

class Class_2_F72F05972443AC2A___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::Client::SwordTrainingGameInstance* owner; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F72F05972443AC2A___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnEnter_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F72F05972443AC2A___C__DISPLAYCLASS2_0___ONENTER_B__0_OFFSET))(this);
	}
};
