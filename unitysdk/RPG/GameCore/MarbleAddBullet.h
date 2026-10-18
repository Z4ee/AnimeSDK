#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEADDBULLET_METHOD_3_2FDFAD8525983A63_OFFSET UNITYSDK_OFFSET(0x1D836930)
#define RPG_GAMECORE_MARBLEADDBULLET_METHOD_3_80855F327088158B_OFFSET UNITYSDK_OFFSET(0x1D836990)
#define RPG_GAMECORE_MARBLEADDBULLET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D836980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddBullet_TypeDefinitionIndex = 16847;

	class MarbleAddBullet : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::UInt32 EffectId; // 0x10
		::System::Single MinTime; // 0x14
		::System::String* MinTimeDynamic; // 0x18
		::System::Single MaxTime; // 0x20
		::System::String* MaxTimeDynamic; // 0x28
		::System::Int32 Damage; // 0x30
		::System::String* DamageDynamic; // 0x38
		::System::Single DamageAttackFactor; // 0x40
		::System::String* DamageAttackFactorDynamic; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBULLET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2FDFAD8525983A63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddBullet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddBullet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBULLET_METHOD_3_2FDFAD8525983A63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80855F327088158B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddBullet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBULLET_METHOD_3_80855F327088158B_OFFSET))(a1, a2);
		}
	};
}
