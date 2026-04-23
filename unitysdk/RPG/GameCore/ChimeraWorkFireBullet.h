#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAWORKFIREBULLET_METHOD_3_B62CA79155238F4A_OFFSET UNITYSDK_OFFSET(0x1880C7D0)
#define RPG_GAMECORE_CHIMERAWORKFIREBULLET_METHOD_3_C268D596A7EC949E_OFFSET UNITYSDK_OFFSET(0x1880C770)
#define RPG_GAMECORE_CHIMERAWORKFIREBULLET__CTOR_OFFSET UNITYSDK_OFFSET(0x1880C7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkFireBullet_TypeDefinitionIndex = 15031;

	class ChimeraWorkFireBullet : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::String* BulletEffectPath; // 0x20
		::System::String* HitEffectPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKFIREBULLET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C268D596A7EC949E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWorkFireBullet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkFireBullet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKFIREBULLET_METHOD_3_C268D596A7EC949E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B62CA79155238F4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWorkFireBullet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkFireBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKFIREBULLET_METHOD_3_B62CA79155238F4A_OFFSET))(a1, a2);
		}
	};
}
