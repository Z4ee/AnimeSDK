#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CLASS_1_B4FB15650237854D__CTOR_OFFSET UNITYSDK_OFFSET(0x17B57F90)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyWeatherControllerBehavior_Class_1_B4FB15650237854D_TypeDefinitionIndex = 67817;

	class StageHarmonyWeatherControllerBehavior_Class_1_B4FB15650237854D : public ::System::Object
	{
	public:
		::UnityEngine::Gradient* Field_1_0; // 0x10
		::UnityEngine::AnimationCurve* Field_1_1; // 0x18
		::System::Boolean Field_1_2; // 0x20
		::UnityEngine::Vector3 Field_1_3; // 0x24
		::UnityEngine::Vector4 Field_1_4; // 0x30
		::UnityEngine::Vector4 Field_1_5; // 0x40
		::UnityEngine::Vector4 Field_1_6; // 0x50
		::UnityEngine::Vector3 Field_1_7; // 0x60
		::UnityEngine::Color Field_1_8; // 0x6C
		::UnityEngine::Vector2 Field_1_9; // 0x7C
		::UnityEngine::Vector4 Field_1_10; // 0x84
		::UnityEngine::Color Field_1_11; // 0x94
		::UnityEngine::Vector4 Field_1_12; // 0xA4
		::UnityEngine::Vector3 Field_1_13; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CLASS_1_B4FB15650237854D__CTOR_OFFSET))(this);
		}
	};
}
