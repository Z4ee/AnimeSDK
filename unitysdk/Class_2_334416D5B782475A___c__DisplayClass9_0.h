#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_994;

#define CLASS_2_334416D5B782475A___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xACC8FA0)
#define CLASS_2_334416D5B782475A___C__DISPLAYCLASS9_0___CREATEITEMIFNEED_B__0_OFFSET UNITYSDK_OFFSET(0xACC96A0)

inline static constexpr unsigned int Class_2_334416D5B782475A___c__DisplayClass9_0_TypeDefinitionIndex = 66882;

class Class_2_334416D5B782475A___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::GameCore::FloatMessageType messageType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_334416D5B782475A___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateItemIfNeed_b__0(::Class_0_16E4307DCC419505_994* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_994*))((::PBYTE)hIl2Cpp + CLASS_2_334416D5B782475A___C__DISPLAYCLASS9_0___CREATEITEMIFNEED_B__0_OFFSET))(this, a1);
	}
};
