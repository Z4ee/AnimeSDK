#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPGTools::Timeline { class CharacterStopFullBodyChainData; }
namespace RPGTools::Timeline { class CharacterStopFullBodyData; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYBEHAVIOUR_METHOD_3_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0xAB3B470)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAB3B630)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3B620)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopFullBodyBehaviour_TypeDefinitionIndex = 38817;

	class CharacterStopFullBodyBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStopFullBodyData* Config; // 0x20
		::Il2CppArray<::RPGTools::Timeline::CharacterStopFullBodyChainData*>* Chains; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_1B3D8773D1869301()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYBEHAVIOUR_METHOD_3_1B3D8773D1869301_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
