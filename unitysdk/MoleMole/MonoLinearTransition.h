#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/UI/Extension/UILinearTransition_TransitionMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILinearTransition; }

#define MOLEMOLE_MONOLINEARTRANSITION_REFRESH_OFFSET UNITYSDK_OFFSET(0x125E4C00)
#define MOLEMOLE_MONOLINEARTRANSITION_UPDATE_OFFSET UNITYSDK_OFFSET(0x125E4BB0)
#define MOLEMOLE_MONOLINEARTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x125E4EF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLinearTransition_TypeDefinitionIndex = 40643;

	class MonoLinearTransition : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILinearTransition*>* controlLinearTransitions; // 0x18
		::UnityEngine::UI::Extension::UILinearTransition_TransitionMode transitionMode; // 0x20
		::UnityEngine::Vector2 transitionPositions1; // 0x24
		::System::Single transitionAngle1; // 0x2C
		::UnityEngine::Vector2 transitionPositions2; // 0x30
		::System::Single transitionAngle2; // 0x38
		::System::Single targetPosition3; // 0x3C
		::System::Single targetAngle3; // 0x40
		::System::Single lineSoftness3; // 0x44
		::System::Single targetPosition4; // 0x48
		::System::Single targetAngle4; // 0x4C
		::System::Single lineSoftness4; // 0x50
		::System::Single transitionRate3; // 0x54
		::System::Single transitionRate4; // 0x58
		::System::Boolean invert2; // 0x5C
		::System::Single targetPosition1; // 0x60
		::System::Single targetAngle1; // 0x64
		::System::Single lineSoftness1; // 0x68
		::System::Single targetPosition2; // 0x6C
		::System::Single targetAngle2; // 0x70
		::System::Single lineSoftness2; // 0x74
		::System::Single transitionRate1; // 0x78
		::System::Single transitionRate2; // 0x7C
		::System::Boolean invert1; // 0x80
		::System::Boolean edgeStart; // 0x81
		::System::Boolean edgeEnd; // 0x82

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINEARTRANSITION__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINEARTRANSITION_UPDATE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINEARTRANSITION_REFRESH_OFFSET))(this);
		}
	};
}
