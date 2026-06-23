#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_UIANIMATIONCURVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A077100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIAnimationCurveConfig_TypeDefinitionIndex = 53086;

	class UIAnimationCurveConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* FadeInCurves; // 0x58
		::System::Single TotalTime; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* AnimationDelay; // 0x68
		::System::Single holdTime; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATIONCURVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
