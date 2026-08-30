#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ORBSPAWNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDA0F7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int OrbSpawnConfig_TypeDefinitionIndex = 64519;

	class OrbSpawnConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightOrbType orbType; // 0x10
		::System::String* prefabPath; // 0x18
		::System::Single radius; // 0x20

		::System::Void _ctor(::RPG::GameCore::GridFightOrbType a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightOrbType, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ORBSPAWNCONFIG__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
