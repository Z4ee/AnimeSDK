#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFlowerMainListWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED9600)
#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS24_0__INITFILTER_B__9_OFFSET UNITYSDK_OFFSET(0x14ED9610)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_RightWidgetController___c__DisplayClass24_0_TypeDefinitionIndex = 77223;

	class UIFlowerMain_RightWidgetController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Func_2<::MoleMole::UIFlowerMainListWidgetController_Data*, ::System::Int32>* _getTagFromData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitFilter_b__9(::MoleMole::UIFlowerMainListWidgetController_Data* item, ::System::Int32 filter)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIFlowerMainListWidgetController_Data*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS24_0__INITFILTER_B__9_OFFSET))(this, item, filter);
		}
	};
}
