#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D036F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityRunState_TypeDefinitionIndex = 56760;

	class ConfigEntityRunState : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* TiltCurve; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TiltLevDic; // 0x18
		::UnityEngine::AnimationCurve* RecoverCurve; // 0x20
		::System::Single RecoverDuration; // 0x28
		::System::Single MaxTiltAngle; // 0x2C
		::System::Single TiltDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATE__CTOR_OFFSET))(this);
		}
	};
}
