#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MONOUIIMAGEARRAY_CHILDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x114A3D30)

inline static constexpr unsigned int MonoUIImageArray_ChildData_TypeDefinitionIndex = 87167;

class MonoUIImageArray_ChildData : public ::System::Object
{
public:
	::UnityEngine::RectTransform* rectTransform; // 0x10
	::UnityEngine::UI::Image* image; // 0x18
	::UnityEngine::Vector2 basePosition; // 0x20
	::System::Single swingPhase; // 0x28
	::System::Single swingAmplitude; // 0x2C
	::System::Single swingSpeed; // 0x30
	::System::Int32 swingDirection; // 0x34
	::System::Single bouncePhase; // 0x38
	::System::Single bounceAmplitude; // 0x3C
	::System::Single bounceSpeed; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIIMAGEARRAY_CHILDDATA__CTOR_OFFSET))(this);
	}
};
