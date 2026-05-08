#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/MoleMole/Config/WindDirectionType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class PatternShape; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGWINDFIELDPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA0750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWindFieldProperty_TypeDefinitionIndex = 66291;

	class ConfigWindFieldProperty : public ::System::Object
	{
	public:
		::MoleMole::Config::PatternShape* WindDetectPattern; // 0x10
		::Il2CppArray<::System::String*>* ZoneTagsTemplateList; // 0x18
		::Il2CppArray<::System::String*>* ZoneTags; // 0x20
		::System::String* DistanceVelocityCurve; // 0x28
		::Il2CppArray<::System::String*>* ZoneTagsTemplateBlacklist; // 0x30
		::System::String* MassVelocityCurve; // 0x38
		::Il2CppArray<::System::String*>* ZoneTagsBlacklist; // 0x40
		::System::Single ExitRangeLerpTime; // 0x48
		::System::Int32 ResistBreakLevel; // 0x4C
		::System::Boolean Allied; // 0x50
		::System::Boolean ForceAttackInvincibleTarget; // 0x51
		::System::Boolean Enemy; // 0x52
		::System::Boolean Neutral; // 0x53
		::MoleMole::Config::HitForwardType WindForwardType; // 0x54
		::System::Single EnterRangeLerpTime; // 0x58
		::MoleMole::Config::WindDirectionType directionType; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWINDFIELDPROPERTY__CTOR_OFFSET))(this);
		}
	};
}
