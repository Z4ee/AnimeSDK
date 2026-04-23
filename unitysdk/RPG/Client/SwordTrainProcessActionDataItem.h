#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_34.h"
#include "unitysdk/RPG/Client/SwordTrainProcessActionStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingActionRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xB244820)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xB244780)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xB244960)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB244D50)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB244980)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB244B90)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PERFORMANCEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB244E10)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PHASENAME_OFFSET UNITYSDK_OFFSET(0xB244E50)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB244E30)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_SUBNAME_OFFSET UNITYSDK_OFFSET(0xB244C70)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB244F20)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB244B20)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB2448B0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xB244970)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_PERFORMANCEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB244E20)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xB244E40)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_TRANSFERTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0xB244900)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB244810)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainProcessActionDataItem_TypeDefinitionIndex = 57161;

	class SwordTrainProcessActionDataItem : public ::System::Object
	{
	public:
		::System::String* _PerformancePrefabPath_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::RPG::Client::SwordTrainProcessActionStatus _Status_k__BackingField; // 0x1C
		::Enum_3_4608E37A1B3D374A_34 Time; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainProcessActionDataItem* Create(::System::UInt32 ID, ::Enum_3_4608E37A1B3D374A_34 time, ::RPG::Client::SwordTrainProcessActionStatus status)
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::System::UInt32, ::Enum_3_4608E37A1B3D374A_34, ::RPG::Client::SwordTrainProcessActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATE_OFFSET))(ID, time, status);
		}

		static ::RPG::Client::SwordTrainProcessActionDataItem* CreateEmpty(::Enum_3_4608E37A1B3D374A_34 time)
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::Enum_3_4608E37A1B3D374A_34))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATEEMPTY_OFFSET))(time);
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
