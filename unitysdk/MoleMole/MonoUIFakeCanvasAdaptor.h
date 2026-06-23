#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/MonoUILayoutAdaptorBase.h"

namespace MoleMole { class UIAdaptorFakeCanvasScaler; }
namespace MoleMole { class UIFakeCanvasScaler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIFAKECANVASADAPTOR_DOINITLAYOUT_OFFSET UNITYSDK_OFFSET(0x10D6F570)
#define MOLEMOLE_MONOUIFAKECANVASADAPTOR_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10D6F7A0)
#define MOLEMOLE_MONOUIFAKECANVASADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET UNITYSDK_OFFSET(0x10D6F490)
#define MOLEMOLE_MONOUIFAKECANVASADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET UNITYSDK_OFFSET(0x10D6F3F0)
#define MOLEMOLE_MONOUIFAKECANVASADAPTOR_RELOADDATAFROMJSON_OFFSET UNITYSDK_OFFSET(0x10D6FF30)
#define MOLEMOLE_MONOUIFAKECANVASADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10D70260)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIFakeCanvasAdaptor_TypeDefinitionIndex = 39888;

	class MonoUIFakeCanvasAdaptor : public ::MoleMole::MonoUILayoutAdaptorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::UIFakeCanvasScaler*>* PlatformUIParams; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPlatformUIParamsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET))(this);
		}

		::System::Boolean IsContainPlatformUIParams(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean DoInitLayout(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR_DOINITLAYOUT_OFFSET))(this, adaptorShowType);
		}

		::System::Void ReloadDataFromJson(::MoleMole::AdaptorShowType type, ::System::String*& adaptorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AdaptorShowType, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR_RELOADDATAFROMJSON_OFFSET))(this, type, adaptorInfo);
		}

		::System::Void InitTransform(::UnityEngine::RectTransform* rectTransform, ::MoleMole::UIAdaptorFakeCanvasScaler* adaptorParams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::MoleMole::UIAdaptorFakeCanvasScaler*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR_INITTRANSFORM_OFFSET))(this, rectTransform, adaptorParams);
		}
	};
}
