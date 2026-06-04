#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightPresentConfigRow; }

#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xBBD03A0)
#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_BONUSID_OFFSET UNITYSDK_OFFSET(0xBBD04E0)
#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0xBBD0480)
#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xBBD0460)
#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xBBD04B0)
#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD0450)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPresentConfig_TypeDefinitionIndex = 60236;

	class GridFightPresentConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightPresentConfigRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightPresentConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPresentConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_DESCTEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::UInt32 get_BonusID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_BONUSID_OFFSET))(this);
		}
	};
}
