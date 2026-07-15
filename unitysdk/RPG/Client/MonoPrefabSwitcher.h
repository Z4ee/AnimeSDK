#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class PrefabStatePerformer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPREFABSWITCHER_CLOSEALLNODES_OFFSET UNITYSDK_OFFSET(0x18C6BD40)
#define RPG_CLIENT_MONOPREFABSWITCHER_OPENCURRENTSTATENODES_OFFSET UNITYSDK_OFFSET(0x18C6C5D0)
#define RPG_CLIENT_MONOPREFABSWITCHER_SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x18C6BB00)
#define RPG_CLIENT_MONOPREFABSWITCHER_TRYSETCURRENTSYSTEMNAME_OFFSET UNITYSDK_OFFSET(0x18C6BBC0)
#define RPG_CLIENT_MONOPREFABSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6C870)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPrefabSwitcher_TypeDefinitionIndex = 65889;

	class MonoPrefabSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PrefabStatePerformer*>* StatePerformers; // 0x18
		::System::String* CurrentType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void SwitchState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABSWITCHER_SWITCHSTATE_OFFSET))(this, a1);
		}

		::System::Boolean TrySetCurrentSystemName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABSWITCHER_TRYSETCURRENTSYSTEMNAME_OFFSET))(this, a1);
		}

		::System::Void CloseAllNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABSWITCHER_CLOSEALLNODES_OFFSET))(this);
		}

		::System::Void OpenCurrentStateNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABSWITCHER_OPENCURRENTSTATENODES_OFFSET))(this);
		}
	};
}
