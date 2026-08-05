#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimeLinePlayableBehaviour.h"

#define MOLEMOLE_TIMELINE_POSTPROCESSBEHAVIOURBASE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x190BFEA0)
#define MOLEMOLE_TIMELINE_POSTPROCESSBEHAVIOURBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x190BC2E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PostProcessBehaviourBase_TypeDefinitionIndex = 88400;

	class PostProcessBehaviourBase : public ::MoleMole::Timeline::TimeLinePlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSBEHAVIOURBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSBEHAVIOURBASE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
