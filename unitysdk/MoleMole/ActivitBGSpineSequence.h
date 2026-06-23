#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivitySpineAnimationReference; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ACTIVITBGSPINESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C47D40)

namespace MoleMole
{
	inline static constexpr unsigned int ActivitBGSpineSequence_TypeDefinitionIndex = 52705;

	class ActivitBGSpineSequence : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ActivitySpineAnimationReference*>* animList; // 0x10
		::Spine::Unity::SkeletonGraphic* spineGraphic; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITBGSPINESEQUENCE__CTOR_OFFSET))(this);
		}
	};
}
