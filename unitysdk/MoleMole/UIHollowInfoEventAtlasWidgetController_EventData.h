#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_EVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBEA30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoEventAtlasWidgetController_EventData_TypeDefinitionIndex = 69348;

	class UIHollowInfoEventAtlasWidgetController_EventData : public ::System::Object
	{
	public:
		::System::Boolean IsNewTips; // 0x10
		::System::Int32 Id; // 0x14

		::System::Void _ctor(::System::Int32 id, ::System::Boolean newTips)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_EVENTDATA__CTOR_OFFSET))(this, id, newTips);
		}
	};
}
