#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_METHOD_3_2D9F5D1AE1366835_OFFSET UNITYSDK_OFFSET(0x1E0CDC80)
#define RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_METHOD_3_882AC43A1E66B139_OFFSET UNITYSDK_OFFSET(0x1E0CDCD0)
#define RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CDCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterDanhengConfig_TypeDefinitionIndex = 19062;

	class FateModifierMasterDanhengConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D9F5D1AE1366835(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterDanhengConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterDanhengConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_METHOD_3_2D9F5D1AE1366835_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_882AC43A1E66B139(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterDanhengConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterDanhengConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_METHOD_3_882AC43A1E66B139_OFFSET))(a1, a2);
		}
	};
}
