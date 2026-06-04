#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCFFD5A0)
#define RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCFF3370)
#define RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF3320)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CustomEventBehaviour_TypeDefinitionIndex = 45669;

	class CustomEventBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Double Start; // 0x10
		::System::Double End; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}
	};
}
