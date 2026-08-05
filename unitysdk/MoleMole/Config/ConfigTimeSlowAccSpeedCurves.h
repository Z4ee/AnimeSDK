#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGTIMESLOWACCSPEEDCURVES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B560D30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTimeSlowAccSpeedCurves_TypeDefinitionIndex = 91079;

	class ConfigTimeSlowAccSpeedCurves : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* CurveDic; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMESLOWACCSPEEDCURVES__CTOR_OFFSET))(this);
		}
	};
}
