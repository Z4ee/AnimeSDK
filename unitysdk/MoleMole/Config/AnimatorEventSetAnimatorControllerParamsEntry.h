#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSETANIMATORCONTROLLERPARAMSENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1484BE30)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSETANIMATORCONTROLLERPARAMSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1484BEB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventSetAnimatorControllerParamsEntry_TypeDefinitionIndex = 66413;

	class AnimatorEventSetAnimatorControllerParamsEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatParams; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntParams; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BoolParams; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* TriggerParams; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSETANIMATORCONTROLLERPARAMSENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSETANIMATORCONTROLLERPARAMSENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
