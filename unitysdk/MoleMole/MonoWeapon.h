#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class WeaponAttachPoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOWEAPON__CTOR_OFFSET UNITYSDK_OFFSET(0x16061020)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWeapon_TypeDefinitionIndex = 67800;

	class MonoWeapon : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::WeaponAttachPoint*>* weaponAttachPointList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPON__CTOR_OFFSET))(this);
		}
	};
}
