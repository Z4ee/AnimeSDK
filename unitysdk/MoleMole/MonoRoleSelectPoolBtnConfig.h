#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOROLESELECTPOOLBTNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B40170)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRoleSelectPoolBtnConfig_TypeDefinitionIndex = 54458;

	class MonoRoleSelectPoolBtnConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* ProgressAnimCurve; // 0x18
		::System::Single Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOROLESELECTPOOLBTNCONFIG__CTOR_OFFSET))(this);
		}
	};
}
