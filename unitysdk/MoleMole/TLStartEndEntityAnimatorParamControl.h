#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class AnimatorParamControl; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_TLSTARTENDENTITYANIMATORPARAMCONTROL_ISBLENDINVALID_OFFSET UNITYSDK_OFFSET(0x1304B690)
#define MOLEMOLE_TLSTARTENDENTITYANIMATORPARAMCONTROL_ISBLENDOUTVALID_OFFSET UNITYSDK_OFFSET(0x1304B6F0)
#define MOLEMOLE_TLSTARTENDENTITYANIMATORPARAMCONTROL_ISENABLEANIMBLENDTARGETV2_OFFSET UNITYSDK_OFFSET(0x1304B750)
#define MOLEMOLE_TLSTARTENDENTITYANIMATORPARAMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1304B840)

namespace MoleMole
{
	inline static constexpr unsigned int TLStartEndEntityAnimatorParamControl_TypeDefinitionIndex = 46493;

	class TLStartEndEntityAnimatorParamControl : public ::System::Object
	{
	public:
		::MoleMole::Battle::AnimatorParamControl* StartEntityAnimatorParamControl; // 0x10
		::MoleMole::Battle::AnimatorParamControl* EndEntityAnimatorParamControl; // 0x18
		::System::Single BlendInTime; // 0x20
		::UnityEngine::AnimationCurve* BlendInCurve; // 0x28
		::System::Single BlendOutTime; // 0x30
		::UnityEngine::AnimationCurve* BlendOutCurve; // 0x38
		::System::Boolean ForceEnableAnimBlendTargetV2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TLSTARTENDENTITYANIMATORPARAMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Boolean IsBlendInValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TLSTARTENDENTITYANIMATORPARAMCONTROL_ISBLENDINVALID_OFFSET))(this);
		}

		::System::Boolean IsBlendOutValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TLSTARTENDENTITYANIMATORPARAMCONTROL_ISBLENDOUTVALID_OFFSET))(this);
		}

		::System::Boolean IsEnableAnimBlendTargetV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TLSTARTENDENTITYANIMATORPARAMCONTROL_ISENABLEANIMBLENDTARGETV2_OFFSET))(this);
		}
	};
}
