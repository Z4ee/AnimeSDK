#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyBuffGridItemData; }
namespace RPG::GameCore { class AlleyDockGridItemData; }
namespace RPG::GameCore { class AlleyShopGridItemData; }
namespace RPG::GameCore { class AlleyTutorialGridItemData; }
namespace RPG::GameCore { class AlleyWalkableGridItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYMAPGRIDCONFIG_METHOD_2_360BA3F10FDB9491_OFFSET UNITYSDK_OFFSET(0x16F761A0)
#define RPG_GAMECORE_ALLEYMAPGRIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F76510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapGridConfig_TypeDefinitionIndex = 14373;

	class AlleyMapGridConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Width; // 0x10
		::System::UInt32 Height; // 0x14
		::System::Single UnitSize; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AlleyWalkableGridItemData*>* AlleyWalkableGridItemDataMap; // 0x28
		::Il2CppArray<::RPG::GameCore::AlleyShopGridItemData*>* AlleyShopGridItemDataList; // 0x30
		::Il2CppArray<::RPG::GameCore::AlleyDockGridItemData*>* AlleyDockGridItemDataList; // 0x38
		::Il2CppArray<::RPG::GameCore::AlleyBuffGridItemData*>* AlleyBuffGridItemDataList; // 0x40
		::Il2CppArray<::RPG::GameCore::AlleyTutorialGridItemData*>* AlleyTutorialGridItemDataList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_360BA3F10FDB9491(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyMapGridConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyMapGridConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRIDCONFIG_METHOD_2_360BA3F10FDB9491_OFFSET))(a1, a2);
		}
	};
}
