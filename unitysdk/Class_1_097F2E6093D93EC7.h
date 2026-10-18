#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_339;
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerRecordFrames; }

#define CLASS_1_097F2E6093D93EC7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9438D0)
#define CLASS_1_097F2E6093D93EC7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C943950)

inline static constexpr unsigned int Class_1_097F2E6093D93EC7_TypeDefinitionIndex = 43417;

class Class_1_097F2E6093D93EC7 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_339* AHEBJPINDIO; // 0x10
	::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames* BEANLLJHOPJ; // 0x18
	::System::Single FMDMNMPAAKI; // 0x20
	::RPG::Client::LittleGame::FiveDim::PhantomPlayerState MEPFOEEGBEA; // 0x24
	::System::Single BMPABCGHPFG; // 0x28
	::System::Boolean IGHNIGHKKFM; // 0x2C
	::System::Boolean AENMIAFEBKP; // 0x2D
	::System::Boolean BNIMJJNOLAI; // 0x2E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_097F2E6093D93EC7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_097F2E6093D93EC7_CLEAR_OFFSET))(this);
	}
};
