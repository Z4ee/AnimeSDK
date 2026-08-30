#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelSkillEffectScope.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelSkillRow; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ABILITYJSONPATH_OFFSET UNITYSDK_OFFSET(0x1B5EEA70)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ADDITIONALTRIGGERCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1B5EEA20)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ARCHIVEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B5EEC70)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B5EEB10)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B5EE920)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B5EEBD0)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ISIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1B5EEC20)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1B5EEB80)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1B5EEAC0)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_SCOPE_OFFSET UNITYSDK_OFFSET(0x1B5E1B80)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_SKILLCD_OFFSET UNITYSDK_OFFSET(0x1B5EE980)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET_TRIGGEREVENTLIST_OFFSET UNITYSDK_OFFSET(0x1B5EE9D0)
#define RPG_CLIENT_CHIMERADUELSKILLDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1B5EE970)
#define RPG_CLIENT_CHIMERADUELSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5EE910)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelSkillData_TypeDefinitionIndex = 63450;

	class ChimeraDuelSkillData : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelSkillRow* __Row_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::GameCore::ChimeraDuelSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelSkillRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_SkillCD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_SKILLCD_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TriggerEventList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_TRIGGEREVENTLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AdditionalTriggerConditions()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ADDITIONALTRIGGERCONDITIONS_OFFSET))(this);
		}

		::System::String* get_AbilityJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ABILITYJSONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_ParamList()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsImmediate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ISIMMEDIATE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ArchiveDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_ARCHIVEDESCRIPTION_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelSkillEffectScope get_Scope()
		{
			return ((::RPG::GameCore::ChimeraDuelSkillEffectScope(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLDATA_GET_SCOPE_OFFSET))(this);
		}
	};
}
