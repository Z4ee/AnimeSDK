#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D142850)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopFullBodyData_TypeDefinitionIndex = 48427;

	class CharacterStopFullBodyData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYDATA__CTOR_OFFSET))(this);
		}
	};
}
