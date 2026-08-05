#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CollisionDetect.h"
#include "unitysdk/MoleMole/Config/FanCollisionWithHeightDetect_FanFollowAtkDirType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x14877F80)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14877F10)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x14877E70)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14878040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCollisionWithHeightDetect_TypeDefinitionIndex = 90127;

	class FanCollisionWithHeightDetect : public ::MoleMole::Config::CollisionDetect
	{
	public:
		::System::Single Height; // 0x80
		::System::Single InvalidRadius; // 0x84
		::System::Int32 numberOfRays; // 0x88
		::System::Single InvalidAngle; // 0x8C
		::System::Single FanAngle; // 0x90
		::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType FollowAtkDirType; // 0x94
		::System::Single Radius; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_TOSTRING_OFFSET))(this);
		}

		::System::Void AttachPatternMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_ATTACHPATTERNMETHOD_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
