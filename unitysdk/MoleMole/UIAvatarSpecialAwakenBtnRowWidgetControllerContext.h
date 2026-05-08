#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_494;
namespace System { class String; }

#define MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167FAF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenBtnRowWidgetControllerContext_TypeDefinitionIndex = 60608;

	class UIAvatarSpecialAwakenBtnRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Name; // 0x28
		::Class_2_208CC9941471731A_494* Cfg; // 0x30
		::Class_2_1824EF69C8E376A3* AvatarData; // 0x38
		::System::Boolean IsUp; // 0x40
		::System::Boolean CanOperateAwake; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENBTNROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
