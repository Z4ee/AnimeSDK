#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class OverlayOutlineRenderer; }

#define MOLEMOLE_HACKENTRYSUBSYSTEM_SUBSIDIARYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1417EAC0)

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_SubsidiaryInfo_TypeDefinitionIndex = 83321;

	class HackEntrySubSystem_SubsidiaryInfo : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle entity; // 0x10
		::Class_3_DFD5D1FDB9D2A4AC* characterModel; // 0x20
		::MoleMole::OverlayOutlineRenderer* effectScript; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SUBSIDIARYINFO__CTOR_OFFSET))(this);
		}
	};
}
