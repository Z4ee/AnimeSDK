#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CURVEANDVALUE_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x170D5290)
#define MOLEMOLE_CURVEANDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x170D5280)

namespace MoleMole
{
	inline static constexpr unsigned int CurveAndValue_TypeDefinitionIndex = 42392;

	class CurveAndValue : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x10
		::System::Single Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEANDVALUE__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEANDVALUE_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
		}
	};
}
