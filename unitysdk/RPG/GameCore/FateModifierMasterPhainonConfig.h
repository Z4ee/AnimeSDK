#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_METHOD_3_3AC1D093159C6BDB_OFFSET UNITYSDK_OFFSET(0x1D08D870)
#define RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_METHOD_3_59D8A9D28081F777_OFFSET UNITYSDK_OFFSET(0x1D08D820)
#define RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08D860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterPhainonConfig_TypeDefinitionIndex = 19058;

	class FateModifierMasterPhainonConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59D8A9D28081F777(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterPhainonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterPhainonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_METHOD_3_59D8A9D28081F777_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3AC1D093159C6BDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterPhainonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterPhainonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_METHOD_3_3AC1D093159C6BDB_OFFSET))(a1, a2);
		}
	};
}
