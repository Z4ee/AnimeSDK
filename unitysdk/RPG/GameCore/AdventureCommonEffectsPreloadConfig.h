#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PreloadItem; }

#define RPG_GAMECORE_ADVENTURECOMMONEFFECTSPRELOADCONFIG_METHOD_2_60FAAF47FC7E6D09_OFFSET UNITYSDK_OFFSET(0x1AE5C720)
#define RPG_GAMECORE_ADVENTURECOMMONEFFECTSPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5C840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCommonEffectsPreloadConfig_TypeDefinitionIndex = 15719;

	class AdventureCommonEffectsPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PlaneType PlaneType; // 0x10
		::Il2CppArray<::RPG::GameCore::PreloadItem*>* EffectPaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECOMMONEFFECTSPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_60FAAF47FC7E6D09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCommonEffectsPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCommonEffectsPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECOMMONEFFECTSPRELOADCONFIG_METHOD_2_60FAAF47FC7E6D09_OFFSET))(a1, a2);
		}
	};
}
