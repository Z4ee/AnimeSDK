#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOUICURVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1916F540)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUICurveData_TypeDefinitionIndex = 85922;

	class MonoUICurveData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICURVEDATA__CTOR_OFFSET))(this);
		}
	};
}
