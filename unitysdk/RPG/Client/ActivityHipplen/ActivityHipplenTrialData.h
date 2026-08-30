#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityHipplenTrialRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_GET_GAMEJSONPATH_OFFSET UNITYSDK_OFFSET(0x1B7BD4C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B7BD390)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_GET_TRIALROW_OFFSET UNITYSDK_OFFSET(0x1B7BD3B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_GET_TRIALTITLE_OFFSET UNITYSDK_OFFSET(0x1B7BD3D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B7BD470)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B7BD3A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_SET_TRIALROW_OFFSET UNITYSDK_OFFSET(0x1B7BD3C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B8E00)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenTrialData_TypeDefinitionIndex = 75308;

	class ActivityHipplenTrialData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityHipplenTrialRow* _TrialRow_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityHipplenTrialRow* get_TrialRow()
		{
			return ((::RPG::GameCore::ActivityHipplenTrialRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_GET_TRIALROW_OFFSET))(this);
		}

		::System::Void set_TrialRow(::RPG::GameCore::ActivityHipplenTrialRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityHipplenTrialRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_SET_TRIALROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TrialTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_GET_TRIALTITLE_OFFSET))(this);
		}

		::RPG::GameCore::HipplenMiniGameType get_Type()
		{
			return ((::RPG::GameCore::HipplenMiniGameType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_GameJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALDATA_GET_GAMEJSONPATH_OFFSET))(this);
		}
	};
}
