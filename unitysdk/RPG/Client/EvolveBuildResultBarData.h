#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCollectionGear; }

#define RPG_CLIENT_EVOLVEBUILDRESULTBARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCEDB130)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildResultBarData_TypeDefinitionIndex = 63861;

	class EvolveBuildResultBarData : public ::System::Object
	{
	public:
		::RPG::Client::EvolveBuildCollectionGear* Weapon; // 0x10
		::System::Double Damage; // 0x18
		::System::Double MaxDamage; // 0x20
		::System::Double HpDamage; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDRESULTBARDATA__CTOR_OFFSET))(this);
		}
	};
}
