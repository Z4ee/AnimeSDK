#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Ara { class AraTrail; }
namespace UnityEngine { class Gradient; }

#define ARA_COLORFROMSPEED_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BED1CE0)
#define ARA_COLORFROMSPEED_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BED1B90)
#define ARA_COLORFROMSPEED_SETCOLORFROMSPEED_OFFSET UNITYSDK_OFFSET(0x1BED1DC0)
#define ARA_COLORFROMSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED2050)

namespace Ara
{
	inline static constexpr unsigned int ColorFromSpeed_TypeDefinitionIndex = 31380;

	class ColorFromSpeed : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Ara::AraTrail* trail; // 0x18
		::UnityEngine::Gradient* colorFromSpeed; // 0x20
		::System::Single minSpeed; // 0x28
		::System::Single maxSpeed; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_COLORFROMSPEED__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_COLORFROMSPEED_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_COLORFROMSPEED_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetColorFromSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_COLORFROMSPEED_SETCOLORFROMSPEED_OFFSET))(this);
		}
	};
}
