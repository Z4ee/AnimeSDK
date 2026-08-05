#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/MoleMole/Config/WindDirectionType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class PatternShape; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGWINDFIELDPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x143841E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWindFieldProperty_TypeDefinitionIndex = 66530;

	class ConfigWindFieldProperty : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ZoneTagsBlacklist; // 0x10
		::Il2CppArray<::System::String*>* ZoneTags; // 0x18
		::System::String* DistanceVelocityCurve; // 0x20
		::MoleMole::Config::PatternShape* WindDetectPattern; // 0x28
		::System::String* MassVelocityCurve; // 0x30
		::Il2CppArray<::System::String*>* ZoneTagsTemplateBlacklist; // 0x38
		::Il2CppArray<::System::String*>* ZoneTagsTemplateList; // 0x40
		::System::Single EnterRangeLerpTime; // 0x48
		::MoleMole::Config::WindDirectionType directionType; // 0x4C
		::System::Int32 ResistBreakLevel; // 0x50
		::MoleMole::Config::HitForwardType WindForwardType; // 0x54
		::System::Boolean Allied; // 0x58
		::System::Boolean Neutral; // 0x59
		::System::Boolean ForceAttackInvincibleTarget; // 0x5A
		::System::Boolean Enemy; // 0x5B
		::System::Single ExitRangeLerpTime; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWINDFIELDPROPERTY__CTOR_OFFSET))(this);
		}
	};
}
