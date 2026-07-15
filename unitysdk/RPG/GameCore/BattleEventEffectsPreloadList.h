#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_22C41D6A0B2E6D9B_OFFSET UNITYSDK_OFFSET(0x1A3EB320)
#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_68BF231AB3A1102A_OFFSET UNITYSDK_OFFSET(0x1A3EB360)
#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3EB350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventEffectsPreloadList_TypeDefinitionIndex = 15717;

	class BattleEventEffectsPreloadList : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::Il2CppArray<::System::String*>* EffectPaths; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22C41D6A0B2E6D9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventEffectsPreloadList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventEffectsPreloadList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_22C41D6A0B2E6D9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68BF231AB3A1102A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventEffectsPreloadList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventEffectsPreloadList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_68BF231AB3A1102A_OFFSET))(a1, a2);
		}
	};
}
