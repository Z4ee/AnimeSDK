#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG_METHOD_3_90389303F7F3CE89_OFFSET UNITYSDK_OFFSET(0x1E0CDDA0)
#define RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG_METHOD_3_9E0F69DBB7FCAC8D_OFFSET UNITYSDK_OFFSET(0x1E0CDDF0)
#define RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CDDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterMar7thConfig_TypeDefinitionIndex = 19059;

	class FateModifierMasterMar7thConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90389303F7F3CE89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterMar7thConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterMar7thConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG_METHOD_3_90389303F7F3CE89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E0F69DBB7FCAC8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterMar7thConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterMar7thConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG_METHOD_3_9E0F69DBB7FCAC8D_OFFSET))(a1, a2);
		}
	};
}
