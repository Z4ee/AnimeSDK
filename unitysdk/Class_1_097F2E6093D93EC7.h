#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_227;
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerRecordFrames; }

#define CLASS_1_097F2E6093D93EC7_CLEAR_OFFSET UNITYSDK_OFFSET(0x180AEED0)
#define CLASS_1_097F2E6093D93EC7__CTOR_OFFSET UNITYSDK_OFFSET(0x180AEF60)

inline static constexpr unsigned int Class_1_097F2E6093D93EC7_TypeDefinitionIndex = 39239;

class Class_1_097F2E6093D93EC7 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_227* Field_1_1; // 0x10
	::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames* Field_1_0; // 0x18
	::System::Boolean Field_1_6; // 0x20
	::System::Boolean Field_1_7; // 0x21
	::System::Boolean Field_1_5; // 0x22
	::System::Single Field_1_3; // 0x24
	::RPG::Client::LittleGame::FiveDim::PhantomPlayerState Field_1_2; // 0x28
	::System::Single Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_097F2E6093D93EC7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_097F2E6093D93EC7_CLEAR_OFFSET))(this);
	}
};
