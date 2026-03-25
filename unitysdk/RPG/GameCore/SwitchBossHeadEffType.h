#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_METHOD_3_266A41A6353DE9B5_OFFSET UNITYSDK_OFFSET(0x17791C30)
#define RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_METHOD_3_8AF972173AAA4484_OFFSET UNITYSDK_OFFSET(0x17791CB0)
#define RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17791C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchBossHeadEffType_TypeDefinitionIndex = 21434;

	class SwitchBossHeadEffType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BossHeadEffType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_266A41A6353DE9B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchBossHeadEffType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchBossHeadEffType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_METHOD_3_266A41A6353DE9B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8AF972173AAA4484(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchBossHeadEffType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_METHOD_3_8AF972173AAA4484_OFFSET))(a1, a2);
		}
	};
}
