#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x183EC4B0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x183EC490)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x183EC5F0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_REINITFROMRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x183EC160)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x183EC4A0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x183EC150)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdataporRectTransform_TypeDefinitionIndex = 77715;

	class UIAdataporRectTransform : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 offsetMin; // 0x10
		::UnityEngine::Vector2 anchorMax; // 0x18
		::System::Boolean _valueChanged_k__BackingField; // 0x20
		::System::Boolean CloseScaleControl; // 0x21
		::System::Boolean CloseRotationControl; // 0x22
		::System::Boolean ClosePositionControl; // 0x23
		::UnityEngine::Vector2 anchoredPosition; // 0x24
		::UnityEngine::Vector2 pivot; // 0x2C
		::UnityEngine::Quaternion localRotation; // 0x34
		::UnityEngine::Quaternion rotation; // 0x44
		::UnityEngine::Vector2 anchorMin; // 0x54
		::UnityEngine::Vector2 offsetMax; // 0x5C
		::UnityEngine::Vector3 localScale; // 0x64

		::System::Void _ctor(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM__CTOR_OFFSET))(this, rectTransform);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Boolean ReInitFromRectTransform(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_REINITFROMRECTTRANSFORM_OFFSET))(this, rectTransform);
		}

		::System::Void CopyPositionFrom(::MoleMole::UIAdataporRectTransform* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_OFFSET))(this, other);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_MARKVALUECHANGE_OFFSET))(this);
		}
	};
}
