#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PreloadItem; }
namespace System { class String; }

#define RPG_GAMECORE_AVATAREFFECTSPRELOADITEM_METHOD_2_0E960A2EE066170F_OFFSET UNITYSDK_OFFSET(0x186BF100)
#define RPG_GAMECORE_AVATAREFFECTSPRELOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x186BF240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEffectsPreloadItem_TypeDefinitionIndex = 15480;

	class AvatarEffectsPreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* SkillTypes; // 0x10
		::Il2CppArray<::RPG::GameCore::PreloadItem*>* EffectPaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREFFECTSPRELOADITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0E960A2EE066170F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarEffectsPreloadItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEffectsPreloadItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREFFECTSPRELOADITEM_METHOD_2_0E960A2EE066170F_OFFSET))(a1, a2);
		}
	};
}
