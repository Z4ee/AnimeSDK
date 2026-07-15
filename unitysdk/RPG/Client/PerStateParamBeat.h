#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_PERSTATEPARAMBEAT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F386D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PerStateParamBeat_TypeDefinitionIndex = 67641;

	class PerStateParamBeat : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* StateAnimCurve; // 0x10
		::UnityEngine::Texture2D* StateTex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSTATEPARAMBEAT__CTOR_OFFSET))(this);
		}
	};
}
