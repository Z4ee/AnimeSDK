#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1091;
namespace RPG::GameCore { class SwordTrainingActionRow; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0x19C60B60)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x19C60B40)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x19C60BA0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19C60B80)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x19C60BC0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SETISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x19C60AF0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x19C60AA0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0x19C60B70)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x19C60B50)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x19C60BB0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19C60B90)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19C60A40)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C60A30)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingActionData_TypeDefinitionIndex = 71452;

	class SwordTrainingActionData : public ::System::Object
	{
	public:
		::System::UInt32 _Level_k__BackingField; // 0x10
		::System::Boolean _IsHighlight_k__BackingField; // 0x14
		::System::UInt32 _ActionID_k__BackingField; // 0x18
		::RPG::GameCore::SwordTrainingActionType _ActionType_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::SwordTrainingActionType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SwordTrainingActionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_1091* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1091*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SetLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SETLEVEL_OFFSET))(this, a1);
		}

		::System::Void SetIsHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SETISHIGHLIGHT_OFFSET))(this, a1);
		}

		::RPG::GameCore::SwordTrainingActionType get_ActionType()
		{
			return ((::RPG::GameCore::SwordTrainingActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ACTIONTYPE_OFFSET))(this);
		}

		::System::Void set_ActionType(::RPG::GameCore::SwordTrainingActionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingActionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ACTIONTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ACTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ISHIGHLIGHT_OFFSET))(this);
		}

		::System::Void set_IsHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_SET_ISHIGHLIGHT_OFFSET))(this, a1);
		}

		::RPG::GameCore::SwordTrainingActionRow* get_Row()
		{
			return ((::RPG::GameCore::SwordTrainingActionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONDATA_GET_ROW_OFFSET))(this);
		}
	};
}
