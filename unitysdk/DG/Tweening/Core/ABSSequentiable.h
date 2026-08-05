#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/TweenType.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define DG_TWEENING_CORE_ABSSEQUENTIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4A2A0)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int ABSSequentiable_TypeDefinitionIndex = 28581;

	class ABSSequentiable : public ::System::Object
	{
	public:
		::DG::Tweening::TweenCallback* onStart; // 0x10
		::System::Single sequencedEndPosition; // 0x18
		::System::Single sequencedPosition; // 0x1C
		::DG::Tweening::TweenType tweenType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_ABSSEQUENTIABLE__CTOR_OFFSET))(this);
		}
	};
}
