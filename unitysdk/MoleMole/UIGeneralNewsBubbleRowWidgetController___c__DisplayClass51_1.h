#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass51_0; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS51_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB88E0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS51_1__PLAYSOUND_B__1_OFFSET UNITYSDK_OFFSET(0x18EB88F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass51_1_TypeDefinitionIndex = 43594;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass51_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController___c__DisplayClass51_0* CS___8__locals1; // 0x10
		::System::Single start; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS51_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySound_b__1(::System::Object* cookie, ::AkCallbackType type, ::AkCallbackInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS51_1__PLAYSOUND_B__1_OFFSET))(this, cookie, type, info);
		}
	};
}
