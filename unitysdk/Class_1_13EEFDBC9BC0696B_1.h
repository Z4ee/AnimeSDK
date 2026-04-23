#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFTwoState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_13EEFDBC9BC0696B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18082B70)

inline static constexpr unsigned int Class_1_13EEFDBC9BC0696B_1_TypeDefinitionIndex = 38709;

class Class_1_13EEFDBC9BC0696B_1 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TRFTwoState Field_1_3; // 0x10
	::System::Boolean Field_1_4; // 0x14
	::System::Boolean Field_1_6; // 0x15
	::System::Boolean Field_1_5; // 0x16
	::System::Boolean Field_1_0; // 0x17
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13EEFDBC9BC0696B_1__CTOR_OFFSET))(this);
	}
};
