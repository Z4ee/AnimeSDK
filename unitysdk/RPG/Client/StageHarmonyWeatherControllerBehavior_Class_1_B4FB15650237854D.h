#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CLASS_1_B4FB15650237854D__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E0050)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyWeatherControllerBehavior_Class_1_B4FB15650237854D_TypeDefinitionIndex = 70985;

	class StageHarmonyWeatherControllerBehavior_Class_1_B4FB15650237854D : public ::System::Object
	{
	public:
		::UnityEngine::Gradient* IEHAMAMNNKK; // 0x10
		::UnityEngine::AnimationCurve* GIAABPCBIND; // 0x18
		::UnityEngine::Vector4 JJHOLPJBDCJ; // 0x20
		::UnityEngine::Vector3 DBGJPFGNMHF; // 0x30
		::UnityEngine::Vector3 OPFLAACBAEH; // 0x3C
		::System::Boolean JOLIEPNADGH; // 0x48
		::UnityEngine::Color JOPGBJEPDAG; // 0x4C
		::UnityEngine::Color FFNKAKKGKLG; // 0x5C
		::UnityEngine::Vector4 GDOAKBIBAAM; // 0x6C
		::UnityEngine::Vector4 PCJOOMGNGML; // 0x7C
		::UnityEngine::Vector4 NONHKHHLHPI; // 0x8C
		::UnityEngine::Vector3 KKLPAEJBEGK; // 0x9C
		::UnityEngine::Vector4 OOKMFMMOFOO; // 0xA8
		::UnityEngine::Vector2 MEACDJBGELB; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CLASS_1_B4FB15650237854D__CTOR_OFFSET))(this);
		}
	};
}
