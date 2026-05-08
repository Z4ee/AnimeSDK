#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/MonoUILayoutAdaptorBase.h"

namespace MoleMole { class GridLayoutGroupAdaptor; }
namespace MoleMole { class UIGridLayoutGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class GridLayoutGroup; }

#define MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR_DOINITLAYOUT_OFFSET UNITYSDK_OFFSET(0x125E8A10)
#define MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR_INITGRIDLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x125E8C40)
#define MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET UNITYSDK_OFFSET(0x125E8930)
#define MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET UNITYSDK_OFFSET(0x125E8890)
#define MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR_RELOADDATAFROMJSON_OFFSET UNITYSDK_OFFSET(0x125E9040)
#define MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x125E9340)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGridLayoutGroupAdaptor_TypeDefinitionIndex = 50456;

	class MonoUIGridLayoutGroupAdaptor : public ::MoleMole::MonoUILayoutAdaptorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::GridLayoutGroupAdaptor*>* PlatformUIParams; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPlatformUIParamsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET))(this);
		}

		::System::Boolean IsContainPlatformUIParams(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean DoInitLayout(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR_DOINITLAYOUT_OFFSET))(this, adaptorShowType);
		}

		::System::Void ReloadDataFromJson(::MoleMole::AdaptorShowType type, ::System::String*& adaptorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AdaptorShowType, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR_RELOADDATAFROMJSON_OFFSET))(this, type, adaptorInfo);
		}

		::System::Boolean InitGridLayoutGroup(::UnityEngine::UI::GridLayoutGroup* gridLayoutGroup, ::MoleMole::UIGridLayoutGroup* adaptorParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup*, ::MoleMole::UIGridLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGRIDLAYOUTGROUPADAPTOR_INITGRIDLAYOUTGROUP_OFFSET))(this, gridLayoutGroup, adaptorParams);
		}
	};
}
