#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_METHOD_7_BCC6383707C2E41D_OFFSET UNITYSDK_OFFSET(0x1D3ED020)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_METHOD_7_F719DDC3DDD57C59_OFFSET UNITYSDK_OFFSET(0x1D3ECFD0)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ED010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondScepterFilterBySelectedStyleTypeConfig_TypeDefinitionIndex = 19349;

	class RogueMagicCondScepterFilterBySelectedStyleTypeConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_F719DDC3DDD57C59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_METHOD_7_F719DDC3DDD57C59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_BCC6383707C2E41D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_METHOD_7_BCC6383707C2E41D_OFFSET))(a1, a2);
		}
	};
}
