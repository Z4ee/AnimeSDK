#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_METHOD_3_24BE502D8935BB60_OFFSET UNITYSDK_OFFSET(0x197125C0)
#define RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_METHOD_3_882AC43A1E66B139_OFFSET UNITYSDK_OFFSET(0x19710E10)
#define RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19710DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterDanhengConfig_TypeDefinitionIndex = 18302;

	class FateModifierMasterDanhengConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_24BE502D8935BB60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterDanhengConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterDanhengConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_METHOD_3_24BE502D8935BB60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_882AC43A1E66B139(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMasterDanhengConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMasterDanhengConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_METHOD_3_882AC43A1E66B139_OFFSET))(a1, a2);
		}
	};
}
