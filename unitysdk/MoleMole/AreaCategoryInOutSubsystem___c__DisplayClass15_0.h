#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MoleMole { class AreaCategoryInOutSubsystem; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x150D9560)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem___c__DisplayClass15_0_TypeDefinitionIndex = 68261;

	class AreaCategoryInOutSubsystem___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::MoleMole::AreaCategoryInOutSubsystem* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}
	};
}
