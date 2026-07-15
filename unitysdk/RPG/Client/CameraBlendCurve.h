#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERABLENDCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC4F610)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraBlendCurve_TypeDefinitionIndex = 66406;

	class CameraBlendCurve : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* CurveName; // 0x18
		::UnityEngine::AnimationCurve* Curve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERABLENDCURVE__CTOR_OFFSET))(this);
		}
	};
}
