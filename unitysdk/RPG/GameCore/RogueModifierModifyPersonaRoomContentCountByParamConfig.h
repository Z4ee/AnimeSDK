#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG_METHOD_3_53B2FEBD18DC65BB_OFFSET UNITYSDK_OFFSET(0x1D3FA4A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG_METHOD_3_B88D3F5AEAB75F3F_OFFSET UNITYSDK_OFFSET(0x1D3FA4F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FA4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomContentCountByParamConfig_TypeDefinitionIndex = 17584;

	class RogueModifierModifyPersonaRoomContentCountByParamConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_53B2FEBD18DC65BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG_METHOD_3_53B2FEBD18DC65BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B88D3F5AEAB75F3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomContentCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCONTENTCOUNTBYPARAMCONFIG_METHOD_3_B88D3F5AEAB75F3F_OFFSET))(a1, a2);
		}
	};
}
