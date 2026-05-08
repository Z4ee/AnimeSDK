#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CollisionDetect.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0xED0E1D0)
#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xED0E290)
#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0xED0E300)
#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xED0E320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BoxCollisionDetect_TypeDefinitionIndex = 81837;

	class BoxCollisionDetect : public ::MoleMole::Config::CollisionDetect
	{
	public:
		::System::String* eVerticalOff; // 0x80
		::System::String* eHorizontalOff; // 0x88
		::System::Single height; // 0x90
		::System::Single width; // 0x94
		::System::Single distance; // 0x98

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
