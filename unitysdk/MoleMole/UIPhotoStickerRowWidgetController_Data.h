#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7807B2B04302CD7B_3;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15317500)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoStickerRowWidgetController_Data_TypeDefinitionIndex = 82443;

	class UIPhotoStickerRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_1_7807B2B04302CD7B_3* StickerData; // 0x10
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnDragInScrollView; // 0x18
		::System::Action_2<::System::Int32, ::UnityEngine::Vector3>* OnStartDragOutScrollView; // 0x20
		::System::Boolean Pressed; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
