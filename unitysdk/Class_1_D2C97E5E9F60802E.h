#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_329;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define CLASS_1_D2C97E5E9F60802E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB1C50)

inline static constexpr unsigned int Class_1_D2C97E5E9F60802E_TypeDefinitionIndex = 43673;

class Class_1_D2C97E5E9F60802E : public ::System::Object
{
public:
	::RPG::GameCore::PixAirCastCondition* OPJCGMMGPOF; // 0x10
	::Class_0_16E4307DCC419505_329* PFGIMMJLOHB; // 0x18
	::RPG::GameCore::LittleGameAbilityConfig* IJLBBLFFADO; // 0x20
	::System::UInt32 BOKJJKFCFME; // 0x28
	::System::Boolean EABNCCNINPP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2C97E5E9F60802E__CTOR_OFFSET))(this);
	}
};
