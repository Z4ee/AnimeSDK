#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWidgetController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16409F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseNormalRowWidgetController_Formatter_TypeDefinitionIndex = 45517;

	class UIInLevelPauseNormalRowWidgetController_Formatter : public ::System::Object
	{
	public:
		::System::String* titleText; // 0x10
		::System::String* titleIcon; // 0x18
		::System::Func_2<::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*>* itemCreateFunc; // 0x20
		::System::Boolean showItem; // 0x28
		::System::Boolean showTitleIcon; // 0x29
		::System::Boolean showNum; // 0x2A
		::System::Int32 numLeft; // 0x2C
		::System::Int32 numRight; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSENORMALROWWIDGETCONTROLLER_FORMATTER__CTOR_OFFSET))(this);
		}
	};
}
