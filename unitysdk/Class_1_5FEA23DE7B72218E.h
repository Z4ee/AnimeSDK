#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropSteerMode.h"
#include "unitysdk/RPG/GameCore/PropSteerTarget.h"
#include "unitysdk/System/Object.h"

class Class_3_CD04D3296DF4C842_6;
class Class_3_CD04D3296DF4C842_7;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_5FEA23DE7B72218E__CTOR_OFFSET UNITYSDK_OFFSET(0x9783590)

inline static constexpr unsigned int Class_1_5FEA23DE7B72218E_TypeDefinitionIndex = 52883;

class Class_1_5FEA23DE7B72218E : public ::System::Object
{
public:
	::Class_3_CD04D3296DF4C842_7* Field_1_11; // 0x10
	::Class_3_CD04D3296DF4C842_6* Field_1_10; // 0x18
	::RPG::GameCore::GameEntity* Field_1_3; // 0x20
	::System::Single Field_1_7; // 0x28
	::System::Single Field_1_4; // 0x2C
	::RPG::GameCore::PropSteerTarget Field_1_0; // 0x30
	::RPG::GameCore::PropSteerMode Field_1_1; // 0x34
	::System::Single Field_1_9; // 0x38
	::System::Single Field_1_8; // 0x3C
	::System::Single Field_1_5; // 0x40
	::System::Boolean Field_1_6; // 0x44
	::System::Boolean Field_1_2; // 0x45

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEA23DE7B72218E__CTOR_OFFSET))(this);
	}
};
