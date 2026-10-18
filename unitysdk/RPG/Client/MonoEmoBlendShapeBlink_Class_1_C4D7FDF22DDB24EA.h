#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CLASS_1_C4D7FDF22DDB24EA__CTOR_OFFSET UNITYSDK_OFFSET(0xD80CDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoBlendShapeBlink_Class_1_C4D7FDF22DDB24EA_TypeDefinitionIndex = 71146;

	class MonoEmoBlendShapeBlink_Class_1_C4D7FDF22DDB24EA : public ::System::Object
	{
	public:
		::System::Int32 GMDBHJKEAEI; // 0x10
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x14
		::System::Boolean MOKNCFJICIC; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CLASS_1_C4D7FDF22DDB24EA__CTOR_OFFSET))(this);
		}
	};
}
