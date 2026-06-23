#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_CUSTOMMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x167C9790)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController_CustomMissionData_TypeDefinitionIndex = 57543;

	class UIHollowResultPageController_CustomMissionData : public ::System::Object
	{
	public:
		::System::String* NumText; // 0x10
		::System::String* Text; // 0x18
		::UnityEngine::Color NumTextColor; // 0x20
		::UnityEngine::Color TextColor; // 0x30
		::System::Boolean IsComplete; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_CUSTOMMISSIONDATA__CTOR_OFFSET))(this);
		}
	};
}
