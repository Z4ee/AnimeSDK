#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIROLETRUSTTASKROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18466DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleTrustTaskRowWidgetController_Data_TypeDefinitionIndex = 79528;

	class UIRoleTrustTaskRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* textmapKey; // 0x10
		::System::Boolean unlock; // 0x18
		::System::Boolean complete; // 0x19

		::System::Void _ctor(::System::String* textmapKey, ::System::Boolean complete)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTTASKROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this, textmapKey, complete);
		}
	};
}
