#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_WEAPONINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1042B460)

namespace MoleMole
{
	inline static constexpr unsigned int WeaponInitData_TypeDefinitionIndex = 77726;

	class WeaponInitData : public ::System::Object
	{
	public:
		::System::Int32 weaponID; // 0x10
		::System::Int32 weaponLevel; // 0x14
		::System::Int32 weaponRefineLevel; // 0x18
		::System::Int32 weaponUpgradeLevel; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WEAPONINITDATA__CTOR_OFFSET))(this);
		}
	};
}
