#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class OverlayOutlineRenderer; }

#define MOLEMOLE_HACKENTRYSUBSYSTEM_SUBSIDIARYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x107F2590)

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_SubsidiaryInfo_TypeDefinitionIndex = 71361;

	class HackEntrySubSystem_SubsidiaryInfo : public ::System::Object
	{
	public:
		::MoleMole::OverlayOutlineRenderer* effectScript; // 0x10
		::Class_3_C93CC3D2C2AC4067* characterModel; // 0x18
		::MoleMole::EntityHandle entity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_SUBSIDIARYINFO__CTOR_OFFSET))(this);
		}
	};
}
