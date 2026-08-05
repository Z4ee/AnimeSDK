#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUpdateModeBase.h"

namespace UnityEngine { class Animator; }

#define MONOANIMATORUPDATEMODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x114A0900)
#define MONOANIMATORUPDATEMODE_GET_AVATARANIMATOR_OFFSET UNITYSDK_OFFSET(0x114A0740)
#define MONOANIMATORUPDATEMODE_UPDATEMANUAL_OFFSET UNITYSDK_OFFSET(0x114A0AB0)
#define MONOANIMATORUPDATEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x114A0C70)

inline static constexpr unsigned int MonoAnimatorUpdateMode_TypeDefinitionIndex = 46746;

class MonoAnimatorUpdateMode : public ::MonoUpdateModeBase
{
public:
	::UnityEngine::Animator* _avatarAnimator; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATORUPDATEMODE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Animator* get_avatarAnimator()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATORUPDATEMODE_GET_AVATARANIMATOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATORUPDATEMODE_AWAKE_OFFSET))(this);
	}

	::System::Void UpdateManual()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATORUPDATEMODE_UPDATEMANUAL_OFFSET))(this);
	}
};
