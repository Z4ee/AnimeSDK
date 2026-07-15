#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

class Class_1_945ACFB1FEBC7A2C_17;
namespace RPGTools::Timeline { class CharacterFullBodyChainData; }
namespace RPGTools::Timeline { class CharacterFullBodyClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_75E66032522D4667_METHOD_3_0CACDFAF951A2118_OFFSET UNITYSDK_OFFSET(0x17321340)
#define CLASS_3_75E66032522D4667_METHOD_3_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x17320AC0)
#define CLASS_3_75E66032522D4667_METHOD_3_EDB27C1AE53E0E20_OFFSET UNITYSDK_OFFSET(0x173211C0)
#define CLASS_3_75E66032522D4667__CTOR_OFFSET UNITYSDK_OFFSET(0x17321540)

inline static constexpr unsigned int Class_3_75E66032522D4667_TypeDefinitionIndex = 46185;

class Class_3_75E66032522D4667 : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::RPGTools::Timeline::CharacterFullBodyClip* Field_3_0; // 0x20
	::Class_1_945ACFB1FEBC7A2C_17* Field_3_1; // 0x28
	::Il2CppArray<::RPGTools::Timeline::CharacterFullBodyChainData*>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75E66032522D4667__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75E66032522D4667_METHOD_3_AA7E3074254D484A_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_0CACDFAF951A2118(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::CharacterFullBodyChainData* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPGTools::Timeline::CharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + CLASS_3_75E66032522D4667_METHOD_3_0CACDFAF951A2118_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_3_EDB27C1AE53E0E20(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::CharacterFullBodyChainData* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPGTools::Timeline::CharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + CLASS_3_75E66032522D4667_METHOD_3_EDB27C1AE53E0E20_OFFSET))(this, a1, a2);
	}
};
