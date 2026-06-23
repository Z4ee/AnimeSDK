#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoMaskSlider_Direction.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOMASKSLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x14196EC0)
#define MOLEMOLE_MONOMASKSLIDER_GETRATIO_OFFSET UNITYSDK_OFFSET(0x141973A0)
#define MOLEMOLE_MONOMASKSLIDER_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x14196F10)
#define MOLEMOLE_MONOMASKSLIDER_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x14197020)
#define MOLEMOLE_MONOMASKSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x14197410)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaskSlider_TypeDefinitionIndex = 75165;

	class MonoMaskSlider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* maskRect; // 0x18
		::UnityEngine::RectTransform* fillRect; // 0x20
		::MoleMole::MonoMaskSlider_Direction dirction; // 0x28
		::System::Single sliderGrowTime; // 0x2C
		::System::Single minValue; // 0x30
		::System::Single value; // 0x34
		::System::Single maxValue; // 0x38
		::UnityEngine::Vector2 maskAnchoredPosition; // 0x3C
		::UnityEngine::Vector2 fillAnchoredPosition; // 0x44
		::UnityEngine::Vector2 fillSizeDelta; // 0x4C
		::UnityEngine::Vector2 maskSizeDelta; // 0x54
		::System::Action_2<::System::Single, ::System::Single>* onValueChanged; // 0x60
		::System::Action* refreshRender; // 0x68
		::System::Boolean isInit; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMASKSLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMASKSLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void Initialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMASKSLIDER_INITIALIZED_OFFSET))(this);
		}

		::System::Void UpdateValue(::System::Single value, ::System::Single maxValue, ::System::Single minValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMASKSLIDER_UPDATEVALUE_OFFSET))(this, value, maxValue, minValue);
		}

		::System::Single GetRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMASKSLIDER_GETRATIO_OFFSET))(this);
		}
	};
}
