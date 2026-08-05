#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS546_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1802D9E0)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS546_0__PLAYCLOSEANIM_INTERNAL_B__0_OFFSET UNITYSDK_OFFSET(0x1802D9F0)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS546_0__PLAYCLOSEANIM_INTERNAL_B__1_OFFSET UNITYSDK_OFFSET(0x1802DA10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass546_0_TypeDefinitionIndex = 80104;

	class UIBaseController___c__DisplayClass546_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS546_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCloseAnim_Internal_b__0(::System::String* backAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS546_0__PLAYCLOSEANIM_INTERNAL_B__0_OFFSET))(this, backAnim);
		}

		::System::Void _PlayCloseAnim_Internal_b__1(::System::String* backAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS546_0__PLAYCLOSEANIM_INTERNAL_B__1_OFFSET))(this, backAnim);
		}
	};
}
