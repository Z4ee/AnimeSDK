#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEADDSHIELD_METHOD_3_22303DC4BCC89043_OFFSET UNITYSDK_OFFSET(0x1BD12A40)
#define RPG_GAMECORE_MARBLEADDSHIELD_METHOD_3_2695C56F422933B3_OFFSET UNITYSDK_OFFSET(0x1BD12AA0)
#define RPG_GAMECORE_MARBLEADDSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD12A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddShield_TypeDefinitionIndex = 16184;

	class MarbleAddShield : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22303DC4BCC89043(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSHIELD_METHOD_3_22303DC4BCC89043_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2695C56F422933B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSHIELD_METHOD_3_2695C56F422933B3_OFFSET))(a1, a2);
		}
	};
}
