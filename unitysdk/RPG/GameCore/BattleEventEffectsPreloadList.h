#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_1280AF0908DD47FD_OFFSET UNITYSDK_OFFSET(0x16FD3E00)
#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_AA859EE251C98AC8_OFFSET UNITYSDK_OFFSET(0x16FD3DC0)
#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD3DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventEffectsPreloadList_TypeDefinitionIndex = 14976;

	class BattleEventEffectsPreloadList : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::Il2CppArray<::System::String*>* EffectPaths; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AA859EE251C98AC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventEffectsPreloadList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventEffectsPreloadList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_AA859EE251C98AC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1280AF0908DD47FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventEffectsPreloadList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventEffectsPreloadList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_METHOD_3_1280AF0908DD47FD_OFFSET))(a1, a2);
		}
	};
}
