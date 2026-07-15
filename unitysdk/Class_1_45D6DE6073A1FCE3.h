#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define CLASS_1_45D6DE6073A1FCE3__CTOR_OFFSET UNITYSDK_OFFSET(0x14CFEF00)

inline static constexpr unsigned int Class_1_45D6DE6073A1FCE3_TypeDefinitionIndex = 75368;

class Class_1_45D6DE6073A1FCE3 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameAbilityConfig* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_1; // 0x18
	::RPG::GameCore::PixAirCastCondition* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45D6DE6073A1FCE3__CTOR_OFFSET))(this);
	}
};
