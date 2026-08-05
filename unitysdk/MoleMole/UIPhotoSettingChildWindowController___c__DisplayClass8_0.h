#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_730A101C592B37EC;

#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F50410)
#define MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS8_0__REFRESHSELFIEMOTIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0x15F50420)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoSettingChildWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 43550;

	class UIPhotoSettingChildWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Int32 roleType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshSelfieMotionData_b__0(::Class_1_730A101C592B37EC* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_730A101C592B37EC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSETTINGCHILDWINDOWCONTROLLER___C__DISPLAYCLASS8_0__REFRESHSELFIEMOTIONDATA_B__0_OFFSET))(this, x);
		}
	};
}
