#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS47_1__CTOR_OFFSET UNITYSDK_OFFSET(0x144DAA80)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS47_1__ENTERCONTROLLABLECAMERA_B__2_OFFSET UNITYSDK_OFFSET(0x144DAA90)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass47_1_TypeDefinitionIndex = 57115;

	class HackControllableSubsystem___c__DisplayClass47_1 : public ::System::Object
	{
	public:
		::System::Single entityYaw; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS47_1__CTOR_OFFSET))(this);
		}

		::System::Single _EnterControllableCamera_b__2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS47_1__ENTERCONTROLLABLECAMERA_B__2_OFFSET))(this);
		}
	};
}
