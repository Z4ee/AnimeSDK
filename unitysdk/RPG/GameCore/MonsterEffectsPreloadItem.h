#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PreloadItemSilence; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTEREFFECTSPRELOADITEM_METHOD_2_7DAD97287AF72E21_OFFSET UNITYSDK_OFFSET(0x18B58910)
#define RPG_GAMECORE_MONSTEREFFECTSPRELOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18B58AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterEffectsPreloadItem_TypeDefinitionIndex = 15481;

	class MonsterEffectsPreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* SkillTypes; // 0x10
		::Il2CppArray<::RPG::GameCore::PreloadItemSilence*>* EffectPaths; // 0x18
		::Il2CppArray<::RPG::GameCore::PreloadItemSilence*>* OptionalEffectPaths; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREFFECTSPRELOADITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7DAD97287AF72E21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterEffectsPreloadItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterEffectsPreloadItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREFFECTSPRELOADITEM_METHOD_2_7DAD97287AF72E21_OFFSET))(a1, a2);
		}
	};
}
