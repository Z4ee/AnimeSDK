#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/System/Object.h"

class Class_1_4BFEF016932446F8;
class Class_1_E71C1FEE230A1337;

#define CLASS_1_7DBB00BF997707BD__CTOR_OFFSET UNITYSDK_OFFSET(0x18D54B80)

inline static constexpr unsigned int Class_1_7DBB00BF997707BD_TypeDefinitionIndex = 35696;

class Class_1_7DBB00BF997707BD : public ::System::Object
{
public:
	::Class_1_E71C1FEE230A1337* Field_1_0; // 0x10
	::Class_1_4BFEF016932446F8* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::RPG::GameCore::CakeRaceAIState Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DBB00BF997707BD__CTOR_OFFSET))(this);
	}
};
