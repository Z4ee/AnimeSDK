#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMEPUZZLELOCKCHIME_METHOD_3_814E3DA60AA4489E_OFFSET UNITYSDK_OFFSET(0x187EFC00)
#define RPG_GAMECORE_CHIMEPUZZLELOCKCHIME_METHOD_3_C17792D495D37292_OFFSET UNITYSDK_OFFSET(0x187EFAF0)
#define RPG_GAMECORE_CHIMEPUZZLELOCKCHIME__CTOR_OFFSET UNITYSDK_OFFSET(0x187EFBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimePuzzleLockChime_TypeDefinitionIndex = 20832;

	class ChimePuzzleLockChime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELOCKCHIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C17792D495D37292(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimePuzzleLockChime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimePuzzleLockChime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELOCKCHIME_METHOD_3_C17792D495D37292_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_814E3DA60AA4489E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimePuzzleLockChime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimePuzzleLockChime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELOCKCHIME_METHOD_3_814E3DA60AA4489E_OFFSET))(a1, a2);
		}
	};
}
