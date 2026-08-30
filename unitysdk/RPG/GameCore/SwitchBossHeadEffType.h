#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_METHOD_3_8B15F2BC5EFC430D_OFFSET UNITYSDK_OFFSET(0x1D5889E0)
#define RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_METHOD_3_E7F219E995978576_OFFSET UNITYSDK_OFFSET(0x1D5889A0)
#define RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5889D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchBossHeadEffType_TypeDefinitionIndex = 22954;

	class SwitchBossHeadEffType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BossHeadEffType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7F219E995978576(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchBossHeadEffType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchBossHeadEffType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_METHOD_3_E7F219E995978576_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B15F2BC5EFC430D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchBossHeadEffType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_METHOD_3_8B15F2BC5EFC430D_OFFSET))(a1, a2);
		}
	};
}
