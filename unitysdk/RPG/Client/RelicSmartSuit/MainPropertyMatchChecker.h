#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1141;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }

#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_CREATE_OFFSET UNITYSDK_OFFSET(0x198891C0)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_1_OFFSET UNITYSDK_OFFSET(0x198892A0)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_2_OFFSET UNITYSDK_OFFSET(0x19889520)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_OFFSET UNITYSDK_OFFSET(0x19889240)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x19889230)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int MainPropertyMatchChecker_TypeDefinitionIndex = 70992;

	class MainPropertyMatchChecker : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1141* _DataSource; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_1141* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1141*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker* Create(::Class_0_16E4307DCC419505_1141* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker*(*)(::Class_0_16E4307DCC419505_1141*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsMainPropertyMatch(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_OFFSET))(this, a1);
		}

		::System::Boolean IsMainPropertyMatch_1(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_1_OFFSET))(this, a1);
		}

		static ::System::Boolean IsMainPropertyMatch_2(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicRecommendData* a2, ::RPG::AvatarSystem::IAvatar* a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_2_OFFSET))(a1, a2, a3);
		}
	};
}
