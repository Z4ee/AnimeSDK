#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPrayType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class GridFightPrayQuestConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xD2EA7A0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_COSTDESC_OFFSET UNITYSDK_OFFSET(0xD2EB9F0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD2EAD50)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_DISPLAYDESC_OFFSET UNITYSDK_OFFSET(0xD2EACE0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_HASCOST_OFFSET UNITYSDK_OFFSET(0xD2EBAB0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xD2EBB20)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_PRAYTYPE_OFFSET UNITYSDK_OFFSET(0xD2EB220)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xD2EB0D0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD2EB980)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xD2EBA60)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0xD2EBB70)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD2EB910)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuestConfig_TypeDefinitionIndex = 65149;

	class GridFightPrayQuestConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPrayQuestConfig*>** StaticGet__PrayIDToConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPrayQuestConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPrayQuestConfig_TypeDefinitionIndex)->GetStaticField(0x43430);
		}
		::RPG::GameCore::GridFightPrayQuestConfigRow* _Row; // 0x10
		::RPG::GameCore::FinishWayRow* _FinishWayRow; // 0x18

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
