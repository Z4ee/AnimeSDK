#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDA1C0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GENERATEBADBUBBLECONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x15EDA1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass70_0_TypeDefinitionIndex = 66476;

	class UICinemaSinglePlayWidgetController___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x10
		::System::Func_1<::System::Int32>* onClick; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GenerateBadBubbleContext_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GENERATEBADBUBBLECONTEXT_B__0_OFFSET))(this);
		}
	};
}
