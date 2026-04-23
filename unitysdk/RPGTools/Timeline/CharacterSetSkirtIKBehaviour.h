#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

class SkirtIK;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xB8ADDB0)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB8AE1A0)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8AE160)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB8AE000)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AE110)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterSetSkirtIKBehaviour_TypeDefinitionIndex = 44738;

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

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}
	};
}
