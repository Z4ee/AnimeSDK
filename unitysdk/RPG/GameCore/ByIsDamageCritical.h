#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_380D15BA487A90B4_OFFSET UNITYSDK_OFFSET(0x18750BE0)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_DE85DB40986C553E_OFFSET UNITYSDK_OFFSET(0x18750CB0)
#define RPG_GAMECORE_BYISDAMAGECRITICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18750C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageCritical_TypeDefinitionIndex = 22462;

	class ByIsDamageCritical : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_380D15BA487A90B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageCritical*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageCritical*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_380D15BA487A90B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DE85DB40986C553E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_DE85DB40986C553E_OFFSET))(a1, a2);
		}
	};
}
