#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C2B4B123B5A9B78A;
namespace MoleMole { class UIAvatarLightSetting; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_BUILDRTWITHCUSTOMWH_OFFSET UNITYSDK_OFFSET(0x15F07C70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_BUILDRT_OFFSET UNITYSDK_OFFSET(0x15F07AA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x15F07E70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_GET_COMMONLIGHTSETTING_OFFSET UNITYSDK_OFFSET(0x15F07580)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_GET_SELFLIGHTSETTING_OFFSET UNITYSDK_OFFSET(0x15F075C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x15F07560)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_GET_USESELFLIGHTSETTING_OFFSET UNITYSDK_OFFSET(0x15F075A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_MODIFYSELFLIGHTSETTING_OFFSET UNITYSDK_OFFSET(0x15F07790)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_SET_COMMONLIGHTSETTING_OFFSET UNITYSDK_OFFSET(0x15F07590)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_SET_SELFLIGHTSETTING_OFFSET UNITYSDK_OFFSET(0x15F075D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x15F07570)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_SET_USESELFLIGHTSETTING_OFFSET UNITYSDK_OFFSET(0x15F075B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_TRIGGEROVERRIDELIGHTSETTING_OFFSET UNITYSDK_OFFSET(0x15F07730)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15F075E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_UIRoleInfo_TypeDefinitionIndex = 41818;

	class UIGalgamePageController_UIRoleInfo : public ::System::Object
	{
	public:
		::Class_2_C2B4B123B5A9B78A* _unit_k__BackingField; // 0x10
		::MoleMole::UIAvatarLightSetting* _commonLightSetting_k__BackingField; // 0x18
		::MoleMole::UIAvatarLightSetting* _SelfLightSetting_k__BackingField; // 0x20
		::System::Int32 width; // 0x28
		::System::Boolean _UseSelfLightSetting_k__BackingField; // 0x2C
		::System::Boolean isUsingCustomWH; // 0x2D
		::System::Int32 height; // 0x30

		::System::Void _ctor(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO__CTOR_OFFSET))(this, width, height);
		}

		::Class_2_C2B4B123B5A9B78A* get_unit()
		{
			return ((::Class_2_C2B4B123B5A9B78A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_GET_UNIT_OFFSET))(this);
		}

		::System::Void set_unit(::Class_2_C2B4B123B5A9B78A* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C2B4B123B5A9B78A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_SET_UNIT_OFFSET))(this, value);
		}

		::MoleMole::UIAvatarLightSetting* get_commonLightSetting()
		{
			return ((::MoleMole::UIAvatarLightSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_GET_COMMONLIGHTSETTING_OFFSET))(this);
		}

		::System::Void set_commonLightSetting(::MoleMole::UIAvatarLightSetting* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_SET_COMMONLIGHTSETTING_OFFSET))(this, value);
		}

		::System::Boolean get_UseSelfLightSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_GET_USESELFLIGHTSETTING_OFFSET))(this);
		}

		::System::Void set_UseSelfLightSetting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_SET_USESELFLIGHTSETTING_OFFSET))(this, value);
		}

		::MoleMole::UIAvatarLightSetting* get_SelfLightSetting()
		{
			return ((::MoleMole::UIAvatarLightSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_GET_SELFLIGHTSETTING_OFFSET))(this);
		}

		::System::Void set_SelfLightSetting(::MoleMole::UIAvatarLightSetting* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_SET_SELFLIGHTSETTING_OFFSET))(this, value);
		}

		::System::Void TriggerOverrideLightSetting(::MoleMole::UIAvatarLightSetting* selfLightSetting)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_TRIGGEROVERRIDELIGHTSETTING_OFFSET))(this, selfLightSetting);
		}

		::System::Void BuildRT(::System::String* ctrlName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_BUILDRT_OFFSET))(this, ctrlName);
		}

		::System::Void BuildRTWithCustomWH(::System::String* ctrlName, ::System::Single galStandardScreenSizeX, ::System::Single galStandardScreenSizeY)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_BUILDRTWITHCUSTOMWH_OFFSET))(this, ctrlName, galStandardScreenSizeX, galStandardScreenSizeY);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_CLEAR_OFFSET))(this);
		}

		::System::Void ModifySelfLightSetting(::System::Boolean useLight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_UIROLEINFO_MODIFYSELFLIGHTSETTING_OFFSET))(this, useLight);
		}
	};
}
