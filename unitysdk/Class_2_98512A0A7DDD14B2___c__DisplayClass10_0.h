#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_98512A0A7DDD14B2;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define CLASS_2_98512A0A7DDD14B2___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A252D0)
#define CLASS_2_98512A0A7DDD14B2___C__DISPLAYCLASS10_0___DICEAPPEAR_B__1_OFFSET UNITYSDK_OFFSET(0x17A26770)

inline static constexpr unsigned int Class_2_98512A0A7DDD14B2___c__DisplayClass10_0_TypeDefinitionIndex = 58604;

class Class_2_98512A0A7DDD14B2___c__DisplayClass10_0 : public ::System::Object
{
public:
	::System::String* texturePath; // 0x10
	::Class_2_98512A0A7DDD14B2* __4__this; // 0x18
	::System::UInt32 slotID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __DiceAppear_b__1(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_98512A0A7DDD14B2___C__DISPLAYCLASS10_0___DICEAPPEAR_B__1_OFFSET))(this, a1);
	}
};
