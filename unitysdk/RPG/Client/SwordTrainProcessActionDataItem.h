#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_33.h"
#include "unitysdk/RPG/Client/SwordTrainProcessActionStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingActionRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xC990C20)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC990B80)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xC990D60)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xC991140)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC990D80)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC990F60)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PERFORMANCEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC991200)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PHASENAME_OFFSET UNITYSDK_OFFSET(0xC991240)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC991220)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_SUBNAME_OFFSET UNITYSDK_OFFSET(0xC991050)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC991310)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC990EF0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC990CB0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xC990D70)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_PERFORMANCEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC991210)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xC991230)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_TRANSFERTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0xC990D00)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC990C10)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainProcessActionDataItem_TypeDefinitionIndex = 57951;

	class SwordTrainProcessActionDataItem : public ::System::Object
	{
	public:
		::System::String* _PerformancePrefabPath_k__BackingField; // 0x10
		::Enum_3_4608E37A1B3D374A_33 Time; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x1C
		::RPG::Client::SwordTrainProcessActionStatus _Status_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainProcessActionDataItem* Create(::System::UInt32 a1, ::Enum_3_4608E37A1B3D374A_33 a2, ::RPG::Client::SwordTrainProcessActionStatus a3)
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::System::UInt32, ::Enum_3_4608E37A1B3D374A_33, ::RPG::Client::SwordTrainProcessActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::SwordTrainProcessActionDataItem* CreateEmpty(::Enum_3_4608E37A1B3D374A_33 a1)
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::Enum_3_4608E37A1B3D374A_33))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATEEMPTY_OFFSET))(a1);
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
