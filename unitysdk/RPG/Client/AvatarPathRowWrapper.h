#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MultiplePathAvatarConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_AVATARPATHROWWRAPPER_GET_ALLOWREPEATUNLOCKREWARD_OFFSET UNITYSDK_OFFSET(0x9DB4610)
#define RPG_CLIENT_AVATARPATHROWWRAPPER_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9DB4430)
#define RPG_CLIENT_AVATARPATHROWWRAPPER_GET_CHANGECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x9DB4530)
#define RPG_CLIENT_AVATARPATHROWWRAPPER_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9DB4450)
#define RPG_CLIENT_AVATARPATHROWWRAPPER_GET_ISEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0x9DB45A0)
#define RPG_CLIENT_AVATARPATHROWWRAPPER_GET_UNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0x9DB4680)
#define RPG_CLIENT_AVATARPATHROWWRAPPER_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9DB44D0)
#define RPG_CLIENT_AVATARPATHROWWRAPPER_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9DB4440)
#define RPG_CLIENT_AVATARPATHROWWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB3F90)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathRowWrapper_TypeDefinitionIndex = 61061;

	class AvatarPathRowWrapper : public ::System::Object
	{
	public:
		::System::UInt32 _AvatarID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHROWWRAPPER__CTOR_OFFSET))(this, avatarID);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHROWWRAPPER_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHROWWRAPPER_SET_AVATARID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHROWWRAPPER_GET_DESC_OFFSET))(this);
		}

		::System::String* get_ChangeConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHROWWRAPPER_GET_CHANGECONFIGPATH_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHROWWRAPPER_GET_ISEARLYUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_AllowRepeatUnlockReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHROWWRAPPER_GET_ALLOWREPEATUNLOCKREWARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockToast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHROWWRAPPER_GET_UNLOCKTOAST_OFFSET))(this);
		}

		::RPG::GameCore::MultiplePathAvatarConfigRow* get__Row()
		{
			return ((::RPG::GameCore::MultiplePathAvatarConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHROWWRAPPER_GET__ROW_OFFSET))(this);
		}
	};
}
