#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_248D0FC39353F7C1___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB15DA80)
#define CLASS_1_248D0FC39353F7C1___C__DISPLAYCLASS16_0__REQUESTRELICRECOMMENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB15DDB0)

inline static constexpr unsigned int Class_1_248D0FC39353F7C1___c__DisplayClass16_0_TypeDefinitionIndex = 66711;

class Class_1_248D0FC39353F7C1___c__DisplayClass16_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _RequestRelicRecommendData_b__0(::RPG::Client::RelicRecommendData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1___C__DISPLAYCLASS16_0__REQUESTRELICRECOMMENDDATA_B__0_OFFSET))(this, a1);
	}
};
