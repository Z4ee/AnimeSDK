#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_889;
namespace RPG::GameCore { class SwordTrainingActionRow; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xA509C60)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xA509C40)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xA509CA0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA509C80)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA509CC0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SETISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xA509BF0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SETLEVEL_OFFSET UNITYSDK_OFFSET(0xA509BA0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xA509C70)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xA509C50)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xA509CB0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA509C90)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA509B40)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA509B30)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingActionData_TypeDefinitionIndex = 61605;

	class SwordTrainingActionData : public ::System::Object
	{
	public:
		::RPG::GameCore::SwordTrainingActionType _ActionType_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::Boolean _IsHighlight_k__BackingField; // 0x18
		::System::UInt32 _ActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 actionID, ::RPG::GameCore::SwordTrainingActionType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SwordTrainingActionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA__CTOR_OFFSET))(this, actionID, type);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_889* actionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_889*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SYNC_OFFSET))(this, actionInfo);
		}

		::System::Void SetLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SETLEVEL_OFFSET))(this, level);
		}

		::System::Void SetIsHighlight(::System::Boolean bIsHighlight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SETISHIGHLIGHT_OFFSET))(this, bIsHighlight);
		}

		::RPG::GameCore::SwordTrainingActionType get_ActionType()
		{
			return ((::RPG::GameCore::SwordTrainingActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ACTIONTYPE_OFFSET))(this);
		}

		::System::Void set_ActionType(::RPG::GameCore::SwordTrainingActionType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingActionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ACTIONTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ACTIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ISHIGHLIGHT_OFFSET))(this);
		}

		::System::Void set_IsHighlight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ISHIGHLIGHT_OFFSET))(this, value);
		}

		::RPG::GameCore::SwordTrainingActionRow* get_Row()
		{
			return ((::RPG::GameCore::SwordTrainingActionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ROW_OFFSET))(this);
		}
	};
}
