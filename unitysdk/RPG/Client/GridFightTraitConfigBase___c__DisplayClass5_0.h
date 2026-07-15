#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitLayerConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A603060)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__DISPLAYCLASS5_0__GETLAYERCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x1A603F80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitConfigBase___c__DisplayClass5_0_TypeDefinitionIndex = 62524;

	class GridFightTraitConfigBase___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 layer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLayerConfig_b__0(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__DISPLAYCLASS5_0__GETLAYERCONFIG_B__0_OFFSET))(this, a1);
		}
	};
}
