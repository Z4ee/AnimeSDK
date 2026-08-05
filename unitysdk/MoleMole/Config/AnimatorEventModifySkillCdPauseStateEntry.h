#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYSKILLCDPAUSESTATEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1145B7D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYSKILLCDPAUSESTATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1145B8E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventModifySkillCdPauseStateEntry_TypeDefinitionIndex = 45478;

	class AnimatorEventModifySkillCdPauseStateEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* SkillNames; // 0x58
		::System::Boolean IsPause; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYSKILLCDPAUSESTATEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYSKILLCDPAUSESTATEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
