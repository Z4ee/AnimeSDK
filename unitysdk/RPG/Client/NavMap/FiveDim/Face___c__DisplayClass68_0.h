#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7E7FCFD10613C60;

#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD941EF0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS68_0__GETSURFACE_B__0_OFFSET UNITYSDK_OFFSET(0xD942360)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int Face___c__DisplayClass68_0_TypeDefinitionIndex = 74535;

	class Face___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::UInt32 surfaceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSurface_b__0(::Class_1_E7E7FCFD10613C60* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E7E7FCFD10613C60*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE___C__DISPLAYCLASS68_0__GETSURFACE_B__0_OFFSET))(this, a1);
		}
	};
}
