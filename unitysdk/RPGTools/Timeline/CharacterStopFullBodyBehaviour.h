#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPGTools::Timeline { class CharacterStopFullBodyChainData; }
namespace RPGTools::Timeline { class CharacterStopFullBodyData; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYBEHAVIOUR_METHOD_3_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0xB8B0210)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8B03D0)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B03C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopFullBodyBehaviour_TypeDefinitionIndex = 44720;

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

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
