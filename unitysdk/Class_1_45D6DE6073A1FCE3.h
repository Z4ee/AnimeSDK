#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define CLASS_1_45D6DE6073A1FCE3__CTOR_OFFSET UNITYSDK_OFFSET(0xBFE7B90)

inline static constexpr unsigned int Class_1_45D6DE6073A1FCE3_TypeDefinitionIndex = 78916;

class Class_1_45D6DE6073A1FCE3 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* EPHECEILCCA; // 0x10
	::RPG::GameCore::PixAirCastCondition* OPJCGMMGPOF; // 0x18
	::RPG::GameCore::LittleGameAbilityConfig* IJLBBLFFADO; // 0x20
	::System::UInt32 BOKJJKFCFME; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45D6DE6073A1FCE3__CTOR_OFFSET))(this);
	}
};
