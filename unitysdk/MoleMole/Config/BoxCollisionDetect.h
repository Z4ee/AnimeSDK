#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CollisionDetect.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x116F8110)
#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116F81D0)
#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x116F8240)
#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116F8260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BoxCollisionDetect_TypeDefinitionIndex = 40973;

	class BoxCollisionDetect : public ::MoleMole::Config::CollisionDetect
	{
	public:
		::System::String* eHorizontalOff; // 0x80
		::System::String* eVerticalOff; // 0x88
		::System::Single height; // 0x90
		::System::Single distance; // 0x94
		::System::Single width; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONDETECT__CTOR_OFFSET))(this);
		}

		::System::Void AttachPatternMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_ATTACHPATTERNMETHOD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONDETECT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
