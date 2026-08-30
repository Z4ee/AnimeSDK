#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1199;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }

#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_CREATE_OFFSET UNITYSDK_OFFSET(0xDE3ABA0)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_1_OFFSET UNITYSDK_OFFSET(0xDE3AC80)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_2_OFFSET UNITYSDK_OFFSET(0xDE3AF00)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_OFFSET UNITYSDK_OFFSET(0xDE3AC20)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0xDE3AC10)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int MainPropertyMatchChecker_TypeDefinitionIndex = 74292;

	class MainPropertyMatchChecker : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1199* _DataSource; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_1199* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1199*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker* Create(::Class_0_16E4307DCC419505_1199* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker*(*)(::Class_0_16E4307DCC419505_1199*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_CREATE_OFFSET))(a1);
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
