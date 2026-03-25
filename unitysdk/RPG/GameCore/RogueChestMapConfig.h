#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueBlockCreateGroup; }
namespace RPG::GameCore { class RogueChestGridItem; }
namespace RPG::GameCore { class RogueChestModifierEvent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUECHESTMAPCONFIG_METHOD_2_A068E300B1EE4746_OFFSET UNITYSDK_OFFSET(0x175E9890)
#define RPG_GAMECORE_ROGUECHESTMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175E9BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueChestMapConfig_TypeDefinitionIndex = 16456;

	class RogueChestMapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* PreStartRoomIDList; // 0x10
		::System::UInt32 Width; // 0x18
		::System::UInt32 Height; // 0x1C
		::System::UInt32 StartGridItemID; // 0x20
		::System::UInt32 EndGridItemID; // 0x24
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RogueChestGridItem*>* RogueChestGridItemMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RogueChestModifierEvent*>* RogueChestEventMap; // 0x30
		::Il2CppArray<::RPG::GameCore::RogueBlockCreateGroup*>* RogueBlockCreateGroupList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A068E300B1EE4746(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueChestMapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueChestMapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTMAPCONFIG_METHOD_2_A068E300B1EE4746_OFFSET))(a1, a2);
		}
	};
}
