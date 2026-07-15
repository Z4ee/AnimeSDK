#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_METHOD_6_2E38A75B7D40A603_OFFSET UNITYSDK_OFFSET(0x1BB67700)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_METHOD_6_6E823F9FEDB07CFF_OFFSET UNITYSDK_OFFSET(0x1BB676B0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB676F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournTitanFloorTypeConfig_TypeDefinitionIndex = 19081;

	class RogueParamRogueTournTitanFloorTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6E823F9FEDB07CFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_METHOD_6_6E823F9FEDB07CFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_2E38A75B7D40A603(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_METHOD_6_2E38A75B7D40A603_OFFSET))(a1, a2);
		}
	};
}
