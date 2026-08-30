#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_METHOD_7_4053E5B53CCEC5FC_OFFSET UNITYSDK_OFFSET(0x1D3ECF50)
#define RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_METHOD_7_D23E3E60BF2A0700_OFFSET UNITYSDK_OFFSET(0x1D3ECF00)
#define RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ECF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondMagicUnitCountConfig_TypeDefinitionIndex = 19348;

	class RogueMagicCondMagicUnitCountConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_D23E3E60BF2A0700(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_METHOD_7_D23E3E60BF2A0700_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_4053E5B53CCEC5FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_METHOD_7_4053E5B53CCEC5FC_OFFSET))(a1, a2);
		}
	};
}
