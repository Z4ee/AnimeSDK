#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarbleSealSkillConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GETDESCCONTENT_OFFSET UNITYSDK_OFFSET(0x9C160A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x9C162C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9C16240)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9C163B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9C16420)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x9C16330)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9C16490)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9C16350)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_UPDESCCONTENT_OFFSET UNITYSDK_OFFSET(0x9C16510)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_SETUPDESCCONTENT_OFFSET UNITYSDK_OFFSET(0x9C13260)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x9C16340)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_SET_UPDESCCONTENT_OFFSET UNITYSDK_OFFSET(0x9C16520)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9C13240)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealSkillInfo_TypeDefinitionIndex = 68932;

	class MarbleSealSkillInfo : public ::System::Object
	{
	public:
		::System::String* _UpDescContent_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 skillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO__CTOR_OFFSET))(this, skillID);
		}

		::System::Void SetUpDescContent(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_SETUPDESCCONTENT_OFFSET))(this, content);
		}

		::System::String* GetDescContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GETDESCCONTENT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MarbleSealSkillConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MarbleSealSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_GROUPID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_DescParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_DESCPARAMS_OFFSET))(this);
		}

		::System::String* get_UpDescContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_GET_UPDESCCONTENT_OFFSET))(this);
		}

		::System::Void set_UpDescContent(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALSKILLINFO_SET_UPDESCCONTENT_OFFSET))(this, value);
		}
	};
}
