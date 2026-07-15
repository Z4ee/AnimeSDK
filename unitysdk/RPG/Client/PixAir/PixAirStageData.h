#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirStageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PixAirStageRow; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_AREAIDLIST_OFFSET UNITYSDK_OFFSET(0x1A0D3250)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A0DFB60)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1A0DFD80)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_ISSKIPPAGESTAGE_OFFSET UNITYSDK_OFFSET(0x1A0D3850)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_ISTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0x1A0D31F0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A0CC4E0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_MECHANISMTIP_OFFSET UNITYSDK_OFFSET(0x1A0DFC00)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A0DFAA0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_PRESTAGELIST_OFFSET UNITYSDK_OFFSET(0x1A0DF960)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_REWARDTIP_OFFSET UNITYSDK_OFFSET(0x1A0DFCC0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A0DF8E0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0x1A0CC9D0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x1A0DFA00)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1A0DF900)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1A0DFD90)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A0DF8F0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1A0DFDA0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DFE30)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirStageData_TypeDefinitionIndex = 75346;

	class PixAirStageData : public ::System::Object
	{
	public:
		::System::Boolean _IsFinish_k__BackingField; // 0x10
		::System::UInt32 _StageID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_SET_STAGEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PixAirStageRow* get__Row()
		{
			return ((::RPG::GameCore::PixAirStageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET__ROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_AreaIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_AREAIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PreStageList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_PRESTAGELIST_OFFSET))(this);
		}

		::System::UInt32 get_UnlockScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_UNLOCKSCORE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_MechanismTip()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_MECHANISMTIP_OFFSET))(this);
		}

		::RPG::Client::TextID get_RewardTip()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_REWARDTIP_OFFSET))(this);
		}

		::RPG::GameCore::PixAirStageType get_StageType()
		{
			return ((::RPG::GameCore::PixAirStageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_STAGETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsTutorialStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_ISTUTORIALSTAGE_OFFSET))(this);
		}

		::System::Boolean get_IsSkipPageStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_ISSKIPPAGESTAGE_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_SET_ISFINISH_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirStageData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirStageData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEDATA_TRYCREATE_OFFSET))(a1);
		}
	};
}
