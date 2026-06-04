#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingAIState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_127;
class Class_0_16E4307DCC419505_128;

#define CLASS_1_60AD743CA5DFE723__CTOR_OFFSET UNITYSDK_OFFSET(0x18D1F2C0)

inline static constexpr unsigned int Class_1_60AD743CA5DFE723_TypeDefinitionIndex = 40307;

class Class_1_60AD743CA5DFE723 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_128* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_127* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::RPG::Client::LittleGame::ChenLing::ChenLingAIState Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60AD743CA5DFE723__CTOR_OFFSET))(this);
	}
};
