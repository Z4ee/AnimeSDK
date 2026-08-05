#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/ABSSequentiable.h"

namespace DG::Tweening { class TweenCallback; }

#define DG_TWEENING_CORE_SEQUENCECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBED90)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int SequenceCallback_TypeDefinitionIndex = 28595;

	class SequenceCallback : public ::DG::Tweening::Core::ABSSequentiable
	{
	public:
		::System::Void _ctor(::System::Single sequencedPosition, ::DG::Tweening::TweenCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_SEQUENCECALLBACK__CTOR_OFFSET))(this, sequencedPosition, callback);
		}
	};
}
