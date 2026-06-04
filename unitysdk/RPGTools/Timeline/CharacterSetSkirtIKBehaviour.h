#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

class SkirtIK;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xCFF14A0)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCFF1440)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xCFF1030)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xCFF1280)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF1390)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterSetSkirtIKBehaviour_TypeDefinitionIndex = 45285;

	class CharacterSetSkirtIKBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* CharacterUniqueName; // 0x20
		::System::Boolean EnableHair; // 0x28
		::System::Boolean EnableSkirt; // 0x29
		::System::Single HairErrTolerRate; // 0x2C
		::System::Boolean DisableHairRestrict; // 0x30
		::System::Single HairMaxRestrict; // 0x34
		::System::Single HairOffset_X; // 0x38
		::System::Single HairOffset_Y; // 0x3C
		::System::Single Hair_Duration; // 0x40
		::System::String* Hair_CurveName; // 0x48
		::System::Single _BaseDuration; // 0x50
		::System::Boolean _UseCurveBlend; // 0x54
		::SkirtIK* _SkirtIK; // 0x58
		::UnityEngine::AnimationCurve* _BlendCurve; // 0x60
		::UnityEngine::AnimationCurve* _BaseCurve; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_5A124CAF1E48B74F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
		}

		::System::Void Method_3_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}
	};
}
