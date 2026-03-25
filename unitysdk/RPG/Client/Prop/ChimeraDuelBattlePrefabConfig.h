#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class ChimeraDuelBattlePrefabConfig_Master; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELBATTLEPREFABCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA03EBE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBattlePrefabConfig_TypeDefinitionIndex = 63761;

	class ChimeraDuelBattlePrefabConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::WeakAssetReference Chimera; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelBattlePrefabConfig_Master*>* Masters; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBATTLEPREFABCONFIG__CTOR_OFFSET))(this);
		}
	};
}
