#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG_METHOD_6_90570A2DBCC0C59B_OFFSET UNITYSDK_OFFSET(0x18CC21E0)
#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG_METHOD_6_C4223000928C5BAE_OFFSET UNITYSDK_OFFSET(0x18CC1FC0)
#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC2100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRandomCountRogueMiracleConfig_TypeDefinitionIndex = 18606;

	class RogueActGetRandomCountRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C4223000928C5BAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRandomCountRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRandomCountRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG_METHOD_6_C4223000928C5BAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_90570A2DBCC0C59B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRandomCountRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRandomCountRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEMIRACLECONFIG_METHOD_6_90570A2DBCC0C59B_OFFSET))(a1, a2);
		}
	};
}
