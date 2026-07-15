#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFTwoState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_13EEFDBC9BC0696B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48B440)

inline static constexpr unsigned int Class_1_13EEFDBC9BC0696B_TypeDefinitionIndex = 40285;

class Class_1_13EEFDBC9BC0696B : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11
	::RPG::Client::LittleGame::TRFTwoState Field_1_2; // 0x14
	::System::UInt32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13EEFDBC9BC0696B__CTOR_OFFSET))(this);
	}
};
