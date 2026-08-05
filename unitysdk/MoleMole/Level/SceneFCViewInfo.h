#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_LEVEL_SCENEFCVIEWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1908C580)

namespace MoleMole::Level
{
	inline static constexpr unsigned int SceneFCViewInfo_TypeDefinitionIndex = 42762;

	class SceneFCViewInfo : public ::System::Object
	{
	public:
		::System::String* scenePath; // 0x10
		::System::String* fcPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_SCENEFCVIEWINFO__CTOR_OFFSET))(this);
		}
	};
}
