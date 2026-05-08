#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C2B4B123B5A9B78A;
namespace System { class String; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_BUILDRT_OFFSET UNITYSDK_OFFSET(0x15C4A9C0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x15C4A990)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_RELEASE_OFFSET UNITYSDK_OFFSET(0x15C4AAA0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x15C4A9A0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C4A9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController_UIBuddySelect_TypeDefinitionIndex = 56006;

	class UILineupSelectPageController_UIBuddySelect : public ::System::Object
	{
	public:
		::Class_2_C2B4B123B5A9B78A* _unit_k__BackingField; // 0x10
		::System::Int32 height; // 0x18
		::System::Int32 width; // 0x1C

		::System::Void _ctor(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT__CTOR_OFFSET))(this, width, height);
		}

		::Class_2_C2B4B123B5A9B78A* get_unit()
		{
			return ((::Class_2_C2B4B123B5A9B78A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_GET_UNIT_OFFSET))(this);
		}

		::System::Void set_unit(::Class_2_C2B4B123B5A9B78A* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C2B4B123B5A9B78A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_SET_UNIT_OFFSET))(this, value);
		}

		::System::Void BuildRT(::System::String* ctrlName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_BUILDRT_OFFSET))(this, ctrlName);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_RELEASE_OFFSET))(this);
		}
	};
}
