#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGameFunctionInfo.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class ParkourSkill; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PARKOURGAMESKILLINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9F0EBA0)
#define RPG_CLIENT_PARKOURGAMESKILLINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9F0EC60)
#define RPG_CLIENT_PARKOURGAMESKILLINFO_GET_MINIICONBGPATH_OFFSET UNITYSDK_OFFSET(0x9F0EDA0)
#define RPG_CLIENT_PARKOURGAMESKILLINFO_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x9F0ED00)
#define RPG_CLIENT_PARKOURGAMESKILLINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F0E960)
#define RPG_CLIENT_PARKOURGAMESKILLINFO_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x9F0E940)
#define RPG_CLIENT_PARKOURGAMESKILLINFO_ISSKILLRANDOMLYGENERATED_OFFSET UNITYSDK_OFFSET(0x9F0BDD0)
#define RPG_CLIENT_PARKOURGAMESKILLINFO_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x9F0E950)
#define RPG_CLIENT_PARKOURGAMESKILLINFO_UPDATESKILLID_OFFSET UNITYSDK_OFFSET(0x9F0BD80)
#define RPG_CLIENT_PARKOURGAMESKILLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F0E8A0)
#define RPG_CLIENT_PARKOURGAMESKILLINFO__GETORCREATESKILL_OFFSET UNITYSDK_OFFSET(0x9F0E9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameSkillInfo_TypeDefinitionIndex = 50200;

	class ParkourGameSkillInfo : public ::RPG::Client::ParkourGameFunctionInfo
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ParkourSkill*>* _Skills; // 0x20
		::System::UInt32 _RandomSkillID; // 0x28
		::System::UInt32 _SkillID_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO_SET_SKILLID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconBGPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO_GET_MINIICONBGPATH_OFFSET))(this);
		}

		::System::Boolean IsSkillRandomlyGenerated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO_ISSKILLRANDOMLYGENERATED_OFFSET))(this);
		}

		::System::Void UpdateSkillID(::System::UInt32 skillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO_UPDATESKILLID_OFFSET))(this, skillID);
		}

		::RPG::Client::ParkourSkill* _GetOrCreateSkill(::System::UInt32 id)
		{
			return ((::RPG::Client::ParkourSkill*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMESKILLINFO__GETORCREATESKILL_OFFSET))(this, id);
		}
	};
}
