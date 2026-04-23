#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FREELOOK3RDRECENTERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CCD20)

namespace RPG::Client
{
	inline static constexpr unsigned int Freelook3rdRecenterParams_TypeDefinitionIndex = 64221;

	class Freelook3rdRecenterParams : public ::System::Object
	{
	public:
		::System::Single start; // 0x10
		::System::Single duration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOK3RDRECENTERPARAMS__CTOR_OFFSET))(this);
		}
	};
}
