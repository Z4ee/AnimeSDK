#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/RenderLayerOrderMode.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IRenderElement; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define FOUNDATION_RENDERLAYERCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1E2941A0)
#define FOUNDATION_RENDERLAYERCONFIG_FOUNDATION_IRENDERLAYERCONFIG_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1E294330)
#define FOUNDATION_RENDERLAYERCONFIG_FOUNDATION_IRENDERLAYERCONFIG_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1E294270)
#define FOUNDATION_RENDERLAYERCONFIG_FOUNDATION_IRENDERLAYERCONFIG_GET_MAX_OFFSET UNITYSDK_OFFSET(0x1E2942F0)
#define FOUNDATION_RENDERLAYERCONFIG_FOUNDATION_IRENDERLAYERCONFIG_GET_MIN_OFFSET UNITYSDK_OFFSET(0x1E2942B0)
#define FOUNDATION_RENDERLAYERCONFIG_FOUNDATION_IRENDERLAYERCONFIG_GET_ORDERMODE_OFFSET UNITYSDK_OFFSET(0x1E294370)
#define FOUNDATION_RENDERLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E294260)

namespace Foundation
{
	inline static constexpr unsigned int RenderLayerConfig_TypeDefinitionIndex = 89410;

	class RenderLayerConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<::Foundation::IRenderElement*>* Rule; // 0x10
		::System::Int32 Max; // 0x18
		::System::Int32 Layer; // 0x1C
		::System::Int32 Min; // 0x20
		::Foundation::RenderLayerOrderMode OrderMode; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::Foundation::RenderLayerConfig* Create(::System::Int32 layer, ::System::Int32 min, ::System::Int32 max, ::System::Collections::Generic::IComparer_1<::Foundation::IRenderElement*>* comparer, ::Foundation::RenderLayerOrderMode orderMode)
		{
			return ((::Foundation::RenderLayerConfig*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IComparer_1<::Foundation::IRenderElement*>*, ::Foundation::RenderLayerOrderMode))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERCONFIG_CREATE_OFFSET))(layer, min, max, comparer, orderMode);
		}

		::System::Int32 Foundation_IRenderLayerConfig_get_Layer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERCONFIG_FOUNDATION_IRENDERLAYERCONFIG_GET_LAYER_OFFSET))(this);
		}

		::System::Int32 Foundation_IRenderLayerConfig_get_Min()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERCONFIG_FOUNDATION_IRENDERLAYERCONFIG_GET_MIN_OFFSET))(this);
		}

		::System::Int32 Foundation_IRenderLayerConfig_get_Max()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERCONFIG_FOUNDATION_IRENDERLAYERCONFIG_GET_MAX_OFFSET))(this);
		}

		::System::Collections::Generic::IComparer_1<::Foundation::IRenderElement*>* Foundation_IRenderLayerConfig_get_Comparer()
		{
			return ((::System::Collections::Generic::IComparer_1<::Foundation::IRenderElement*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERCONFIG_FOUNDATION_IRENDERLAYERCONFIG_GET_COMPARER_OFFSET))(this);
		}

		::Foundation::RenderLayerOrderMode Foundation_IRenderLayerConfig_get_OrderMode()
		{
			return ((::Foundation::RenderLayerOrderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERCONFIG_FOUNDATION_IRENDERLAYERCONFIG_GET_ORDERMODE_OFFSET))(this);
		}
	};
}
