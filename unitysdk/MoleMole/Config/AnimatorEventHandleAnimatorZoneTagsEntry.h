#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTHANDLEANIMATORZONETAGSENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x139905F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTHANDLEANIMATORZONETAGSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x139906F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventHandleAnimatorZoneTagsEntry_TypeDefinitionIndex = 82952;

	class AnimatorEventHandleAnimatorZoneTagsEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* AnimatorStateTags; // 0x58
		::System::Boolean IsAdd; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTHANDLEANIMATORZONETAGSENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTHANDLEANIMATORZONETAGSENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
