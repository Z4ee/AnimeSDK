#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIDEFENCELARGETVSETTING_METHOD_5_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x18AAD390)
#define MOLEMOLE_UIDEFENCELARGETVSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAD180)

namespace MoleMole
{
	inline static constexpr unsigned int UIDefenceLargeTVSetting_TypeDefinitionIndex = 72808;

	class UIDefenceLargeTVSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 FillCount; // 0x18
		::Il2CppArray<::UnityEngine::Color>* fillColorHSV; // 0x20
		::UnityEngine::AnimationCurve* flushCurve; // 0x28
		::System::Single flushTime; // 0x30
		::UnityEngine::Color TargetColor; // 0x34
		::UnityEngine::Color BaseColor; // 0x44
		::UnityEngine::AnimationCurve* ColorIndensityCurve; // 0x58
		::System::Single ColorIndensityLoopTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEFENCELARGETVSETTING__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_5BCE9210F4ACDD0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEFENCELARGETVSETTING_METHOD_5_5BCE9210F4ACDD0B_OFFSET))(this);
		}
	};
}
