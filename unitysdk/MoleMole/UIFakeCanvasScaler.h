#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIAdaptor.h"

namespace MoleMole { class UIAdaptorFakeCanvasScaler; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIFAKECANVASSCALER_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x170D05A0)
#define MOLEMOLE_UIFAKECANVASSCALER_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x170D05C0)
#define MOLEMOLE_UIFAKECANVASSCALER_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x170D0620)
#define MOLEMOLE_UIFAKECANVASSCALER__CTOR_OFFSET UNITYSDK_OFFSET(0x170D0890)

namespace MoleMole
{
	inline static constexpr unsigned int UIFakeCanvasScaler_TypeDefinitionIndex = 86464;

	class UIFakeCanvasScaler : public ::MoleMole::MonoUIAdaptor
	{
	public:
		::MoleMole::UIAdaptorFakeCanvasScaler* adaptorFakeCanvasScaler; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFAKECANVASSCALER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFAKECANVASSCALER_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFAKECANVASSCALER_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Void UpdateParams(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFAKECANVASSCALER_UPDATEPARAMS_OFFSET))(this, rectTransform);
		}
	};
}
