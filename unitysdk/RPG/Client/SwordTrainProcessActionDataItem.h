#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_35.h"
#include "unitysdk/RPG/Client/SwordTrainProcessActionStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingActionRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xA507BE0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA507B40)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xA507D10)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA508100)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA507D30)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA507F40)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PERFORMANCEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA5081C0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PHASENAME_OFFSET UNITYSDK_OFFSET(0xA508200)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA5081E0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_SUBNAME_OFFSET UNITYSDK_OFFSET(0xA508020)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA5082D0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA507ED0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA507C60)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xA507D20)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_PERFORMANCEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA5081D0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA5081F0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_TRANSFERTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0xA507CB0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA507BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainProcessActionDataItem_TypeDefinitionIndex = 50302;

	class SwordTrainProcessActionDataItem : public ::System::Object
	{
	public:
		::System::String* _PerformancePrefabPath_k__BackingField; // 0x10
		::Enum_3_4608E37A1B3D374A_35 Time; // 0x18
		::RPG::Client::SwordTrainProcessActionStatus _Status_k__BackingField; // 0x1C
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainProcessActionDataItem* Create(::System::UInt32 ID, ::Enum_3_4608E37A1B3D374A_35 time, ::RPG::Client::SwordTrainProcessActionStatus status)
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::System::UInt32, ::Enum_3_4608E37A1B3D374A_35, ::RPG::Client::SwordTrainProcessActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATE_OFFSET))(ID, time, status);
		}

		static ::RPG::Client::SwordTrainProcessActionDataItem* CreateEmpty(::Enum_3_4608E37A1B3D374A_35 time)
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::Enum_3_4608E37A1B3D374A_35))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATEEMPTY_OFFSET))(time);
		}

		::System::Void SetPrefabPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SETPREFABPATH_OFFSET))(this, path);
		}

		::System::Void TransferToNextState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_TRANSFERTONEXTSTATE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_ID_OFFSET))(this, value);
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

		::System::Void set_PerformancePrefabPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_PERFORMANCEPREFABPATH_OFFSET))(this, value);
		}

		::RPG::Client::SwordTrainProcessActionStatus get_Status()
		{
			return ((::RPG::Client::SwordTrainProcessActionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::SwordTrainProcessActionStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainProcessActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_STATUS_OFFSET))(this, value);
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
