#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPGTools::Timeline { class CharacterStopLookAtData; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPLOOKATBEHAVIOUR_METHOD_3_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0xE8CDBD0)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPLOOKATBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8CDE10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopLookAtBehaviour_TypeDefinitionIndex = 47989;

	class CharacterStopLookAtBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStopLookAtData* Config; // 0x20
		::RPG::Client::CharacterMonoAvatar* _CharacterMonoAvatar; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPLOOKATBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_5EBCF276C230582C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPLOOKATBEHAVIOUR_METHOD_3_5EBCF276C230582C_OFFSET))(this);
		}
	};
}
