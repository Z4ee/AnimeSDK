#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimationConfig; }
namespace MoleMole::Config { class Hollow2DInfo; }
namespace MoleMole::Config { class Hollow3DInfo; }

#define MOLEMOLE_CONFIG_HOLLOWPOSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE97D7C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowPosConfig_TypeDefinitionIndex = 74331;

	class HollowPosConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::Hollow3DInfo* _3DInfo; // 0x10
		::MoleMole::Config::AnimationConfig* _animationConfig; // 0x18
		::MoleMole::Config::Hollow2DInfo* _2DInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPOSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
