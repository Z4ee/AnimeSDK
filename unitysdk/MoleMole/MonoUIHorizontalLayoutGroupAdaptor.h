#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/MonoUILayoutAdaptorBase.h"

namespace MoleMole { class HorizontalLayoutGroupAdaptor; }
namespace MoleMole { class UIHorizontalLayoutGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR_DOINITLAYOUT_OFFSET UNITYSDK_OFFSET(0x11903150)
#define MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR_INITLAYOUTELEMENT_OFFSET UNITYSDK_OFFSET(0x11903380)
#define MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET UNITYSDK_OFFSET(0x11903070)
#define MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET UNITYSDK_OFFSET(0x11902FD0)
#define MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR_RELOADDATAFROMJSON_OFFSET UNITYSDK_OFFSET(0x11903660)
#define MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11903910)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIHorizontalLayoutGroupAdaptor_TypeDefinitionIndex = 40650;

	class MonoUIHorizontalLayoutGroupAdaptor : public ::MoleMole::MonoUILayoutAdaptorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::HorizontalLayoutGroupAdaptor*>* PlatformUIParams; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPlatformUIParamsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET))(this);
		}

		::System::Boolean IsContainPlatformUIParams(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean DoInitLayout(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR_DOINITLAYOUT_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean InitLayoutElement(::UnityEngine::UI::HorizontalLayoutGroup* horizontalLayout, ::MoleMole::UIHorizontalLayoutGroup* layoutElement)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*, ::MoleMole::UIHorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR_INITLAYOUTELEMENT_OFFSET))(this, horizontalLayout, layoutElement);
		}

		::System::Void ReloadDataFromJson(::MoleMole::AdaptorShowType type, ::System::String*& adaptorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AdaptorShowType, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIHORIZONTALLAYOUTGROUPADAPTOR_RELOADDATAFROMJSON_OFFSET))(this, type, adaptorInfo);
		}
	};
}
