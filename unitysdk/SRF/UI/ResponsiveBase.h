#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define SRF_UI_RESPONSIVEBASE_DOREFRESH_OFFSET UNITYSDK_OFFSET(0x1AD259D0)
#define SRF_UI_RESPONSIVEBASE_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AD25930)
#define SRF_UI_RESPONSIVEBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD25980)
#define SRF_UI_RESPONSIVEBASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1AD25990)
#define SRF_UI_RESPONSIVEBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD259A0)
#define SRF_UI_RESPONSIVEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD259E0)

namespace SRF::UI
{
	inline static constexpr unsigned int ResponsiveBase_TypeDefinitionIndex = 33576;

	class ResponsiveBase : public ::SRF::SRMonoBehaviour
	{
	public:
		::System::Boolean _queueRefresh; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVEBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_RectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVEBASE_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVEBASE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVEBASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVEBASE_UPDATE_OFFSET))(this);
		}

		::System::Void DoRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVEBASE_DOREFRESH_OFFSET))(this);
		}
	};
}
