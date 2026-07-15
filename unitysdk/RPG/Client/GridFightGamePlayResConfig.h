#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightGamePlayResConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1ABDE5C0)
#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1ABDE730)
#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1ABDE7E0)
#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1ABDE830)
#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ABDE680)
#define RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABDE670)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGamePlayResConfig_TypeDefinitionIndex = 62141;

	class GridFightGamePlayResConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightGamePlayResConfigRow* _ConfigRow; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightGamePlayResConfig* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGamePlayResConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEPLAYRESCONFIG_CREATE_OFFSET))(a1);
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
