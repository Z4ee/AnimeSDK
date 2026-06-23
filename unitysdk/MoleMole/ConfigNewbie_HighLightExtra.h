#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/MoleMole/ConfigNewbie_TargetPath_ExtraType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07A180)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_HighLightExtra_TypeDefinitionIndex = 49753;

	class ConfigNewbie_HighLightExtra : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTEXTRA__CTOR_OFFSET))(this);
		}
	};
}
