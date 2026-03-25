#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightGamePlayResConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x981F5B0)
#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x981F720)
#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x981F7D0)
#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x981F7F0)
#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x981F670)
#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x981F660)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGamePlayResConfig_TypeDefinitionIndex = 52831;

	class GridFightGamePlayResConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightGamePlayResConfigRow* _ConfigRow; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightGamePlayResConfig* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightGamePlayResConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_CREATE_OFFSET))(id);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_ID_OFFSET))(this);
		}
	};
}
