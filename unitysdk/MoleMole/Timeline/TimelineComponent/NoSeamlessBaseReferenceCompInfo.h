#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NOSEAMLESSBASEREFERENCECOMPINFO_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0x1B6B7220)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NOSEAMLESSBASEREFERENCECOMPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B7270)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int NoSeamlessBaseReferenceCompInfo_TypeDefinitionIndex = 75420;

	class NoSeamlessBaseReferenceCompInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NOSEAMLESSBASEREFERENCECOMPINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckIsValid(::UnityEngine::GameObject* root)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NOSEAMLESSBASEREFERENCECOMPINFO_CHECKISVALID_OFFSET))(this, root);
		}
	};
}
