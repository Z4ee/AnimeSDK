#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CLASS_1_B4FB15650237854D__CTOR_OFFSET UNITYSDK_OFFSET(0xE116B50)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyWeatherControllerBehavior_Class_1_B4FB15650237854D_TypeDefinitionIndex = 71017;

	class StageHarmonyWeatherControllerBehavior_Class_1_B4FB15650237854D : public ::System::Object
	{
	public:
		::UnityEngine::Gradient* IEHAMAMNNKK; // 0x10
		::UnityEngine::AnimationCurve* GIAABPCBIND; // 0x18
		::UnityEngine::Color FFNKAKKGKLG; // 0x20
		::UnityEngine::Vector3 KKLPAEJBEGK; // 0x30
		::UnityEngine::Vector2 MEACDJBGELB; // 0x3C
		::System::Boolean JOLIEPNADGH; // 0x44
		::UnityEngine::Vector4 GDOAKBIBAAM; // 0x48
		::UnityEngine::Vector3 DBGJPFGNMHF; // 0x58
		::UnityEngine::Vector4 OOKMFMMOFOO; // 0x64
		::UnityEngine::Vector4 PCJOOMGNGML; // 0x74
		::UnityEngine::Color JOPGBJEPDAG; // 0x84
		::UnityEngine::Vector4 NONHKHHLHPI; // 0x94
		::UnityEngine::Vector4 JJHOLPJBDCJ; // 0xA4
		::UnityEngine::Vector3 OPFLAACBAEH; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CLASS_1_B4FB15650237854D__CTOR_OFFSET))(this);
		}
	};
}
