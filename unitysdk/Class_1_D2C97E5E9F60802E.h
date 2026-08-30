#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define CLASS_1_D2C97E5E9F60802E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7539B0)

inline static constexpr unsigned int Class_1_D2C97E5E9F60802E_TypeDefinitionIndex = 42031;

class Class_1_D2C97E5E9F60802E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_255* PFGIMMJLOHB; // 0x10
	::RPG::GameCore::LittleGameAbilityConfig* IJLBBLFFADO; // 0x18
	::RPG::GameCore::PixAirCastCondition* OPJCGMMGPOF; // 0x20
	::System::Boolean EABNCCNINPP; // 0x28
	::System::UInt32 BOKJJKFCFME; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2C97E5E9F60802E__CTOR_OFFSET))(this);
	}
};
