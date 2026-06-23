#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x174ECCF0)

namespace MoleMole
{
	inline static constexpr unsigned int UINounDetailWidgetController_Data_TypeDefinitionIndex = 82827;

	class UINounDetailWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* TermText; // 0x10
		::System::Boolean IsLast; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
