#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_1C6D059EA74A55C0_OFFSET UNITYSDK_OFFSET(0x1CE72D60)
#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_43B9A91760C7B892_OFFSET UNITYSDK_OFFSET(0x1CE72DA0)
#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE72D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventEffectsPreloadList_TypeDefinitionIndex = 16193;

	class BattleEventEffectsPreloadList : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::Il2CppArray<::System::String*>* EffectPaths; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C6D059EA74A55C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventEffectsPreloadList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventEffectsPreloadList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_1C6D059EA74A55C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_43B9A91760C7B892(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventEffectsPreloadList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventEffectsPreloadList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_43B9A91760C7B892_OFFSET))(a1, a2);
		}
	};
}
