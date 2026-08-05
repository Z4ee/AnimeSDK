#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CD0E33FF51FD25C_1.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A78559ECD45B1;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ABILITYSCRIPTPARM__CTOR_OFFSET UNITYSDK_OFFSET(0x18922310)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_AbilityScriptParm_TypeDefinitionIndex = 70258;

	class ZNetEffectPlayableAsset_AbilityScriptParm : public ::System::Object
	{
	public:
		::System::String* AttachPointName; // 0x10
		::MoleMole::Config::ConfigPosRot* FireEffectPosRot; // 0x18
		::Class_1_EA5A78559ECD45B1* EffectScale; // 0x20
		::MoleMole::Config::EffectAutoDynamicValue* EffectAutoDynamic; // 0x28
		::Enum_3_7CD0E33FF51FD25C_1 EffectOwner; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ABILITYSCRIPTPARM__CTOR_OFFSET))(this);
		}
	};
}
