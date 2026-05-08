#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ColorModifyBlendData_TypeDefinitionIndex = 51677;

	struct alignas(8) ColorModifyBlendData
	{
		::System::Single Duration; // 0x10
		::UnityEngine::AnimationCurve* BlendAnimationCurve; // 0x18
		::System::Nullable_1<::UnityEngine::Color> BeginColor; // 0x20
		::System::Nullable_1<::UnityEngine::Vector4> BeginSccInfo; // 0x34
	};
}
