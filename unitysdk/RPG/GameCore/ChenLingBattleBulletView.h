#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBattleAttachPointConfig; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETVIEW_METHOD_2_CDDE3AD77B5A7F7E_OFFSET UNITYSDK_OFFSET(0x187E1780)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x187E1ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBulletView_TypeDefinitionIndex = 14874;

	class ChenLingBattleBulletView : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BulletPrefabPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* EffectTiers; // 0x18
		::RPG::GameCore::ChenLingBattleAttachPointConfig* FireAttachPoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CDDE3AD77B5A7F7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBulletView*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBulletView*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETVIEW_METHOD_2_CDDE3AD77B5A7F7E_OFFSET))(a1, a2);
		}
	};
}
