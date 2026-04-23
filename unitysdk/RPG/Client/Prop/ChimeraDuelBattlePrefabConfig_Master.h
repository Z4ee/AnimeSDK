#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_CHIMERADUELBATTLEPREFABCONFIG_MASTER__CTOR_OFFSET UNITYSDK_OFFSET(0xADBD1C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBattlePrefabConfig_Master_TypeDefinitionIndex = 71808;

	class ChimeraDuelBattlePrefabConfig_Master : public ::System::Object
	{
	public:
		::System::UInt32 MasterID; // 0x10
		::RPG::Client::WeakAssetReference Prefab; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBATTLEPREFABCONFIG_MASTER__CTOR_OFFSET))(this);
		}
	};
}
