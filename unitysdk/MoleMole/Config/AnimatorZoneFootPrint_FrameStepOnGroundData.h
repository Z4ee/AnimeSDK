#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FrameStepOnGroundSegment.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17524760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFootPrint_FrameStepOnGroundData_TypeDefinitionIndex = 49602;

	class AnimatorZoneFootPrint_FrameStepOnGroundData : public ::System::Object
	{
	public:
		::System::String* NextAnimStateName; // 0x10
		::System::Int32 NextAnimStateNameHash; // 0x18
		::System::Int32 NextAnimTransitionOffset; // 0x1C
		::System::Boolean IsPredictedLoop; // 0x20
		::System::Int32 NonUniformMotionPlayerStopFrame; // 0x24
		::System::Boolean EnableKneeSmooth; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment>* FrameStepOnGround; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA__CTOR_OFFSET))(this);
		}
	};
}
