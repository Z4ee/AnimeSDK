#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPrayType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class GridFightPrayQuestConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1AEA1070)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_COSTDESC_OFFSET UNITYSDK_OFFSET(0x1AEA22C0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1AEA1620)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_DISPLAYDESC_OFFSET UNITYSDK_OFFSET(0x1AEA15B0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_HASCOST_OFFSET UNITYSDK_OFFSET(0x1AEA2380)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AEA23F0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_PRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1AEA1AF0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x1AEA19A0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1AEA2250)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AEA2330)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEA2440)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA21E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuestConfig_TypeDefinitionIndex = 62164;

	class GridFightPrayQuestConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPrayQuestConfig*>** StaticGet__PrayIDToConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPrayQuestConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPrayQuestConfig_TypeDefinitionIndex)->GetStaticField(0x2ACB0);
		}
		::RPG::GameCore::FinishWayRow* _FinishWayRow; // 0x10
		::RPG::GameCore::GridFightPrayQuestConfigRow* _Row; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG__CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightPrayQuestConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPrayQuestConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_QUESTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_DisplayDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_DISPLAYDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_CostDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_COSTDESC_OFFSET))(this);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_HasCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_HASCOST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPrayType get_PrayType()
		{
			return ((::RPG::GameCore::GridFightPrayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_PRAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_ISVALID_OFFSET))(this);
		}
	};
}
