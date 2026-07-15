#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CLASS_1_C4D7FDF22DDB24EA__CTOR_OFFSET UNITYSDK_OFFSET(0x191454B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoBlendShapeBlink_Class_1_C4D7FDF22DDB24EA_TypeDefinitionIndex = 67941;

	class MonoEmoBlendShapeBlink_Class_1_C4D7FDF22DDB24EA : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion Field_1_0; // 0x10
		::System::Int32 Field_1_1; // 0x20
		::System::Boolean Field_1_2; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CLASS_1_C4D7FDF22DDB24EA__CTOR_OFFSET))(this);
		}
	};
}
