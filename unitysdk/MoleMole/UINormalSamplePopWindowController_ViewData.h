#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UINORMALSAMPLEPOPWINDOWCONTROLLER_VIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1530EFF0)

namespace MoleMole
{
	inline static constexpr unsigned int UINormalSamplePopWindowController_ViewData_TypeDefinitionIndex = 68773;

	class UINormalSamplePopWindowController_ViewData : public ::System::Object
	{
	public:
		::System::String* InputText1; // 0x10
		::System::String* TextmapKey; // 0x18
		::System::String* InputText2; // 0x20
		::System::Int32 ItemID; // 0x28
		::System::Int32 EntityID; // 0x2C
		::System::Int32 SomeValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINORMALSAMPLEPOPWINDOWCONTROLLER_VIEWDATA__CTOR_OFFSET))(this);
		}
	};
}
