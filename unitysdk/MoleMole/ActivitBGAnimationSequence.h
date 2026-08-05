#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityUnityAnimationReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_ACTIVITBGANIMATIONSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C9C2A0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivitBGAnimationSequence_TypeDefinitionIndex = 68582;

	class ActivitBGAnimationSequence : public ::System::Object
	{
	public:
		::UnityEngine::Animation* unitAnimation; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ActivityUnityAnimationReference*>* animList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITBGANIMATIONSEQUENCE__CTOR_OFFSET))(this);
		}
	};
}
