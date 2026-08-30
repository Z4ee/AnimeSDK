#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceSectionConfig; }

#define RPG_GAMECORE_CAKERACETUTORIALCONFIG_METHOD_2_1039D7CBAA2B849E_OFFSET UNITYSDK_OFFSET(0x1CF76940)
#define RPG_GAMECORE_CAKERACETUTORIALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF79FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTutorialConfig_TypeDefinitionIndex = 18192;

	class CakeRaceTutorialConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RandomSeed; // 0x10
		::Il2CppArray<::System::UInt32>* CatIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::CakeRaceSectionConfig*>* SectionList; // 0x20
		::Il2CppArray<::System::UInt32>* BanBattleItemSectionIndexList; // 0x28
		::Il2CppArray<::System::UInt32>* BanNPCUseBattleItemSectionIndexList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETUTORIALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1039D7CBAA2B849E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceTutorialConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceTutorialConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETUTORIALCONFIG_METHOD_2_1039D7CBAA2B849E_OFFSET))(a1, a2);
		}
	};
}
