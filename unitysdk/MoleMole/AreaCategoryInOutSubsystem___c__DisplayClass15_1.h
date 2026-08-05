#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AreaCategoryInOutSubsystem___c__DisplayClass15_0; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS15_1__CHECKLOOP_B__0_OFFSET UNITYSDK_OFFSET(0x17791A10)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17791A00)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem___c__DisplayClass15_1_TypeDefinitionIndex = 68256;

	class AreaCategoryInOutSubsystem___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::MoleMole::AreaCategoryInOutSubsystem___c__DisplayClass15_0* CS___8__locals1; // 0x10
		::UnityEngine::Vector3 playerPos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}

		::System::Void _CheckLoop_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS15_1__CHECKLOOP_B__0_OFFSET))(this);
		}
	};
}
