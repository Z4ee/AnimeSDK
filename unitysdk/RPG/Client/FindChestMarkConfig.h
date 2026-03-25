#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class GotoMapParam; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class ChestGroupPropertyRow; }
namespace RPG::GameCore { class SpecialChestFindDataRow; }

#define RPG_CLIENT_FINDCHESTMARKCONFIG_GETGOTOMAPPARAM_OFFSET UNITYSDK_OFFSET(0x7DCA0)
#define RPG_CLIENT_FINDCHESTMARKCONFIG_GETICONATTACHCONFIG_OFFSET UNITYSDK_OFFSET(0x7DCB0)
#define RPG_CLIENT_FINDCHESTMARKCONFIG__CHECKNEEDREPLACE_OFFSET UNITYSDK_OFFSET(0x7DCC0)
#define RPG_CLIENT_FINDCHESTMARKCONFIG__GETCHESTGROUPPROPERTYROW_OFFSET UNITYSDK_OFFSET(0x7DCD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestMarkConfig_TypeDefinitionIndex = 52114;

	struct alignas(4) FindChestMarkConfig
	{
		::System::UInt32 PlaneID; // 0x10
		::System::UInt32 FloorID; // 0x14
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 ConfigID; // 0x1C
		::System::UInt32 LittleGameEntityID; // 0x20

		::RPG::Client::GotoMapParam* GetGotoMapParam()
		{
			return ((::RPG::Client::GotoMapParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMARKCONFIG_GETGOTOMAPPARAM_OFFSET))(this);
		}

		::System::Boolean GetIconAttachConfig(::RPG::Client::NavMap::IMapDataSource* mapData, ::System::UInt32& groupID, ::System::UInt32& instanceID, ::System::UInt32& littleGameEntityID, ::System::Boolean& isUseSpecialMappingInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMARKCONFIG_GETICONATTACHCONFIG_OFFSET))(this, mapData, groupID, instanceID, littleGameEntityID, isUseSpecialMappingInfo);
		}

		::System::Boolean _CheckNeedReplace(::RPG::GameCore::SpecialChestFindDataRow* replaceChestRow, ::RPG::Client::NavMap::IMapDataSource* mapData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpecialChestFindDataRow*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMARKCONFIG__CHECKNEEDREPLACE_OFFSET))(this, replaceChestRow, mapData);
		}

		::RPG::GameCore::ChestGroupPropertyRow* _GetChestGroupPropertyRow(::RPG::GameCore::SpecialChestFindDataRow* replaceChestRow)
		{
			return ((::RPG::GameCore::ChestGroupPropertyRow*(*)(::PVOID, ::RPG::GameCore::SpecialChestFindDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMARKCONFIG__GETCHESTGROUPPROPERTYROW_OFFSET))(this, replaceChestRow);
		}
	};
}
