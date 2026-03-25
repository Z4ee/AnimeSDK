#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CROWDANIMATOR_CLIPDATA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x94279E0)
#define RPG_CLIENT_CROWDANIMATOR_CLIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9427A30)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int ClipData_TypeDefinitionIndex = 60442;

	class ClipData : public ::System::Object
	{
	public:
		::System::Int32 clipIndex; // 0x10
		::System::Int32 clipStartFrame; // 0x14
		::System::Int32 clipFrameCount; // 0x18
		::System::Single length; // 0x1C
		::System::Int32 isClipLooping; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CLIPDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CLIPDATA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}
	};
}
