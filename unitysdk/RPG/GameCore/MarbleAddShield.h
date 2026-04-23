#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEADDSHIELD_METHOD_3_2695C56F422933B3_OFFSET UNITYSDK_OFFSET(0x18A95AC0)
#define RPG_GAMECORE_MARBLEADDSHIELD_METHOD_3_DBFE962FBA4A3588_OFFSET UNITYSDK_OFFSET(0x18A959E0)
#define RPG_GAMECORE_MARBLEADDSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A95A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddShield_TypeDefinitionIndex = 15948;

	class MarbleAddShield : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DBFE962FBA4A3588(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSHIELD_METHOD_3_DBFE962FBA4A3588_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2695C56F422933B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSHIELD_METHOD_3_2695C56F422933B3_OFFSET))(a1, a2);
		}
	};
}
