#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_36.h"
#include "unitysdk/RPG/Client/SwordTrainProcessActionStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingActionRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xE11EFC0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xE11EF20)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xE11F100)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE11F4E0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE11F120)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE11F300)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PERFORMANCEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xE11F5A0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PHASENAME_OFFSET UNITYSDK_OFFSET(0xE11F5E0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xE11F5C0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_SUBNAME_OFFSET UNITYSDK_OFFSET(0xE11F3F0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE11F6B0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xE11F290)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xE11F050)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xE11F110)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_PERFORMANCEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xE11F5B0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xE11F5D0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_TRANSFERTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0xE11F0A0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE11EFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainProcessActionDataItem_TypeDefinitionIndex = 62052;

	class SwordTrainProcessActionDataItem : public ::System::Object
	{
	public:
		::System::String* _PerformancePrefabPath_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::Enum_3_4608E37A1B3D374A_36 Time; // 0x1C
		::RPG::Client::SwordTrainProcessActionStatus _Status_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainProcessActionDataItem* Create(::System::UInt32 a1, ::Enum_3_4608E37A1B3D374A_36 a2, ::RPG::Client::SwordTrainProcessActionStatus a3)
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::System::UInt32, ::Enum_3_4608E37A1B3D374A_36, ::RPG::Client::SwordTrainProcessActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::SwordTrainProcessActionDataItem* CreateEmpty(::Enum_3_4608E37A1B3D374A_36 a1)
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::Enum_3_4608E37A1B3D374A_36))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATEEMPTY_OFFSET))(a1);
		}

		::System::Void SetPrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SETPREFABPATH_OFFSET))(this, a1);
		}

		::System::Void TransferToNextState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_TRANSFERTONEXTSTATE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingActionRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingActionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SubName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_SUBNAME_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_PerformancePrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PERFORMANCEPREFABPATH_OFFSET))(this);
		}

		::System::Void set_PerformancePrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_PERFORMANCEPREFABPATH_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainProcessActionStatus get_Status()
		{
			return ((::RPG::Client::SwordTrainProcessActionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::SwordTrainProcessActionStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainProcessActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PhaseName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PHASENAME_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingActionType get_Type()
		{
			return ((::RPG::GameCore::SwordTrainingActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_TYPE_OFFSET))(this);
		}
	};
}
