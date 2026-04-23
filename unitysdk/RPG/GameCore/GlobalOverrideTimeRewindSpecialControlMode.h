#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GLOBALOVERRIDETIMEREWINDSPECIALCONTROLMODE_METHOD_3_6A44B392DF5EB2A1_OFFSET UNITYSDK_OFFSET(0x18998030)
#define RPG_GAMECORE_GLOBALOVERRIDETIMEREWINDSPECIALCONTROLMODE_METHOD_3_91906046E2D45B08_OFFSET UNITYSDK_OFFSET(0x189980B0)
#define RPG_GAMECORE_GLOBALOVERRIDETIMEREWINDSPECIALCONTROLMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18998080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalOverrideTimeRewindSpecialControlMode_TypeDefinitionIndex = 19652;

	class GlobalOverrideTimeRewindSpecialControlMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Override; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALOVERRIDETIMEREWINDSPECIALCONTROLMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6A44B392DF5EB2A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalOverrideTimeRewindSpecialControlMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalOverrideTimeRewindSpecialControlMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALOVERRIDETIMEREWINDSPECIALCONTROLMODE_METHOD_3_6A44B392DF5EB2A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91906046E2D45B08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalOverrideTimeRewindSpecialControlMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalOverrideTimeRewindSpecialControlMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALOVERRIDETIMEREWINDSPECIALCONTROLMODE_METHOD_3_91906046E2D45B08_OFFSET))(a1, a2);
		}
	};
}
