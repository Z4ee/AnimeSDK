#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightPresentConfigRow; }

#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1CA5CAD0)
#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_BONUSID_OFFSET UNITYSDK_OFFSET(0x1CA5CCC0)
#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0x1CA5CBE0)
#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CA5CB90)
#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x1CA5CC50)
#define RPG_CLIENT_GRIDFIGHTPRESENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA5CB80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPresentConfig_TypeDefinitionIndex = 64509;

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
