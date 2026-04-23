#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterLodMaterialPropertyList; }
namespace RPG::GameCore { class CharacterPrefabLodInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERLODCONFIG_METHOD_2_46EA512D7D45436B_OFFSET UNITYSDK_OFFSET(0x187D28B0)
#define RPG_GAMECORE_CHARACTERLODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187D2A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterLodConfig_TypeDefinitionIndex = 18094;

	class CharacterLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterPrefabLodInfo*>* CharacterPrefabLodInfoMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPG::GameCore::CharacterLodMaterialPropertyList*>* NpcMaterialModifyByBodySizeMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLODCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_46EA512D7D45436B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterLodConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterLodConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLODCONFIG_METHOD_2_46EA512D7D45436B_OFFSET))(a1, a2);
		}
	};
}
