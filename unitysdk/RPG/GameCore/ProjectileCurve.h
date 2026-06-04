#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_GAMECORE_PROJECTILECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE74CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileCurve_TypeDefinitionIndex = 51178;

	class ProjectileCurve : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::AnimationCurve* Curve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILECURVE__CTOR_OFFSET))(this);
		}
	};
}
