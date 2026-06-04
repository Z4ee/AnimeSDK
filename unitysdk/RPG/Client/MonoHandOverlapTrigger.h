#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOHANDOVERLAPTRIGGER_ISCONTAINSENTITY_OFFSET UNITYSDK_OFFSET(0xC117780)
#define RPG_CLIENT_MONOHANDOVERLAPTRIGGER_METHOD_5_2337B33FCDD17495_OFFSET UNITYSDK_OFFSET(0xC117A40)
#define RPG_CLIENT_MONOHANDOVERLAPTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1179B0)
#define RPG_CLIENT_MONOHANDOVERLAPTRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC117920)
#define RPG_CLIENT_MONOHANDOVERLAPTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xC1173F0)
#define RPG_CLIENT_MONOHANDOVERLAPTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xC1175C0)
#define RPG_CLIENT_MONOHANDOVERLAPTRIGGER_REFRESHENTITIES_OFFSET UNITYSDK_OFFSET(0xC117630)
#define RPG_CLIENT_MONOHANDOVERLAPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC117AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoHandOverlapTrigger_TypeDefinitionIndex = 64337;

	class MonoHandOverlapTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* Collider; // 0x18
		::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHANDOVERLAPTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHANDOVERLAPTRIGGER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHANDOVERLAPTRIGGER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void RefreshEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHANDOVERLAPTRIGGER_REFRESHENTITIES_OFFSET))(this);
		}

		::System::Boolean IsContainsEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHANDOVERLAPTRIGGER_ISCONTAINSENTITY_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHANDOVERLAPTRIGGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHANDOVERLAPTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean Method_5_2337B33FCDD17495(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHANDOVERLAPTRIGGER_METHOD_5_2337B33FCDD17495_OFFSET))(this, a1);
		}
	};
}
