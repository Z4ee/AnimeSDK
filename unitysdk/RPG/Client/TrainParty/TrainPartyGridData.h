#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_973;
namespace RPG::GameCore { class TrainPartyGridConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB352E70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETGRIDICONPATH_OFFSET UNITYSDK_OFFSET(0xB3531A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETSPECIALSHOWIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB3530E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETTIPSCONTENT_OFFSET UNITYSDK_OFFSET(0xB3534C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_GRIDTYPE_OFFSET UNITYSDK_OFFSET(0xB353410)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ISRARE_OFFSET UNITYSDK_OFFSET(0xB3536D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_MUSTSTOP_OFFSET UNITYSDK_OFFSET(0xB3535B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB3533B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB353590)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_OVERRITIPS_OFFSET UNITYSDK_OFFSET(0xB352FF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_RESETTIPS_OFFSET UNITYSDK_OFFSET(0xB352FA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB3535A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB352F00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_TRYTRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0xB353040)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB352E60)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyGridData_TypeDefinitionIndex = 68594;

	class TrainPartyGridData : public ::System::Object
	{
	public:
		::System::String* _OverrideTipsContent; // 0x10
		::System::UInt32 _GridID; // 0x18
		::RPG::GameCore::TrainPartyGridType _GridType; // 0x1C
		::System::UInt32 _UniqueID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::TrainPartyGridData* Create(::Class_1_D17272E82AE804C2_973* serverInfo)
		{
			return ((::RPG::Client::TrainParty::TrainPartyGridData*(*)(::Class_1_D17272E82AE804C2_973*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_CREATE_OFFSET))(serverInfo);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_973* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_973*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void OverriTips(::System::String* tips)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_OVERRITIPS_OFFSET))(this, tips);
		}

		::System::Void ResetTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_RESETTIPS_OFFSET))(this);
		}

		::System::Void TryTriggerTutorial(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_TRYTRIGGERTUTORIAL_OFFSET))(this, index);
		}

		::System::String* GetSpecialShowImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETSPECIALSHOWIMAGEPATH_OFFSET))(this);
		}

		::System::String* GetGridIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETGRIDICONPATH_OFFSET))(this);
		}

		::System::String* GetTipsContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETTIPSCONTENT_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SET_UNIQUEID_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyGridType get_GridType()
		{
			return ((::RPG::GameCore::TrainPartyGridType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_GRIDTYPE_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyGridConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainPartyGridConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_MustStop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_MUSTSTOP_OFFSET))(this);
		}

		::System::Boolean get_IsRare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ISRARE_OFFSET))(this);
		}
	};
}
