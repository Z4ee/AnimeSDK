#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D4602BB15CF6D7C1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_1_OFFSET UNITYSDK_OFFSET(0x195505E0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x195504A0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYSCALEFROM_OFFSET UNITYSDK_OFFSET(0x19550720)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19550480)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x19550780)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_REINITFROMRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19550160)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19550490)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19550150)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdataporRectTransform_TypeDefinitionIndex = 48720;

	class UIAdataporRectTransform : public ::System::Object
	{
	public:
		::System::Boolean CloseRotationControl; // 0x10
		::System::Boolean _valueChanged_k__BackingField; // 0x11
		::System::Boolean CloseScaleControl; // 0x12
		::System::Boolean ClosePositionControl; // 0x13
		::UnityEngine::Vector2 pivot; // 0x14
		::UnityEngine::Vector2 anchorMin; // 0x1C
		::UnityEngine::Vector2 anchorMax; // 0x24
		::UnityEngine::Vector2 offsetMax; // 0x2C
		::UnityEngine::Vector3 localScale; // 0x34
		::UnityEngine::Quaternion rotation; // 0x40
		::UnityEngine::Vector2 anchoredPosition; // 0x50
		::UnityEngine::Vector2 offsetMin; // 0x58
		::UnityEngine::Quaternion localRotation; // 0x60

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

		::System::Void CopyPositionFrom_1(::Struct_2_D4602BB15CF6D7C1 other)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D4602BB15CF6D7C1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_1_OFFSET))(this, other);
		}

		::System::Void CopyScaleFrom(::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYSCALEFROM_OFFSET))(this, scale);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_MARKVALUECHANGE_OFFSET))(this);
		}
	};
}
