#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonsterExposedType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERSNEAKCONST_METHOD_2_72EC30BC54AB6B00_OFFSET UNITYSDK_OFFSET(0x17454760)
#define RPG_GAMECORE_MONSTERSNEAKCONST__CTOR_OFFSET UNITYSDK_OFFSET(0x17454B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterSneakConst_TypeDefinitionIndex = 15687;

	class MonsterSneakConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single SpecialVisionAutoCloseInterval; // 0x10
		::System::Single ExposedDistance; // 0x14
		::System::Single LockDistance; // 0x18
		::System::Single DelayExposedTime; // 0x1C
		::System::Single DissolveRate2CloseHitBox; // 0x20
		::RPG::GameCore::MonsterExposedType ExposedTiming; // 0x24
		::System::Single GuardDelayExposedTime; // 0x28
		::System::String* AddSpecialVisionCountEffectPath; // 0x30
		::Il2CppArray<::System::String*>* SneakEffects; // 0x38
		::Il2CppArray<::System::String*>* AddSneakEffects; // 0x40
		::System::String* DissolveEffect; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSNEAKCONST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_72EC30BC54AB6B00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterSneakConst*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterSneakConst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSNEAKCONST_METHOD_2_72EC30BC54AB6B00_OFFSET))(a1, a2);
		}
	};
}
