#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class WeaponAttachPoint; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOWEAPONHOLDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x136E3170)
#define MOLEMOLE_MONOWEAPONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x136E31C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWeaponHolder_TypeDefinitionIndex = 44172;

	class MonoWeaponHolder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::WeaponAttachPoint*>* weaponAttachPointList; // 0x18
		::System::String* WeaponRootBoneAttachPoint; // 0x20
		::System::Action* OnWeaponChanged; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONHOLDER__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONHOLDER_ONDISABLE_OFFSET))(this);
		}
	};
}
