#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureCommonEffectsPreloadConfig; }
namespace RPG::GameCore { class PreloadItem; }
namespace RPG::GameCore { class PreloadItemList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREPRELOADCONFIG_METHOD_2_5BE1E189250F1B16_OFFSET UNITYSDK_OFFSET(0x1CDF65D0)
#define RPG_GAMECORE_ADVENTUREPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF67C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePreloadConfig_TypeDefinitionIndex = 16196;

	class AdventurePreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* CommonAssetPreloadList; // 0x10
		::Il2CppArray<::RPG::GameCore::PreloadItem*>* CommonEffectPreloadList; // 0x18
		::Il2CppArray<::RPG::GameCore::AdventureCommonEffectsPreloadConfig*>* CommonEffectsPreloadConfig; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PreloadItemList*>* PetPreloadConfigMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5BE1E189250F1B16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventurePreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventurePreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPRELOADCONFIG_METHOD_2_5BE1E189250F1B16_OFFSET))(a1, a2);
		}
	};
}
