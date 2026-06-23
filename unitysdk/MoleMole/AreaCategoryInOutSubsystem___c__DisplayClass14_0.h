#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MoleMole { class AreaCategoryInOutSubsystem; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x144BBC80)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem___c__DisplayClass14_0_TypeDefinitionIndex = 63603;

	class AreaCategoryInOutSubsystem___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::AreaCategoryInOutSubsystem* __4__this; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}
	};
}
