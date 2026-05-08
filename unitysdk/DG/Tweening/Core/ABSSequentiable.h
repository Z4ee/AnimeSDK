#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/TweenType.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define DG_TWEENING_CORE_ABSSEQUENTIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C539A00)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int ABSSequentiable_TypeDefinitionIndex = 25486;

	class ABSSequentiable : public ::System::Object
	{
	public:
		::DG::Tweening::TweenCallback* onStart; // 0x10
		::System::Single sequencedEndPosition; // 0x18
		::DG::Tweening::TweenType tweenType; // 0x1C
		::System::Single sequencedPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_ABSSEQUENTIABLE__CTOR_OFFSET))(this);
		}
	};
}
