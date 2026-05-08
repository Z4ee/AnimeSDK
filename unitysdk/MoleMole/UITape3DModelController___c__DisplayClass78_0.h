#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITape3DModelController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14815050)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS78_0__EASINGSLIDE_B__0_OFFSET UNITYSDK_OFFSET(0x14815060)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS78_0__EASINGSLIDE_B__1_OFFSET UNITYSDK_OFFSET(0x148150B0)

namespace MoleMole
{
	inline static constexpr unsigned int UITape3DModelController___c__DisplayClass78_0_TypeDefinitionIndex = 77369;

	class UITape3DModelController___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::System::Action* onEasingComplete; // 0x10
		::System::Action_1<::MoleMole::UITape3DModelController*>* onEasing; // 0x18
		::MoleMole::UITape3DModelController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Void _EasingSlide_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS78_0__EASINGSLIDE_B__0_OFFSET))(this);
		}

		::System::Void _EasingSlide_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS78_0__EASINGSLIDE_B__1_OFFSET))(this);
		}
	};
}
