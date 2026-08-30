#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class GotoMapParam; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class ChestGroupPropertyRow; }
namespace RPG::GameCore { class SpecialChestFindDataRow; }

#define RPG_CLIENT_FINDCHESTMARKCONFIG_GETGOTOMAPPARAM_OFFSET UNITYSDK_OFFSET(0x14EFB0)
#define RPG_CLIENT_FINDCHESTMARKCONFIG_GETICONATTACHCONFIG_OFFSET UNITYSDK_OFFSET(0x14EFC0)
#define RPG_CLIENT_FINDCHESTMARKCONFIG__CHECKNEEDREPLACE_OFFSET UNITYSDK_OFFSET(0x14EFD0)
#define RPG_CLIENT_FINDCHESTMARKCONFIG__GETCHESTGROUPPROPERTYROW_OFFSET UNITYSDK_OFFSET(0x14EFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestMarkConfig_TypeDefinitionIndex = 64260;

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

		::System::Boolean GetIconAttachConfig(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::Boolean& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMARKCONFIG_GETICONATTACHCONFIG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean _CheckNeedReplace(::RPG::GameCore::SpecialChestFindDataRow* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpecialChestFindDataRow*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMARKCONFIG__CHECKNEEDREPLACE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ChestGroupPropertyRow* _GetChestGroupPropertyRow(::RPG::GameCore::SpecialChestFindDataRow* a1)
		{
			return ((::RPG::GameCore::ChestGroupPropertyRow*(*)(::PVOID, ::RPG::GameCore::SpecialChestFindDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMARKCONFIG__GETCHESTGROUPPROPERTYROW_OFFSET))(this, a1);
		}
	};
}
