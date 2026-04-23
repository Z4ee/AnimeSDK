#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_METHOD_3_3AC1D093159C6BDB_OFFSET UNITYSDK_OFFSET(0x188D5330)
#define RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_METHOD_3_806C4925FF6FCD42_OFFSET UNITYSDK_OFFSET(0x188D63D0)
#define RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D52E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterPhainonConfig_TypeDefinitionIndex = 18326;

	class FateModifierMasterPhainonConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_806C4925FF6FCD42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterPhainonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterPhainonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_METHOD_3_806C4925FF6FCD42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3AC1D093159C6BDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterPhainonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterPhainonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_METHOD_3_3AC1D093159C6BDB_OFFSET))(a1, a2);
		}
	};
}
