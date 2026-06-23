#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define MONOUIVHSDIALOGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xD571D60)

inline static constexpr unsigned int MonoUIVHSDialogParam_TypeDefinitionIndex = 70933;

class MonoUIVHSDialogParam : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::RectTransform* SelectObject; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIVHSDIALOGPARAM__CTOR_OFFSET))(this);
	}
};
