#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarDemoConfigRow; }

#define RPG_CLIENT_ROLETRIALINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A17A50)
#define RPG_CLIENT_ROLETRIALINSTANCE_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x16A17B30)
#define RPG_CLIENT_ROLETRIALINSTANCE_GET_CANCHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0x16A17BE0)
#define RPG_CLIENT_ROLETRIALINSTANCE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x16A179E0)
#define RPG_CLIENT_ROLETRIALINSTANCE_LEAVEROLETRIAL_OFFSET UNITYSDK_OFFSET(0x16A17AF0)
#define RPG_CLIENT_ROLETRIALINSTANCE_SET_CANCHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0x16A17C20)
#define RPG_CLIENT_ROLETRIALINSTANCE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x16A179A0)
#define RPG_CLIENT_ROLETRIALINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A178E0)
#define RPG_CLIENT_ROLETRIALINSTANCE__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x16A17AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialInstance_TypeDefinitionIndex = 67882;

	class RoleTrialInstance : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarDemoConfigRow* _Row; // 0x10
		::System::UInt32 StageID; // 0x18
		::System::Boolean IsFirstEnterTrial; // 0x1C
		::System::Boolean _CanChangeLineupLeader; // 0x1D

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void LeaveRoleTrial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_LEAVEROLETRIAL_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::GameCore::AvatarDemoConfigRow* get_Row()
		{
			return ((::RPG::GameCore::AvatarDemoConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_GET_AVATARID_OFFSET))(this);
		}

		::System::Boolean get_CanChangeLineupLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_GET_CANCHANGELINEUPLEADER_OFFSET))(this);
		}

		::System::Void set_CanChangeLineupLeader(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_SET_CANCHANGELINEUPLEADER_OFFSET))(this, a1);
		}
	};
}
