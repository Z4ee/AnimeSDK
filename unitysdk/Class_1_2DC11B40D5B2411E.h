#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

#define CLASS_1_2DC11B40D5B2411E_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x157808D0)
#define CLASS_1_2DC11B40D5B2411E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15780880)
#define CLASS_1_2DC11B40D5B2411E_NAVIGATIONFAILPROCESS_OFFSET UNITYSDK_OFFSET(0x15780810)
#define CLASS_1_2DC11B40D5B2411E_PLAYNAVIGATIONAUDIO_OFFSET UNITYSDK_OFFSET(0x157806F0)
#define CLASS_1_2DC11B40D5B2411E__CTOR_OFFSET UNITYSDK_OFFSET(0x15780910)

inline static constexpr unsigned int Class_1_2DC11B40D5B2411E_TypeDefinitionIndex = 61302;

class Class_1_2DC11B40D5B2411E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DC11B40D5B2411E__CTOR_OFFSET))(this);
	}

	::System::Void PlayNavigationAudio()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DC11B40D5B2411E_PLAYNAVIGATIONAUDIO_OFFSET))(this);
	}

	::System::Void NavigationFailProcess(::UnityEngine::EventSystems::MoveDirection a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_2DC11B40D5B2411E_NAVIGATIONFAILPROCESS_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DC11B40D5B2411E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DC11B40D5B2411E_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
