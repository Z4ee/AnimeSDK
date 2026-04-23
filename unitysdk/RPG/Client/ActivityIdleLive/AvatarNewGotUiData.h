#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9B22570)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_CUTINFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x9B22530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9B22510)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B224F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_SKILLDESCS_OFFSET UNITYSDK_OFFSET(0x9B22550)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9B22580)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_CUTINFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x9B22540)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9B22520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9B22500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_SKILLDESCS_OFFSET UNITYSDK_OFFSET(0x9B22560)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B22590)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int AvatarNewGotUiData_TypeDefinitionIndex = 69471;

	class AvatarNewGotUiData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* _Config_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _SkillDescs_k__BackingField; // 0x18
		::System::String* _CutInFigurePath_k__BackingField; // 0x20
		::System::String* _ImagePath_k__BackingField; // 0x28
		::RPG::Client::TextID _Name_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA__CTOR_OFFSET))(this, avatarId);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_IMAGEPATH_OFFSET))(this, value);
		}

		::System::String* get_CutInFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_CUTINFIGUREPATH_OFFSET))(this);
		}

		::System::Void set_CutInFigurePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_CUTINFIGUREPATH_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_SkillDescs()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_SKILLDESCS_OFFSET))(this);
		}

		::System::Void set_SkillDescs(::System::Collections::Generic::List_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_SKILLDESCS_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* get_Config()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AVATARNEWGOTUIDATA_SET_CONFIG_OFFSET))(this, value);
		}
	};
}
