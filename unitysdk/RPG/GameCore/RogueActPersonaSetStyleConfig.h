#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG_METHOD_6_41D263727864849D_OFFSET UNITYSDK_OFFSET(0x1D3BA3A0)
#define RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG_METHOD_6_7C2608FF4E771CD9_OFFSET UNITYSDK_OFFSET(0x1D3BA350)
#define RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BA390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSetStyleConfig_TypeDefinitionIndex = 19483;

	class RogueActPersonaSetStyleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7C2608FF4E771CD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSetStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSetStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG_METHOD_6_7C2608FF4E771CD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_41D263727864849D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSetStyleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSetStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASETSTYLECONFIG_METHOD_6_41D263727864849D_OFFSET))(a1, a2);
		}
	};
}
