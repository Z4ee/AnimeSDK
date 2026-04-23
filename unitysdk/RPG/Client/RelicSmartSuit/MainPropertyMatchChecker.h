#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1045;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }

#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_CREATE_OFFSET UNITYSDK_OFFSET(0xAFA7F30)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_1_OFFSET UNITYSDK_OFFSET(0xAFA8010)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_2_OFFSET UNITYSDK_OFFSET(0xAFA81F0)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_OFFSET UNITYSDK_OFFSET(0xAFA7FB0)
#define RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA7FA0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int MainPropertyMatchChecker_TypeDefinitionIndex = 68659;

	class MainPropertyMatchChecker : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1045* _DataSource; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_1045* dataSource)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1045*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER__CTOR_OFFSET))(this, dataSource);
		}

		static ::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker* Create(::Class_0_16E4307DCC419505_1045* dataSource)
		{
			return ((::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker*(*)(::Class_0_16E4307DCC419505_1045*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_CREATE_OFFSET))(dataSource);
		}

		::System::Boolean IsMainPropertyMatch(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* relicInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_OFFSET))(this, relicInfo);
		}

		::System::Boolean IsMainPropertyMatch_1(::RPG::Client::RelicItemData* relicData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_1_OFFSET))(this, relicData);
		}

		static ::System::Boolean IsMainPropertyMatch_2(::RPG::Client::RelicItemData* relicData, ::RPG::Client::RelicRecommendData* recommendData, ::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_MAINPROPERTYMATCHCHECKER_ISMAINPROPERTYMATCH_2_OFFSET))(relicData, recommendData, avatar);
		}
	};
}
