#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SIGNALCURVEPOOLENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xE084980)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalCurvePoolEntry_TypeDefinitionIndex = 70929;

	class SignalCurvePoolEntry : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::String* name; // 0x18
		::UnityEngine::AnimationCurve* curve; // 0x20
		::System::Int32 refCount; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLENTRY__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
