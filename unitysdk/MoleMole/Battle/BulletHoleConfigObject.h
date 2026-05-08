#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/BulletHoleUpdateStrategy.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/MoleMole/BulletDamageDecalType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace MoleMole::Config { class RaycastHitWallEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xF95BFD0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int BulletHoleConfigObject_TypeDefinitionIndex = 46859;

	class BulletHoleConfigObject : public ::System::Object
	{
	public:
		::System::String* OverrideShakeKey; // 0x10
		::MoleMole::Config::RaycastHitWallEffectConfig* rayConfig; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>* EffectSegmentList; // 0x20
		::MoleMole::Battle::DebugColor debugColor; // 0x28
		::MoleMole::Battle::BulletHoleUpdateStrategy posUpdateStrategy; // 0x48
		::MoleMole::BulletDamageDecalType CharacterDecalType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT__CTOR_OFFSET))(this);
		}
	};
}
