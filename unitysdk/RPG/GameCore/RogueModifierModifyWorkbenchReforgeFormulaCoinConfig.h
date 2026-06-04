#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG_METHOD_3_7A0E2DFD1BA559FD_OFFSET UNITYSDK_OFFSET(0x19B99800)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG_METHOD_3_F6526BA253B238B4_OFFSET UNITYSDK_OFFSET(0x19B998D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B99880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchReforgeFormulaCoinConfig_TypeDefinitionIndex = 16992;

	class RogueModifierModifyWorkbenchReforgeFormulaCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A0E2DFD1BA559FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeFormulaCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeFormulaCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG_METHOD_3_7A0E2DFD1BA559FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6526BA253B238B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeFormulaCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchReforgeFormulaCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHREFORGEFORMULACOINCONFIG_METHOD_3_F6526BA253B238B4_OFFSET))(a1, a2);
		}
	};
}
