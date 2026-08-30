#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEADDBULLET_METHOD_3_3E18150D45798802_OFFSET UNITYSDK_OFFSET(0x1D4A2900)
#define RPG_GAMECORE_MARBLEADDBULLET_METHOD_3_8E64E7B513C08306_OFFSET UNITYSDK_OFFSET(0x1D4A2960)
#define RPG_GAMECORE_MARBLEADDBULLET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A2950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddBullet_TypeDefinitionIndex = 16664;

	class MarbleAddBullet : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::UInt32 EffectId; // 0x10
		::System::Single MinTime; // 0x14
		::System::Single MaxTime; // 0x18
		::System::Int32 Damage; // 0x1C
		::System::Single DamageAttackFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBULLET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E18150D45798802(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddBullet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddBullet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBULLET_METHOD_3_3E18150D45798802_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E64E7B513C08306(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddBullet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBULLET_METHOD_3_8E64E7B513C08306_OFFSET))(a1, a2);
		}
	};
}
