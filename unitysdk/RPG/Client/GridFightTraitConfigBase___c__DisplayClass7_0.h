#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitLayerConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD35BA60)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__DISPLAYCLASS7_0__GETACTIVETEDLAYERCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0xD35C830)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitConfigBase___c__DisplayClass7_0_TypeDefinitionIndex = 65510;

	class GridFightTraitConfigBase___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 layer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActivetedLayerConfig_b__0(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__DISPLAYCLASS7_0__GETACTIVETEDLAYERCONFIG_B__0_OFFSET))(this, a1);
		}
	};
}
