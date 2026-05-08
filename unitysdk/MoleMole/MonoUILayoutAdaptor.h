#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/MonoUILayoutAdaptorBase.h"
#include "unitysdk/UnityEngine/DrivenTransformProperties.h"

namespace MoleMole { class UIAdaptorParams; }
namespace MoleMole { class UIAdataporRectTransform; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUILAYOUTADAPTOR_AUTOADAPTORUIBYSCREENRATE_OFFSET UNITYSDK_OFFSET(0x15BA1E90)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_CALDRIVENTRANSFORMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x15BA2D60)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_DOINITLAYOUT_OFFSET UNITYSDK_OFFSET(0x15BA13C0)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_FORCEREFRESHLAYOUT_OFFSET UNITYSDK_OFFSET(0x15BA1340)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15BA16B0)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET UNITYSDK_OFFSET(0x15BA1260)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET UNITYSDK_OFFSET(0x15BA11C0)
#define MOLEMOLE_MONOUILAYOUTADAPTOR_RELOADDATAFROMJSON_OFFSET UNITYSDK_OFFSET(0x15BA2A60)
#define MOLEMOLE_MONOUILAYOUTADAPTOR__CALDRIVENTRANSFORMPROPERTIES_G__CANBEIGNORE_10_0_OFFSET UNITYSDK_OFFSET(0x15BA34B0)
#define MOLEMOLE_MONOUILAYOUTADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA3620)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUILayoutAdaptor_TypeDefinitionIndex = 77305;

	class MonoUILayoutAdaptor : public ::MoleMole::MonoUILayoutAdaptorBase
	{
	public:
		::System::Boolean EnableActiveControl; // 0x88
		::System::Boolean isAutoAdaptorUIForUnMobile; // 0x89
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::UIAdaptorParams*>* PlatformUIParams; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPlatformUIParamsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET))(this);
		}

		::System::Boolean IsContainPlatformUIParams(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean ForceRefreshLayout(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_FORCEREFRESHLAYOUT_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean DoInitLayout(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_DOINITLAYOUT_OFFSET))(this, adaptorShowType);
		}

		::System::Void ReloadDataFromJson(::MoleMole::AdaptorShowType type, ::System::String*& adaptorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AdaptorShowType, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_RELOADDATAFROMJSON_OFFSET))(this, type, adaptorInfo);
		}

		::System::Void InitTransform(::UnityEngine::RectTransform* rectTransform, ::MoleMole::UIAdataporRectTransform* adaptorParams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::MoleMole::UIAdataporRectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_INITTRANSFORM_OFFSET))(this, rectTransform, adaptorParams);
		}

		::UnityEngine::DrivenTransformProperties CalDrivenTransformProperties(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::UnityEngine::DrivenTransformProperties(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_CALDRIVENTRANSFORMPROPERTIES_OFFSET))(this, rectTransform);
		}

		::System::Void AutoAdaptorUIByScreenRate(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR_AUTOADAPTORUIBYSCREENRATE_OFFSET))(this, rectTransform);
		}

		::System::Boolean _CalDrivenTransformProperties_g__CanBeIgnore_10_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTOR__CALDRIVENTRANSFORMPROPERTIES_G__CANBEIGNORE_10_0_OFFSET))(this);
		}
	};
}
