#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

class Class_1_945ACFB1FEBC7A2C_16;
namespace RPGTools::Timeline { class CharacterFullBodyChainData; }
namespace RPGTools::Timeline { class CharacterFullBodyClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_F9985B46F82B7991_METHOD_3_85B99880C160E13F_OFFSET UNITYSDK_OFFSET(0x157E5A50)
#define CLASS_3_F9985B46F82B7991_METHOD_3_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x157E51A0)
#define CLASS_3_F9985B46F82B7991_METHOD_3_F3D9913B0C17B113_OFFSET UNITYSDK_OFFSET(0x157E58A0)
#define CLASS_3_F9985B46F82B7991__CTOR_OFFSET UNITYSDK_OFFSET(0x157E5C70)

inline static constexpr unsigned int Class_3_F9985B46F82B7991_TypeDefinitionIndex = 47959;

class Class_3_F9985B46F82B7991 : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::Il2CppArray<::RPGTools::Timeline::CharacterFullBodyChainData*>* MMAEKLBBLOD; // 0x20
	::Class_1_945ACFB1FEBC7A2C_16* EABKOHGCHFP; // 0x28
	::RPGTools::Timeline::CharacterFullBodyClip* PJCDEGEDNFA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9985B46F82B7991__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9985B46F82B7991_METHOD_3_AA7E3074254D484A_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_85B99880C160E13F(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::CharacterFullBodyChainData* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPGTools::Timeline::CharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + CLASS_3_F9985B46F82B7991_METHOD_3_85B99880C160E13F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_3_F3D9913B0C17B113(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::CharacterFullBodyChainData* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPGTools::Timeline::CharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + CLASS_3_F9985B46F82B7991_METHOD_3_F3D9913B0C17B113_OFFSET))(this, a1, a2);
	}
};
