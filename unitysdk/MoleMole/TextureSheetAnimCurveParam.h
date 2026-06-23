#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_TEXTURESHEETANIMCURVEPARAM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1917B220)
#define MOLEMOLE_TEXTURESHEETANIMCURVEPARAM_GET_VALID_OFFSET UNITYSDK_OFFSET(0x1917B1C0)
#define MOLEMOLE_TEXTURESHEETANIMCURVEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1917B310)

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetAnimCurveParam_TypeDefinitionIndex = 74106;

	class TextureSheetAnimCurveParam : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x10
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETANIMCURVEPARAM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETANIMCURVEPARAM_GET_VALID_OFFSET))(this);
		}

		::System::Single Evaluate(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETANIMCURVEPARAM_EVALUATE_OFFSET))(this, time);
		}
	};
}
