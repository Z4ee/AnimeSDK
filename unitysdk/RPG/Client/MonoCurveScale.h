#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOCURVESCALE_GENERATEREVERSECURVE_OFFSET UNITYSDK_OFFSET(0xD742AB0)
#define RPG_CLIENT_MONOCURVESCALE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD742920)
#define RPG_CLIENT_MONOCURVESCALE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD742A30)
#define RPG_CLIENT_MONOCURVESCALE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD742890)
#define RPG_CLIENT_MONOCURVESCALE__CTOR_OFFSET UNITYSDK_OFFSET(0xD742F20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveScale_TypeDefinitionIndex = 71015;

	class MonoCurveScale : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean reverseSample; // 0x18
		::UnityEngine::Vector3 initScale; // 0x1C
		::UnityEngine::AnimationCurve* animationCurve; // 0x28
		::UnityEngine::AnimationCurve* reverseCurve; // 0x30
		::System::Single NOFGCMFKJKD; // 0x38
		::System::Single OEOCPKCCMAH; // 0x3C
		::System::Boolean EFLGBGIKMKP; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE_ONDISABLE_OFFSET))(this);
		}

		::System::Void GenerateReverseCurve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE_GENERATEREVERSECURVE_OFFSET))(this);
		}
	};
}
